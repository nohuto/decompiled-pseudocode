/*
 * XREFs of SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140015BD0
 * Callers:
 *     SepValidateAndCopyGlobalEntry @ 0x14025004C (SepValidateAndCopyGlobalEntry.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1404366E0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x1406D6F58 (SepGetProcUniqueLuidAndIndexFromToken.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140015C80 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall SepGetProcUniqueLuidAndIndexFromAttributeInfo(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD v7[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( (SepTokenSingletonAttributesConfig & 3) != 3 )
    return 3221226021LL;
  memset(&v7[1], 0, 0x38uLL);
  LODWORD(v7[1]) = SepProcUniqueAttributeName;
  v7[2] = off_140321680;
  v7[0] = a1;
  result = AuthzBasepQuerySecurityAttributeAndValues(v7);
  if ( (int)result >= 0 )
  {
    *a2 = *(_DWORD *)v7[5];
    result = AuthzBasepQuerySecurityAttributeAndValues(v7);
    if ( (int)result >= 0 )
      *a3 = *(_QWORD *)v7[5];
  }
  return result;
}
