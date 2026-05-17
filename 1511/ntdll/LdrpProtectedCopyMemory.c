/*
 * XREFs of LdrpProtectedCopyMemory @ 0x18006CCD0
 * Callers:
 *     LdrpReadMemory @ 0x18006CAB4 (LdrpReadMemory.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18006CB50 (LdrQueryModuleInfoFromLdrEntry.c)
 * Callees:
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800CB5E8 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpProtectedCopyMemory(__int64 a1, const void *a2, void *a3, size_t a4, size_t *a5)
{
  memmove(a3, a2, a4);
  *a5 = a4;
  return 0LL;
}
