/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0060C84
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1C0011C6C (cjIFIMetricsToOTMW.c)
 *     bUnloadEudcFont @ 0x1C0021F90 (bUnloadEudcFont.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C005F980 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bAddFlEntry @ 0x1C00608E8 (bAddFlEntry.c)
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C0060C14 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00BAF44 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     DrvSetGraphicsDevices @ 0x1C00EC818 (DrvSetGraphicsDevices.c)
 *     vProcessEntry @ 0x1C0117904 (vProcessEntry.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C027BD8C (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     FontAssocDefaultRoutine @ 0x1C02891C0 (FontAssocDefaultRoutine.c)
 *     ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x1C02892CC (-FindDefaultLinkedFontEntry@@YAHPEBG0@Z.c)
 *     bDeleteFlEntry @ 0x1C0289B84 (bDeleteFlEntry.c)
 *     InitializeDefaultFamilyFonts @ 0x1C037D90C (InitializeDefaultFamilyFonts.c)
 *     DefaultFontQueryRoutine @ 0x1C037DEB0 (DefaultFontQueryRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  int v3; // r9d
  __int64 v4; // r10
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v3;
  }
  else
  {
    v3 = 0;
    if ( !a2 )
      goto LABEL_14;
    v4 = 2147483646 - a2;
    v5 = a3 - a1;
    do
    {
      if ( !(v4 + a2) )
        break;
      v6 = *(_WORD *)&a1[v5];
      if ( !v6 )
        break;
      *(_WORD *)a1 = v6;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
LABEL_14:
      a1 -= 2;
      v3 = -2147024774;
    }
  }
  *(_WORD *)a1 = 0;
  return (unsigned int)v3;
}
