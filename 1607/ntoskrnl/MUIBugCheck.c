/*
 * XREFs of MUIBugCheck @ 0x14022FB58
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1404CFDC8 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
