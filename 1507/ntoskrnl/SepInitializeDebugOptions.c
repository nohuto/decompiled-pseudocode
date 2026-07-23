/*
 * XREFs of SepInitializeDebugOptions @ 0x1407E5EE4
 * Callers:
 *     SeCodeIntegrityInitializePolicy @ 0x1407E5E08 (SeCodeIntegrityInitializePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 *     SepIsUmciDisabled @ 0x1406D08B0 (SepIsUmciDisabled.c)
 */

void SepInitializeDebugOptions()
{
  NTSTATUS v0; // eax
  int v1; // ebx
  _BYTE SystemInformation[20]; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+34h] [rbp-14h]

  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (SeCiDebugOptions & 1) == 0 )
    SeCiDebugOptions |= 2u;
  if ( SeILSigningPolicy )
  {
    if ( (v0 = ZwQuerySystemInformation(SystemSecureBootPolicyInformation, SystemInformation, 0x18u, 0LL),
          v1 = v0,
          v0 >= 0)
      && (v3 & 0x10) != 0
      || v0 == -2143092730 )
    {
      if ( SepIsUmciDisabled() )
        SeILSigningPolicy = 0;
      if ( (SeCiDebugOptions & 1) == 0 && (v1 < 0 || (v3 & 0x8000) == 0) )
        SeCiDebugOptions |= 4u;
    }
  }
}
