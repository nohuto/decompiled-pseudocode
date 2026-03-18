/*
 * XREFs of IsImmersiveBroker @ 0x1C006E1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsImmersiveBroker(__int64 a1)
{
  PVOID v2; // rax

  if ( gfIgnoreMoshHardening )
    return (*(_BYTE *)(a1 + 776) & 0x30) != 16;
  if ( (*(_DWORD *)(a1 + 776) & 0x30) == 0x20 )
    return 1LL;
  v2 = *(PVOID *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( v2 == g_pepDwm )
      return 1LL;
  }
  return v2 == gpepCSRSS;
}
