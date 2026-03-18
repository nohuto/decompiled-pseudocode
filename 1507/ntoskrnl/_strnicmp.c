/*
 * XREFs of _strnicmp @ 0x14017206C
 * Callers:
 *     MiResolveImageReferences @ 0x1405753E4 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x140660170 (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x1407CF0E4 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x1407CF28C (CmpProcessForSimpleStringSub.c)
 *     CmpAppendSection @ 0x1407D9680 (CmpAppendSection.c)
 *     IopStoreArcInformation @ 0x1407E19C0 (IopStoreArcInformation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
