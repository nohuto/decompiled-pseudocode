/*
 * XREFs of MiMappedPageWriter @ 0x1401364A8
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiFreeModWriterEntry @ 0x140030670 (MiFreeModWriterEntry.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     MiAllocateModWriterEntry @ 0x1400E5684 (MiAllocateModWriterEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiDeleteMappedMdls @ 0x1401D4FC4 (MiDeleteMappedMdls.c)
 */

void __fastcall MiMappedPageWriter(char *StartContext)
{
  struct _KTHREAD *CurrentThread; // rsi
  KPRIORITY v3; // eax
  PVOID *v4; // rcx
  unsigned int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // r8d
  __int64 *ModWriterEntry; // rdi
  unsigned __int32 v13; // eax
  __int64 v14; // r8
  __int64 **v15; // rax
  __int64 v16; // rcx
  PVOID *v17; // rcx
  PVOID Object[18]; // [rsp+40h] [rbp-418h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+D0h] [rbp-388h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = KeSetPriorityThread(CurrentThread, 18);
  LODWORD(CurrentThread[1].Queue) |= 2u;
  v4 = Object;
  v5 = v3;
  v6 = (__int64)(StartContext + 3720);
  v7 = 16LL;
  do
  {
    *v4 = (PVOID)v6;
    v6 += 24LL;
    ++v4;
    --v7;
  }
  while ( v7 );
  Object[16] = StartContext + 136;
  Object[17] = StartContext + 712;
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)3;
LABEL_4:
  v8 = -1;
LABEL_5:
  if ( v8 == -1
    || (v9 = *((_QWORD *)StartContext + 752), v10 = *((_QWORD *)StartContext + 766), v9 <= v10)
    || v9 - v10 < 0x10 && !*((_DWORD *)StartContext + 177) )
  {
    v8 = KeWaitForMultipleObjects(0x12u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *((_DWORD *)StartContext + 35);
      if ( !v11 && v8 < 0x10 )
      {
        v6 = 5LL * v8;
        if ( *(_QWORD *)&StartContext[40 * v8 + 2896] == 0xFFFFFFFFFLL )
          goto LABEL_4;
      }
      if ( *((_QWORD *)StartContext + 752) == *((_QWORD *)StartContext + 766) )
        break;
      if ( (unsigned __int64)*((unsigned int *)StartContext + 136) >= *((_QWORD *)StartContext + 67) )
        ModWriterEntry = 0LL;
      else
        ModWriterEntry = (__int64 *)MiAllocateModWriterEntry((__int64)StartContext, 16LL, 1);
      if ( ModWriterEntry )
      {
        memset(ModWriterEntry, 0, 0x108uLL);
        *ModWriterEntry = 97LL;
        ModWriterEntry[24] = (__int64)StartContext;
      }
      else
      {
        --CurrentThread->SpecialApcDisable;
        v15 = (__int64 **)(StartContext + 552);
        if ( *v15 == (__int64 *)v15 )
        {
          StartContext[592] = 1;
        }
        else
        {
          ModWriterEntry = *v15;
          v16 = **v15;
          if ( (__int64 **)(*v15)[1] != v15 || *(__int64 **)(v16 + 8) != ModWriterEntry )
            __fastfail(3u);
          *v15 = (__int64 *)v16;
          *(_QWORD *)(v16 + 8) = v15;
        }
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      if ( ModWriterEntry )
      {
        v13 = _InterlockedIncrement((volatile signed __int32 *)StartContext + 136);
        if ( v13 > *((_DWORD *)StartContext + 137) )
          *((_DWORD *)StartContext + 137) = v13;
        ModWriterEntry[25] = 0LL;
        if ( !(unsigned int)MiGatherMappedPages((__int64)StartContext, v8, (__int64)ModWriterEntry) )
        {
          _InterlockedAdd((volatile signed __int32 *)StartContext + 136, 0xFFFFFFFF);
          if ( (ModWriterEntry[5] & 1) != 0 )
          {
            --CurrentThread->SpecialApcDisable;
            v17 = (PVOID *)*((_QWORD *)StartContext + 70);
            *ModWriterEntry = (__int64)(StartContext + 552);
            ModWriterEntry[1] = (__int64)v17;
            if ( *v17 != StartContext + 552 )
              __fastfail(3u);
            *v17 = ModWriterEntry;
            *((_QWORD *)StartContext + 70) = ModWriterEntry;
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          }
          else
          {
            MiFreeModWriterEntry(ModWriterEntry, 1u);
          }
        }
        goto LABEL_5;
      }
      KeWaitForGate((__int64)(StartContext + 568), 19);
    }
    if ( !v11 )
      goto LABEL_4;
    if ( !*((_DWORD *)StartContext + 136) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *((_DWORD *)StartContext + 136) );
  }
  MiDeleteMappedMdls(StartContext, v6);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v5, v14);
}
