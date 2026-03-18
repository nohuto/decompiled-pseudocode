/*
 * XREFs of HmgSafeNextObjt @ 0x1C005B0C0
 * Callers:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0037F14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C004A1DC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     bDynamicModeChange @ 0x1C0059E84 (bDynamicModeChange.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C005AF20 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicRemoveAllDriverRealizations @ 0x1C005AFC0 (bDynamicRemoveAllDriverRealizations.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00864A0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B4580 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00BB31C (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgSafeNextObjt(unsigned __int16 a1, char a2)
{
  __int64 v2; // r8
  char *i; // rax

  v2 = (unsigned int)a1 + 1;
  if ( (unsigned int)v2 >= gcMaxHmgr )
    return 0LL;
  for ( i = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v2; i[14] != a2; i += 24 )
  {
    LODWORD(v2) = v2 + 1;
    if ( (unsigned int)v2 >= gcMaxHmgr )
      return 0LL;
  }
  return *(_QWORD *)i;
}
