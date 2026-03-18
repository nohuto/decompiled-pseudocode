/*
 * XREFs of MUIBugCheck @ 0x140215A84
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1404AAE1C (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
