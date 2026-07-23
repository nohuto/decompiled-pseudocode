/*
 * XREFs of SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x14021A7F8
 * Callers:
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x14021A8A8 (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14021AA48 (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14000DE00 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall SepGetProcUniqueLuidAndIndexFromAttributeInfo(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int SecurityAttributeAndValues; // r9d
  __int64 v8[9]; // [rsp+20h] [rbp-48h] BYREF

  SecurityAttributeAndValues = -1073741275;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    memset(&v8[1], 0, 0x38uLL);
    LODWORD(v8[1]) = SepProcUniqueAttributeName;
    v8[2] = (__int64)off_1402F4B80;
    v8[0] = a1;
    SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v8);
    if ( SecurityAttributeAndValues >= 0 )
    {
      *a2 = *(_DWORD *)v8[5];
      SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v8);
      if ( SecurityAttributeAndValues >= 0 )
        *a3 = *(_QWORD *)v8[5];
    }
  }
  return (unsigned int)SecurityAttributeAndValues;
}
