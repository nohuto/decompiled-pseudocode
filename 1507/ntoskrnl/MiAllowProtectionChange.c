/*
 * XREFs of MiAllowProtectionChange @ 0x1400DCB94
 * Callers:
 *     MiProtectVirtualMemory @ 0x1404B9700 (MiProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     MiArbitraryCodeBlocked @ 0x1400DCCF8 (MiArbitraryCodeBlocked.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v10; // edi
  _DWORD *v11; // rbx
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v13; // ett
  unsigned __int64 i; // rax
  int v15; // eax
  int v17; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v21; // [rsp+A0h] [rbp+18h] BYREF

  if ( (*(_BYTE *)(a3 + 48) & 0xC0) == 0xC0 && (*(_DWORD *)(a3 + 48) & 0x38) != 0 )
    return 3221225541LL;
  v10 = 0;
  v11 = (_DWORD *)(a1 + 1272);
  v18 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 1272);
  }
  else
  {
    _m_prefetchw(v11);
    v13 = *v11 & 0x7FFFFFFF;
    if ( v13 != _InterlockedCompareExchange(v11, v13 + 1, v13) )
      ExpWaitForSpinLockSharedAndAcquire(v11);
  }
  for ( i = a5; i <= a6; i = v19 )
  {
    MiQueryAddressState(i, CurrentIrql, a3, a1, &v18, &v21, (__int64 *)&v19, &v17);
    v15 = v21;
    if ( v21 == -1 )
      v15 = 0;
    v21 = v15;
    if ( (v15 & 2) == 0 || (v15 & 2) != 0 && (a4 & 4) != 0 )
    {
      v10 = MiArbitraryCodeBlocked(a2);
      break;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
  }
  else
  {
    _InterlockedAnd(v11, 0xBFFFFFFF);
    _InterlockedDecrement(v11);
  }
  __writecr8(CurrentIrql);
  return v10;
}
