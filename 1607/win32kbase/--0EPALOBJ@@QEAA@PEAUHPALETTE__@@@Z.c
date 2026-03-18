/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005CB68
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032010 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0059EC0 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005CA28 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00C0E90 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00C2740 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00C5460 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 *     bInitPALOBJ @ 0x1C0156360 (bInitPALOBJ.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0029900 (HmgShareLockCheck.c)
 */

EPALOBJ *__fastcall EPALOBJ::EPALOBJ(EPALOBJ *this, HPALETTE a2)
{
  *(_QWORD *)this = 0LL;
  *(_QWORD *)this = HmgShareLockCheck((unsigned int)a2, 8);
  return this;
}
