/*
 * XREFs of KeSetCpuSetsProcess @ 0x140205964
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x14000FB0C (KiAcquireProcessLockExclusive.c)
 *     KeQueryMaximumGroupCount @ 0x140021220 (KeQueryMaximumGroupCount.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiValidateCpuSetMasks @ 0x14013356C (KiValidateCpuSetMasks.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiUpdateThreadCpuSets @ 0x140205E64 (KiUpdateThreadCpuSets.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, char *a3, int a4)
{
  unsigned int v7; // ebp
  __int64 result; // rax
  unsigned int MaximumGroupCount; // esi
  __int64 v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  char *v13; // r14
  __int64 v14; // r8
  _QWORD *i; // rdi
  volatile signed __int32 *v16; // rbp
  unsigned int v17; // r14d
  __int64 updated; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 v22[8]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v23[2]; // [rsp+28h] [rbp-10h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  v7 = a2;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 1716) & 0x200) != 0 )
    {
      MaximumGroupCount = KeQueryMaximumGroupCount();
      if ( a4 )
        v10 = *(_QWORD *)(a1 + 1936);
      else
        v10 = *(_QWORD *)(a1 + 1944);
    }
    else
    {
      MaximumGroupCount = 1;
      if ( a4 )
        v10 = a1 + 1936;
      else
        v10 = a1 + 1944;
    }
    KiAcquireProcessLockExclusive(a1, v22);
    if ( v7 >= MaximumGroupCount )
      v7 = MaximumGroupCount;
    v11 = 0LL;
    if ( v7 )
    {
      v12 = (_QWORD *)v10;
      v11 = v7;
      v13 = &a3[-v10];
      v14 = v7;
      do
      {
        *v12 = *(_QWORD *)((char *)v12 + (_QWORD)v13);
        ++v12;
        --v14;
      }
      while ( v14 );
    }
    if ( (unsigned int)v11 < MaximumGroupCount )
      memset((void *)(v10 + 8 * v11), 0, 8LL * (MaximumGroupCount - (unsigned int)v11));
    v23[0] = 0LL;
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      v16 = (volatile signed __int32 *)(i - 95);
      v17 = 0;
      while ( _interlockedbittestandset64(v16 + 16, 0LL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v17);
        }
        while ( *((_QWORD *)v16 + 8) );
      }
      updated = KiUpdateThreadCpuSets(i - 95, v23);
      *((_QWORD *)v16 + 8) = 0LL;
      if ( updated )
      {
        LODWORD(v19) = KeGetPcr()->Prcb.Number;
        v20 = *(unsigned int *)(updated + 36);
        if ( (_DWORD)v19 != (_DWORD)v20 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          LOBYTE(v19) = 2;
          ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
          HalSendSoftwareInterrupt(v20, v19);
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
    else
      *(_DWORD *)(a1 + 64) = 0;
    KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), v23, v22[0]);
    return 0LL;
  }
  return result;
}
