/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x14075F770
 * Callers:
 *     BgConsoleDestroyInterface @ 0x14075F730 (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x1407FD8F0 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x14075F888 (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
