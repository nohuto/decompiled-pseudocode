/*
 * XREFs of ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0059EC0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0027280 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     HmgNextOwned @ 0x1C002A4F0 (HmgNextOwned.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005CB68 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C005CB90 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vRemoveRefPalettes(int a1)
{
  unsigned int Owned; // ebx
  HPALETTE v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  HSEMAPHORE v5; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  Owned = 0;
  while ( 1 )
  {
    Owned = HmgNextOwned(Owned, a1, (unsigned __int64 *)&v3);
    if ( !Owned )
      break;
    if ( (BYTE2(v3) & 0x1F) == 8 )
    {
      v5 = ghsemPalette;
      EngAcquireSemaphore(ghsemPalette);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v4, v3);
      if ( v4 )
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v4);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v4);
      SEMOBJ::vUnlock((SEMOBJ *)&v5);
    }
  }
}
