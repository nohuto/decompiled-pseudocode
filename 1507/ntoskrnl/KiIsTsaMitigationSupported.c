/*
 * XREFs of KiIsTsaMitigationSupported @ 0x140208CB0
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x140208044 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForTsa @ 0x140208BD4 (KiIsKvaShadowNeededForTsa.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x140209FC8 (KiIsHyperVCr3RspErrataPresent.c)
 */

__int64 __fastcall KiIsTsaMitigationSupported(__int64 a1)
{
  int IsHyperVCr3RspErrataPresent; // eax
  unsigned int v3; // r8d
  __int64 result; // rax
  _QWORD *v9; // rcx
  unsigned int v10; // eax

  IsHyperVCr3RspErrataPresent = KiIsHyperVCr3RspErrataPresent();
  v3 = 0;
  if ( IsHyperVCr3RspErrataPresent )
    return 0LL;
  result = 1LL;
  if ( (KeFeatureBits2 & 0x100000000000LL) == 0 )
  {
    __asm { cpuid }
    if ( (int)_RCX < 0 )
      return 0LL;
    v9 = &KiVerwClearErrataVersions;
    v10 = 0;
    while ( *(_DWORD *)v9 != *(_DWORD *)(a1 + 1644) )
    {
      ++v10;
      v9 += 2;
      if ( v10 >= 0xF )
        return 1LL;
    }
    LOBYTE(v3) = *(_QWORD *)(a1 + 25208) >= v9[1];
    return v3;
  }
  return result;
}
