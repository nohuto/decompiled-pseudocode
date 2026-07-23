/*
 * XREFs of MUIBugCheck @ 0x14022F984
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1404B3868 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
