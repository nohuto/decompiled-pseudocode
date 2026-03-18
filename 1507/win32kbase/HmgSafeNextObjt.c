/*
 * XREFs of HmgSafeNextObjt @ 0x1C005DA10
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0025074 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0034504 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     bDynamicModeChange @ 0x1C005C7A4 (bDynamicModeChange.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C005D870 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicRemoveAllDriverRealizations @ 0x1C005D910 (bDynamicRemoveAllDriverRealizations.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C006E870 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B0BA0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00B9908 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgSafeNextObjt(unsigned __int16 a1, char a2)
{
  __int64 v2; // r8
  _BYTE *i; // rax

  v2 = (unsigned int)a1 + 1;
  if ( (unsigned int)v2 >= gcMaxHmgr )
    return 0LL;
  for ( i = (_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v2); i[14] != a2; i += 24 )
  {
    LODWORD(v2) = v2 + 1;
    if ( (unsigned int)v2 >= gcMaxHmgr )
      return 0LL;
  }
  return *(_QWORD *)i;
}
