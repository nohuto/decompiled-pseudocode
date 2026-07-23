/*
 * XREFs of MiSystemImageHasPrivateFixups @ 0x140111970
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSystemImageHasPrivateFixups(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rdi
  bool v4; // zf
  unsigned __int8 CurrentIrql; // si
  int v9; // ett
  __int64 *v10; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0LL;
  v4 = qword_14034E9C8 == (_QWORD)&qword_14034E9C8;
  *a3 = 0;
  *a2 = 0LL;
  if ( v4
    || a1 + 0x80000000000LL > 0x7FFFFFFFFFLL
    && (!PsNtosImageBase
     || (a1 >= PsNtosImageEnd || a1 < (unsigned __int64)PsNtosImageBase)
     && (a1 >= PsHalImageEnd || a1 < (unsigned __int64)PsHalImageBase))
    && a1 + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    return 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034E9C0);
  }
  else
  {
    _m_prefetchw(&dword_14034E9C0);
    v9 = dword_14034E9C0 & 0x7FFFFFFF;
    if ( v9 != _InterlockedCompareExchange(
                 &dword_14034E9C0,
                 (dword_14034E9C0 & 0x7FFFFFFF) + 1,
                 dword_14034E9C0 & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&dword_14034E9C0);
  }
  v10 = (__int64 *)qword_14034E9C8;
  if ( (__int64 *)qword_14034E9C8 != &qword_14034E9C8 )
  {
    while ( a1 < v10[2] || a1 > v10[3] )
    {
      v10 = (__int64 *)*v10;
      if ( v10 == &qword_14034E9C8 )
        goto LABEL_10;
    }
    v12 = v10[2];
    v13 = (a1 - v12) >> 12;
    if ( _bittest(*(const signed __int32 **)(v10[5] + 8), v13) )
    {
      v3 = v12 - v10[4];
      *a2 = v10[6];
      *a3 = v13;
    }
  }
LABEL_10:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034E9C0, retaddr);
  }
  else
  {
    _InterlockedAnd(&dword_14034E9C0, 0xBFFFFFFF);
    _InterlockedDecrement(&dword_14034E9C0);
  }
  __writecr8(CurrentIrql);
  return v3;
}
