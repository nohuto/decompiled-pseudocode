/*
 * XREFs of MiMappedPageWriter @ 0x140165698
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     MiFreeModWriterEntry @ 0x140082AAC (MiFreeModWriterEntry.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiAllocateModWriterEntry @ 0x14011E6B8 (MiAllocateModWriterEntry.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall MiMappedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  KPRIORITY v3; // eax
  __int64 v4; // r9
  PVOID *v5; // rcx
  unsigned int v6; // r14d
  char *v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // r8d
  __int64 *ModWriterEntry; // rdi
  unsigned __int32 v14; // eax
  __int64 **v15; // rbx
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 **v18; // rax
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 **v21; // rcx
  __int16 v22; // ax
  PVOID Object[18]; // [rsp+40h] [rbp-428h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+D0h] [rbp-398h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = KeSetPriorityThread(CurrentThread, 18);
  LODWORD(CurrentThread[1].Queue) |= 2u;
  v5 = Object;
  v6 = v3;
  v7 = (char *)(a1 + 3528);
  v8 = 16LL;
  do
  {
    *v5 = v7;
    v7 += 24;
    ++v5;
    --v8;
  }
  while ( v8 );
  v9 = -1;
  Object[16] = (PVOID)(a1 + 152);
  Object[17] = (PVOID)(a1 + 704);
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)3;
LABEL_4:
  if ( v9 == -1
    || (v10 = *(_QWORD *)(a1 + 5632), v11 = *(_QWORD *)(a1 + 5744), v10 <= v11)
    || v10 - v11 < 0x10 && !*(_DWORD *)(a1 + 700) )
  {
    v9 = KeWaitForMultipleObjects(0x12u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(a1 + 156);
      if ( !v12 && v9 < 0x10 && *(_QWORD *)(a1 + 40LL * v9 + 2768) == 0xFFFFFFFFFLL )
      {
LABEL_23:
        v9 = -1;
        goto LABEL_4;
      }
      if ( *(_QWORD *)(a1 + 5632) == *(_QWORD *)(a1 + 5744) )
        break;
      if ( (unsigned __int64)*(unsigned int *)(a1 + 560) >= *(_QWORD *)(a1 + 552) )
        ModWriterEntry = 0LL;
      else
        ModWriterEntry = (__int64 *)MiAllocateModWriterEntry(a1, 16LL, 1);
      if ( ModWriterEntry )
      {
        memset(ModWriterEntry, 0, 0x108uLL);
        *ModWriterEntry = 97LL;
        ModWriterEntry[24] = a1;
      }
      else
      {
        --CurrentThread->SpecialApcDisable;
        v18 = (__int64 **)(a1 + 568);
        if ( *v18 == (__int64 *)v18 )
        {
          *(_BYTE *)(a1 + 608) = 1;
        }
        else
        {
          ModWriterEntry = *v18;
          v19 = **v18;
          if ( (__int64 **)(*v18)[1] != v18 || *(__int64 **)(v19 + 8) != ModWriterEntry )
            __fastfail(3u);
          *v18 = (__int64 *)v19;
          *(_QWORD *)(v19 + 8) = v18;
        }
        v20 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v20;
        if ( !v20
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      if ( ModWriterEntry )
      {
        v14 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 560));
        if ( v14 > *(_DWORD *)(a1 + 564) )
          *(_DWORD *)(a1 + 564) = v14;
        ModWriterEntry[25] = 0LL;
        if ( !(unsigned int)MiGatherMappedPages(a1, v9, (__int64)ModWriterEntry, v4) )
        {
          _InterlockedAdd((volatile signed __int32 *)(a1 + 560), 0xFFFFFFFF);
          if ( (ModWriterEntry[5] & 1) != 0 )
          {
            --CurrentThread->SpecialApcDisable;
            v21 = *(__int64 ***)(a1 + 576);
            *ModWriterEntry = a1 + 568;
            ModWriterEntry[1] = (__int64)v21;
            if ( *v21 != (__int64 *)(a1 + 568) )
              __fastfail(3u);
            *v21 = ModWriterEntry;
            *(_QWORD *)(a1 + 576) = ModWriterEntry;
            v22 = CurrentThread->SpecialApcDisable + 1;
            CurrentThread->SpecialApcDisable = v22;
            if ( !v22
              && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
          }
          else
          {
            MiFreeModWriterEntry(ModWriterEntry, 1u);
          }
        }
        goto LABEL_4;
      }
      KeWaitForGate((_DWORD *)(a1 + 584), 0x13u);
    }
    if ( !v12 )
      goto LABEL_23;
    if ( !*(_DWORD *)(a1 + 560) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *(_DWORD *)(a1 + 560) );
  }
  v15 = (__int64 **)(a1 + 568);
  while ( *v15 != (__int64 *)v15 )
  {
    v16 = *v15;
    v17 = **v15;
    if ( (__int64 **)(*v15)[1] != v15 || *(__int64 **)(v17 + 8) != v16 )
      __fastfail(3u);
    *v15 = (__int64 *)v17;
    *(_QWORD *)(v17 + 8) = v15;
    MiFreeModWriterEntry(v16, 1u);
  }
  return KeSetActualBasePriorityThread((__int64)CurrentThread, v6);
}
