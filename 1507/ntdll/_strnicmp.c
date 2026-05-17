/*
 * XREFs of _strnicmp @ 0x180085310
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x1800205B8 (LdrpSnapKernelBaseExtensions.c)
 *     SbpLookup @ 0x1800F62D8 (SbpLookup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)String1, (unsigned __int8 *)String2, MaxCount);
}
