/*
 * XREFs of RtlpCompareAces @ 0x1800CEEA8
 * Callers:
 *     RtlpConvertAclToAutoInherit @ 0x1800CF04C (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     RtlpCompareKnownObjectAces @ 0x18004D878 (RtlpCompareKnownObjectAces.c)
 *     RtlpCompareKnownAces @ 0x1800CEEF0 (RtlpCompareKnownAces.c)
 */

char __fastcall RtlpCompareAces(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  char v4; // r10

  v4 = 0;
  if ( *a1 < 5u || *a1 > 8u )
    goto LABEL_6;
  if ( (unsigned __int8)(*a2 - 5) <= 3u )
    return RtlpCompareKnownObjectAces(a1, a2, a3, a4);
  if ( *a1 > 8u )
  {
LABEL_6:
    if ( (unsigned __int8)(*a2 - 5) > 3u )
      return RtlpCompareKnownAces();
  }
  return v4;
}
