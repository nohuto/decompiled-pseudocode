/*
 * XREFs of _strnicmp @ 0x140143FEC
 * Callers:
 *     MiResolveImageReferences @ 0x1403CCAA8 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x1405E8C58 (CmpPreserveSystemHiveData.c)
 *     IopStoreArcInformation @ 0x140750ED8 (IopStoreArcInformation.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x14076086C (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x140760A0C (CmpProcessForSimpleStringSub.c)
 *     CmpAppendSection @ 0x140761D94 (CmpAppendSection.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
