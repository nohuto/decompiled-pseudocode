/*
 * XREFs of MiMappedPageWriter @ 0x14013DAC4
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     MiFreeModWriterEntry @ 0x14008E6C8 (MiFreeModWriterEntry.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     MiAllocateModWriterEntry @ 0x1401007D0 (MiAllocateModWriterEntry.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiDeleteMappedMdls @ 0x1401E5A44 (MiDeleteMappedMdls.c)
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
  __int64 **v14; // rax
  __int64 v15; // rcx
  PVOID *v16; // rcx
  PVOID Object[18]; // [rsp+40h] [rbp-418h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+D0h] [rbp-388h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = KeSetPriorityThread(CurrentThread, 18);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v4 = Object;
  v5 = v3;
  v6 = (__int64)(StartContext + 3848);
  v7 = 16LL;
  do
  {
    *v4 = (PVOID)v6;
    v6 += 24LL;
    ++v4;
    --v7;
  }
  while ( v7 );
  Object[16] = StartContext + 144;
  Object[17] = StartContext + 704;
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)3;
LABEL_4:
  v8 = -1;
LABEL_5:
  if ( v8 == -1
    || (v9 = *((_QWORD *)StartContext + 904), v10 = *((_QWORD *)StartContext + 918), v9 <= v10)
    || v9 - v10 < 0x10 && !*((_DWORD *)StartContext + 175) )
  {
    v8 = KeWaitForMultipleObjects(0x12u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *((_DWORD *)StartContext + 37);
      if ( !v11 && v8 < 0x10 )
      {
        v6 = 5LL * v8;
        if ( *(_QWORD *)&StartContext[40 * v8 + 3024] == 0xFFFFFFFFFLL )
          goto LABEL_4;
      }
      if ( *((_QWORD *)StartContext + 904) == *((_QWORD *)StartContext + 918) )
        break;
      if ( (unsigned __int64)*((unsigned int *)StartContext + 134) >= *((_QWORD *)StartContext + 66) )
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
        v14 = (__int64 **)(StartContext + 544);
        if ( *v14 == (__int64 *)v14 )
        {
          StartContext[584] = 1;
        }
        else
        {
          ModWriterEntry = *v14;
          v15 = **v14;
          if ( (__int64 **)(*v14)[1] != v14 || *(__int64 **)(v15 + 8) != ModWriterEntry )
            __fastfail(3u);
          *v14 = (__int64 *)v15;
          *(_QWORD *)(v15 + 8) = v14;
        }
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      if ( ModWriterEntry )
      {
        v13 = _InterlockedIncrement((volatile signed __int32 *)StartContext + 134);
        if ( v13 > *((_DWORD *)StartContext + 135) )
          *((_DWORD *)StartContext + 135) = v13;
        ModWriterEntry[25] = 0LL;
        if ( !(unsigned int)MiGatherMappedPages((__int64)StartContext, v8, (__int64)ModWriterEntry) )
        {
          _InterlockedAdd((volatile signed __int32 *)StartContext + 134, 0xFFFFFFFF);
          if ( (ModWriterEntry[5] & 1) != 0 )
          {
            --CurrentThread->SpecialApcDisable;
            v16 = (PVOID *)*((_QWORD *)StartContext + 69);
            if ( *v16 != StartContext + 544 )
              __fastfail(3u);
            ModWriterEntry[1] = (__int64)v16;
            *ModWriterEntry = (__int64)(StartContext + 544);
            *v16 = ModWriterEntry;
            *((_QWORD *)StartContext + 69) = ModWriterEntry;
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          }
          else
          {
            MiFreeModWriterEntry(ModWriterEntry, 1u);
          }
        }
        goto LABEL_5;
      }
      KeWaitForGate((__int64)(StartContext + 560), 0x13u);
    }
    if ( !v11 )
      goto LABEL_4;
    if ( !*((_DWORD *)StartContext + 134) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *((_DWORD *)StartContext + 134) );
  }
  MiDeleteMappedMdls(StartContext, v6);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v5);
}
