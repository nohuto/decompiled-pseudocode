/*
 * XREFs of MiLockProtoPage @ 0x14007B590
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiMakeProtoAddressValid @ 0x1400E08B8 (MiMakeProtoAddressValid.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

ULONG_PTR __fastcall MiLockProtoPage(ULONG_PTR a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _KPROCESS *Process; // rbp
  __int64 v6; // r11
  unsigned __int64 v7; // r10
  unsigned __int64 *v8; // r9
  unsigned __int64 PteShadow; // rax
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v12; // edi
  volatile signed __int32 *v14; // rbx
  signed __int32 v15; // ett
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v6 = 0x90482413000LL;
    v7 = 2040LL;
    v8 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v8;
    if ( (unsigned __int64)(v8 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v8, *v8);
    v17 = PteShadow;
    if ( (unsigned __int64)&v17 + v6 <= v7 )
      PteShadow = MiReadPteShadow(&v17, PteShadow);
    v10 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v12);
      }
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v10);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    if ( !a1 )
      return 0LL;
  }
  v14 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&Process[1].IdealNode[8], retaddr);
  }
  else
  {
    _InterlockedAnd(v14, 0xBFFFFFFF);
    _InterlockedDecrement(v14);
  }
  __writecr8(a3);
  MiMakeProtoAddressValid(a1);
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    _m_prefetchw((const void *)v14);
    v15 = *v14 & 0x7FFFFFFF;
    if ( v15 != _InterlockedCompareExchange(v14, v15 + 1, v15) )
      ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
  }
  return a1;
}
