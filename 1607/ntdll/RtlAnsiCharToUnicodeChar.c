/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x1800183D0
 * Callers:
 *     toupper @ 0x18009C3D0 (toupper.c)
 *     _mbstrlen @ 0x18009FB78 (_mbstrlen.c)
 *     mbtowc @ 0x1800A0A58 (mbtowc.c)
 *     _safecrt_mbtowc @ 0x1800A30E8 (_safecrt_mbtowc.c)
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180018450 (RtlMultiByteToUnicodeN.c)
 */

__int64 __fastcall RtlAnsiCharToUnicodeChar(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r9
  unsigned __int16 v3; // bx
  unsigned int v4; // esi
  __int16 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = 32;
  v4 = 1;
  v6 = 32;
  if ( NlsLeadByteInfoTable[*v1] )
    v4 = 2;
  if ( (int)RtlMultiByteToUnicodeN((unsigned int)&v6, 2, 0, (_DWORD)v1, v4) >= 0 )
    v3 = v6;
  *a1 += v4;
  return v3;
}
