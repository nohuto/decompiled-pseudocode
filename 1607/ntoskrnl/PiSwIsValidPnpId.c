/*
 * XREFs of PiSwIsValidPnpId @ 0x140487B6C
 * Callers:
 *     PiSwValidateCreateData @ 0x1404878E8 (PiSwValidateCreateData.c)
 * Callees:
 *     <none>
 */

char __fastcall PiSwIsValidPnpId(unsigned __int16 *a1, char a2)
{
  unsigned __int16 v2; // ax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    if ( v2 <= 0x20u || v2 > 0x7Fu || v2 == 44 || !a2 && v2 == 92 )
      return 0;
    ++a1;
  }
  return 1;
}
