/*
 * XREFs of ?vCleanupLCSPs@@YAXK@Z @ 0x1C0059F48
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextOwned @ 0x1C002A4F0 (HmgNextOwned.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00CA188 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vCleanupLCSPs(int a1)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0;
  while ( 1 )
  {
    v2 = HmgNextOwned(v2, a1, &v3);
    if ( !v2 )
      break;
    if ( (BYTE2(v3) & 0x1F) == 9 )
      bDeleteColorSpace(v3, 0LL);
  }
}
