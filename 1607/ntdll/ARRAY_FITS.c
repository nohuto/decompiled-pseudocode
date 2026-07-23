/*
 * XREFs of ARRAY_FITS @ 0x1800DAC50
 * Callers:
 *     RtlpLocateActivationContextSection @ 0x18001B160 (RtlpLocateActivationContextSection.c)
 * Callees:
 *     <none>
 */

bool __fastcall ARRAY_FITS(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // r10

  v4 = a3 * (unsigned __int64)a2;
  if ( v4 > 0xFFFFFFFF || (unsigned int)v4 + a1 < (unsigned int)v4 )
    return 0;
  return a1 < a4 && (unsigned int)v4 + a1 <= a4;
}
