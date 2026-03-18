/*
 * XREFs of vCleanupOwnedRedirectionDeviceBitmapsWrap @ 0x1401D7B00
 * Callers:
 *     <none>
 * Callees:
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z @ 0x1401D7B20 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z.c)
 */

void __fastcall vCleanupOwnedRedirectionDeviceBitmapsWrap(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  vCleanupOwnedRedirectionDeviceBitmaps((struct PDEVOBJ *)&v1);
}
