/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x140205B1C
 * Callers:
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 * Callees:
 *     KeQueryMaximumGroupCount @ 0x140021220 (KeQueryMaximumGroupCount.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiValidateCpuSetMasks @ 0x14013356C (KiValidateCpuSetMasks.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiUpdateThreadCpuSets @ 0x140205E64 (KiUpdateThreadCpuSets.c)
 *     KiAcquireProcessLockShared @ 0x14020A50C (KiAcquireProcessLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, char *a3)
{
  unsigned int v5; // esi
  __int64 result; // rax
  __int64 v7; // rbp
  _QWORD *v8; // r14
  USHORT MaximumGroupCount; // ax
  unsigned int v10; // edi
  __int64 v11; // r9
  _QWORD *v12; // rdx
  char *v13; // r15
  __int64 v14; // r8
  __int64 updated; // rax
  __int64 v16; // rdx
  volatile signed __int32 *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v21; // [rsp+20h] [rbp-28h]
  _QWORD *v22[4]; // [rsp+28h] [rbp-20h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int8 v24; // [rsp+68h] [rbp+20h] BYREF

  v5 = a2;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v22[0] = 0LL;
    v7 = *(_QWORD *)(a1 + 544);
    if ( (*(_DWORD *)(a1 + 1724) & 0x20000) != 0 )
    {
      MaximumGroupCount = KeQueryMaximumGroupCount();
      v8 = *(_QWORD **)(a1 + 1968);
      v21 = MaximumGroupCount;
    }
    else
    {
      v21 = 1;
      v8 = (_QWORD *)(a1 + 1968);
    }
    KiAcquireProcessLockShared(v7, &v24);
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( v5 >= v21 )
      v5 = v21;
    v11 = 0LL;
    if ( v5 )
    {
      v12 = v8;
      v11 = v5;
      v13 = (char *)(a3 - (char *)v8);
      v14 = v5;
      do
      {
        *v12 = *(_QWORD *)((char *)v12 + (_QWORD)v13);
        ++v12;
        --v14;
      }
      while ( v14 );
    }
    if ( (unsigned int)v11 < v21 )
      memset(&v8[v11], 0, 8LL * (v21 - (unsigned int)v11));
    updated = KiUpdateThreadCpuSets(a1, v22);
    *(_QWORD *)(a1 + 64) = 0LL;
    v17 = (volatile signed __int32 *)(v7 + 64);
    v18 = updated;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v17, retaddr);
    }
    else
    {
      _InterlockedAnd(v17, 0xBFFFFFFF);
      _InterlockedDecrement(v17);
    }
    if ( v18 )
    {
      v19 = *(unsigned int *)(v18 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v19 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LOBYTE(v16) = 2;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v19, v16);
      }
    }
    KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), v22, v24);
    return 0LL;
  }
  return result;
}
