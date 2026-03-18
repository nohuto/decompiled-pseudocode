/*
 * XREFs of ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140114F5C
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     NtGdiEngCheckAbort @ 0x1400F5950 (NtGdiEngCheckAbort.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     NtGdiPathToRegion @ 0x1401128A0 (NtGdiPathToRegion.c)
 *     NtGdiStrokePath @ 0x1401129F0 (NtGdiStrokePath.c)
 *     NtGdiFillPath @ 0x140114130 (NtGdiFillPath.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1401142FC (--1XEPATHOBJ@@QEAA@XZ.c)
 *     NtGdiCloseFigure @ 0x1401145D0 (NtGdiCloseFigure.c)
 *     GrePolyBezierTo @ 0x140114C50 (GrePolyBezierTo.c)
 *     NtGdiWidenPath @ 0x14011ADC0 (NtGdiWidenPath.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x14016DD70 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ?DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z @ 0x14016DFD0 (-DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z.c)
 *     NtGdiStrokeAndFillPath @ 0x1402280F0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiSelectClipPath @ 0x140228790 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x140259C30 (NtGdiFlattenPath.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoTGO::vUnguard(CAutoTGO *this)
{
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
}
