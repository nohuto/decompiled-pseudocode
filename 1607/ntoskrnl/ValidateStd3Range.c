/*
 * XREFs of ValidateStd3Range @ 0x140214FC4
 * Callers:
 *     RtlpValidateAsciiStd3AndLength @ 0x1406899E0 (RtlpValidateAsciiStd3AndLength.c)
 *     punycode_decode @ 0x140689B74 (punycode_decode.c)
 *     punycode_encode @ 0x14068A21C (punycode_encode.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateStd3Range(unsigned __int16 a1)
{
  __int64 v1; // rdx
  bool result; // al

  result = (unsigned __int16)(a1 - 97) <= 0x19u
        || (unsigned __int16)(a1 - 45) <= 0x2Du && (v1 = 0x3FFFFFF01FFBLL, _bittest64(&v1, (unsigned __int16)(a1 - 45)))
        || a1 >= 0x80u;
  return result;
}
