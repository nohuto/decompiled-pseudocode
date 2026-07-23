/*
 * XREFs of LdrpProtectedCopyMemory @ 0x18006DDE0
 * Callers:
 *     LdrpReadMemory @ 0x18006DBF4 (LdrpReadMemory.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18006DC80 (LdrQueryModuleInfoFromLdrEntry.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2DE4 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpProtectedCopyMemory(__int64 a1, const void *a2, void *a3, size_t a4, size_t *a5)
{
  memmove(a3, a2, a4);
  *a5 = a4;
  return 0LL;
}
