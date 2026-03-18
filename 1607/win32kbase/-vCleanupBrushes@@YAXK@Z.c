/*
 * XREFs of ?vCleanupBrushes@@YAXK@Z @ 0x1C005A0C8
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextOwned @ 0x1C002A4F0 (HmgNextOwned.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 */

void __fastcall vCleanupBrushes(int a1)
{
  unsigned int Owned; // ebx
  struct HOBJ__ *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  Owned = 0;
  while ( 1 )
  {
    Owned = HmgNextOwned(Owned, a1, (unsigned __int64 *)&v3);
    if ( !Owned )
      break;
    if ( (BYTE2(v3) & 0x1F) == 0x10 )
      bDeleteBrush(v3);
  }
}
