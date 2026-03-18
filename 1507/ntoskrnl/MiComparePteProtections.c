/*
 * XREFs of MiComparePteProtections @ 0x14021A188
 * Callers:
 *     MiCheckSecuredVad @ 0x1404749C8 (MiCheckSecuredVad.c)
 *     MiSecureVad @ 0x140477960 (MiSecureVad.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiComparePteProtections(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v5; // edi
  _KPROCESS *Process; // r12
  unsigned __int16 *v11; // rbx
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v13; // ett
  int v14; // ecx
  bool v15; // zf
  unsigned __int64 v17; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v18[8]; // [rsp+48h] [rbp-40h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v20; // [rsp+98h] [rbp+10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h] BYREF

  v5 = 0;
  v17 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = &Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    _m_prefetchw(v11);
    v13 = *(_DWORD *)v11 & 0x7FFFFFFF;
    if ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)v11, v13 + 1, v13) )
      ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
  }
  while ( a2 <= a3 )
  {
    MiQueryAddressState(a2, CurrentIrql, a1, (__int64)Process, &v17, &v20, (__int64 *)v18, &v21);
    v14 = v20;
    if ( !v20 )
    {
      if ( v21 )
        goto LABEL_11;
      v15 = ((*(_DWORD *)(a1 + 48) >> 3) & 0x1F) == 0;
      v14 = (*(_DWORD *)(a1 + 48) >> 3) & 0x1F;
      v20 = v14;
      if ( v15 )
        goto LABEL_11;
    }
    if ( a5 == 1 )
    {
      if ( v14 != a4 )
        goto LABEL_11;
    }
    else if ( v14 == -1
           || (v14 & 0xFFFFFFF8) == 0x10
           || (a4 != 1 ? (v15 = (v14 & 4) == 0) : (v15 = (v14 & 7) == 0), v15) )
    {
LABEL_11:
      v5 = -1073741755;
      break;
    }
    a2 = v18[0];
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&Process[1].IdealNode[8], retaddr);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)v11, 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)v11);
  }
  __writecr8(CurrentIrql);
  return v5;
}
