/*
 * XREFs of SepInitializeDebugOptions @ 0x1407B9C50
 * Callers:
 *     SeCodeIntegrityInitializePolicy @ 0x1407B9BC4 (SeCodeIntegrityInitializePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 */

void SepInitializeDebugOptions()
{
  NTSTATUS v0; // eax
  _BYTE SystemInformation[20]; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+34h] [rbp-14h]

  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (SeCiDebugOptions & 1) == 0 )
    SeCiDebugOptions |= 2u;
  if ( SeILSigningPolicy )
  {
    if ( (v0 = ZwQuerySystemInformation(SystemSecureBootPolicyInformation, SystemInformation, 0x18u, 0LL), v0 >= 0)
      && (v2 & 0x10) != 0
      || v0 == -2143092730 )
    {
      if ( (SeCiDebugOptions & 1) == 0 && (v0 < 0 || (v2 & 0x8000) == 0) )
        SeCiDebugOptions |= 4u;
    }
  }
}
