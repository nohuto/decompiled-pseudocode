/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x180014C20
 * Callers:
 *     toupper @ 0x18009B030 (toupper.c)
 *     _mbstrlen @ 0x18009E758 (_mbstrlen.c)
 *     mbtowc @ 0x18009F638 (mbtowc.c)
 *     _safecrt_mbtowc @ 0x1800A1CDC (_safecrt_mbtowc.c)
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180014CA0 (RtlMultiByteToUnicodeN.c)
 */

__int64 __fastcall RtlAnsiCharToUnicodeChar(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r9
  unsigned __int16 v3; // bx
  unsigned int v4; // edi
  __int64 result; // rax
  __int16 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = 32;
  v6 = 32;
  v4 = (NlsLeadByteInfoTable[*v1] != 0) + 1;
  if ( (int)RtlMultiByteToUnicodeN((unsigned int)&v6, 2, 0, (_DWORD)v1, v4) >= 0 )
    v3 = v6;
  result = v3;
  *a1 += v4;
  return result;
}
