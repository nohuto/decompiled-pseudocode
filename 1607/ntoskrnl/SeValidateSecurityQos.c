/*
 * XREFs of SeValidateSecurityQos @ 0x140413544
 * Callers:
 *     SeCaptureSecurityQos @ 0x140412AE8 (SeCaptureSecurityQos.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x1404B56B4 (AlpcpValidateAndSetPortAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeValidateSecurityQos(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) >= 2u )
    return 3221225485LL;
  else
    return *(_DWORD *)(a1 + 4) > 3u ? 0xC00000A5 : 0;
}
