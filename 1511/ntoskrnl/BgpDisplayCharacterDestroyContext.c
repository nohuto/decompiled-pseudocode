/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x1406DC728
 * Callers:
 *     BgConsoleDestroyInterface @ 0x1406DC6E8 (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x140787D38 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x1406DC840 (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
