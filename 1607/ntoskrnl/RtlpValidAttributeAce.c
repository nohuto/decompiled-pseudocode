/*
 * XREFs of RtlpValidAttributeAce @ 0x1406850E4
 * Callers:
 *     RtlValidAcl @ 0x140420800 (RtlValidAcl.c)
 * Callees:
 *     RtlpValidRelativeAttribute @ 0x1406852D8 (RtlpValidRelativeAttribute.c)
 */

bool __fastcall RtlpValidAttributeAce(__int64 a1)
{
  bool result; // al
  unsigned __int64 v2; // rdx
  unsigned __int8 v3; // al

  result = a1
        && (v2 = *(unsigned __int16 *)(a1 + 2), ((v2 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v2)
        && (unsigned int)v2 >= 0x10
        && *(_BYTE *)(a1 + 8) == 1
        && (v3 = *(_BYTE *)(a1 + 9), v3 <= 0xFu)
        && v2 >= (unsigned __int64)(4 * (unsigned int)v3 + 16) + 20
        && (unsigned __int8)RtlpValidRelativeAttribute(
                              a1 + 8 + 4 * (unsigned int)v3 + 8,
                              (unsigned int)v2 - (4 * v3 + 8) - 8) != 0;
  return result;
}
