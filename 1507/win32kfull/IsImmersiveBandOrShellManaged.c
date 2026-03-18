/*
 * XREFs of IsImmersiveBandOrShellManaged @ 0x1C00FFE6C
 * Callers:
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C0044BF8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x1C0218D30 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 */

__int64 __fastcall IsImmersiveBandOrShellManaged(__int64 a1)
{
  BOOL v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // edx

  v1 = IsNonImmersiveBand(a1);
  v3 = 0;
  if ( !v1 || (*(_BYTE *)(v2 + 290) & 0x40) != 0 )
    return 1;
  return v3;
}
