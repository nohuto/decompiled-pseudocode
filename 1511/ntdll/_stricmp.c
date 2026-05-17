/*
 * XREFs of _stricmp @ 0x1800969C0
 * Callers:
 *     LdrpGetDelayloadDescriptor @ 0x1800C9A74 (LdrpGetDelayloadDescriptor.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800CEBFC (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800D3380 (ImportTablepInsertFunctionSorted.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
