/*
 * XREFs of MUIBugCheck @ 0x140265BE8
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x14053A748 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
