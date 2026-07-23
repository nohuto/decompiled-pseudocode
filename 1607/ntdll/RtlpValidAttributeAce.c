/*
 * XREFs of RtlpValidAttributeAce @ 0x1800E27A8
 * Callers:
 *     RtlValidAcl @ 0x180014FB0 (RtlValidAcl.c)
 * Callees:
 *     RtlpValidRelativeAttribute @ 0x1800E291C (RtlpValidRelativeAttribute.c)
 */

bool __fastcall RtlpValidAttributeAce(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned int v3; // r9d

  if ( !a1 )
    return 0;
  v2 = *(unsigned __int16 *)(a1 + 2);
  if ( ((v2 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v2
    || (unsigned int)v2 < 0x10
    || *(_BYTE *)(a1 + 8) != 1
    || *(_BYTE *)(a1 + 9) > 0xFu
    || v2 < (unsigned __int64)(4 * (unsigned int)*(unsigned __int8 *)(a1 + 9) + 16) + 20 )
  {
    return 0;
  }
  v3 = 4 * *(unsigned __int8 *)(a1 + 9) + 8;
  return (unsigned __int8)RtlpValidRelativeAttribute(a1 + 8 + v3, (unsigned int)v2 - v3 - 8) != 0;
}
