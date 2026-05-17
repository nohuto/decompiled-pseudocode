/*
 * XREFs of ValidateStd3Range @ 0x18007ECE4
 * Callers:
 *     punycode_encode @ 0x18005D63C (punycode_encode.c)
 *     RtlpValidateAsciiStd3AndLength @ 0x18005E41C (RtlpValidateAsciiStd3AndLength.c)
 *     punycode_decode @ 0x18005EAC0 (punycode_decode.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateStd3Range(unsigned __int16 a1)
{
  __int64 v1; // rdx
  bool result; // al

  result = (unsigned __int16)(a1 - 45) <= 0x2Du && (v1 = 0x3FFFFFF01FFBLL, _bittest64(&v1, (unsigned __int16)(a1 - 45)))
        || (unsigned __int16)(a1 - 97) <= 0x19u
        || a1 >= 0x80u;
  return result;
}
