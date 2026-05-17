/*
 * XREFs of _stricmp @ 0x180085210
 * Callers:
 *     LdrpGetDelayloadDescriptor @ 0x1800BCD54 (LdrpGetDelayloadDescriptor.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800C58CC (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800CA8A4 (ImportTablepInsertFunctionSorted.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
