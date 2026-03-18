/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001B5E8
 * Callers:
 *     bUnloadEudcFont @ 0x1C000E074 (bUnloadEudcFont.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0018720 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bAddFlEntry @ 0x1C0019CB8 (bAddFlEntry.c)
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C001B578 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     DrvSetGraphicsDevices @ 0x1C009F510 (DrvSetGraphicsDevices.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00D10E0 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C00E7ED0 (cjIFIMetricsToOTMW.c)
 *     vProcessEntry @ 0x1C00F695C (vProcessEntry.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C027DB4C (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     FontAssocDefaultRoutine @ 0x1C028A870 (FontAssocDefaultRoutine.c)
 *     ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x1C028A950 (-FindDefaultLinkedFontEntry@@YAHPEBG0@Z.c)
 *     bDeleteFlEntry @ 0x1C028B16C (bDeleteFlEntry.c)
 *     InitializeDefaultFamilyFonts @ 0x1C03788F0 (InitializeDefaultFamilyFonts.c)
 *     DefaultFontQueryRoutine @ 0x1C0379150 (DefaultFontQueryRoutine.c)
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
