/*
 * XREFs of SepCompareClaimAttributes @ 0x140475794
 * Callers:
 *     NtCompareTokens @ 0x1404748F0 (NtCompareTokens.c)
 *     SepSetTokenClaims @ 0x14047846C (SepSetTokenClaims.c)
 * Callees:
 *     SepCompareSidAndAttributeArrays @ 0x1404757F4 (SepCompareSidAndAttributeArrays.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x1406C9DE0 (AuthzBasepCompareSecurityAttributesInformation.c)
 */

bool __fastcall SepCompareClaimAttributes(unsigned int *a1, unsigned int *a2)
{
  char v4; // cl
  char v5; // dl
  char v6; // r10
  char v7; // al
  char v8; // bp
  char v9; // r8
  char v10; // r14
  char v11; // r9

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( a1 == a2 )
    return 1;
  if ( a1 )
  {
    v4 = 1;
    v7 = *((_QWORD *)a1 + 72) != 0LL;
    v8 = *((_QWORD *)a1 + 73) != 0LL;
    v10 = *a1 != 0;
  }
  if ( a2 )
  {
    v6 = 1;
    v5 = *((_QWORD *)a2 + 72) != 0LL;
    v9 = *((_QWORD *)a2 + 73) != 0LL;
    v11 = *a2 != 0;
  }
  return v4 == v6
      && v7 == v5
      && v8 == v9
      && v10 == v11
      && (!v4
       || (!v7
        || (unsigned __int8)AuthzBasepCompareSecurityAttributesInformation(*((_QWORD *)a1 + 72), *((_QWORD *)a2 + 72)))
       && (!v8
        || (unsigned __int8)AuthzBasepCompareSecurityAttributesInformation(*((_QWORD *)a1 + 73), *((_QWORD *)a2 + 73)))
       && (!v10 || (unsigned __int8)SepCompareSidAndAttributeArrays(*((_QWORD *)a1 + 1), *a1, *((_QWORD *)a2 + 1), *a2)));
}
