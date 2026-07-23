/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x140728810
 * Callers:
 *     BgConsoleDestroyInterface @ 0x1407287B8 (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x1407D3ED8 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x140728928 (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
