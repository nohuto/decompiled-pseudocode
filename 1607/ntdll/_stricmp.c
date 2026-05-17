/*
 * XREFs of _stricmp @ 0x180097DD0
 * Callers:
 *     LdrpGetDelayloadDescriptor @ 0x1800D0EF4 (LdrpGetDelayloadDescriptor.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800D6B48 (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800DB5D4 (ImportTablepInsertFunctionSorted.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
