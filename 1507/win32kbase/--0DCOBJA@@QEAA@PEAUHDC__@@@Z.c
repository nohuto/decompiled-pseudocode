/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0039878
 * Callers:
 *     GreIsRendering @ 0x1C00546A0 (GreIsRendering.c)
 *     GreSetDCOrg @ 0x1C00547B0 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C0054850 (GreCopyVisRgn.c)
 *     GreGetDCOrgEx @ 0x1C0054B70 (GreGetDCOrgEx.c)
 *     GreValidateVisrgn @ 0x1C0067180 (GreValidateVisrgn.c)
 *     GreSelectVisRgnShared @ 0x1C0069360 (GreSelectVisRgnShared.c)
 *     GreIntersectVisRect @ 0x1C00BE2A0 (GreIntersectVisRect.c)
 * Callees:
 *     HmgShareLock @ 0x1C0004350 (HmgShareLock.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00B7804 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  int v3; // ebx

  *(_QWORD *)this = 0LL;
  v3 = (int)a2;
  *((_QWORD *)this + 1) = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>((char *)this + 16);
  *(_QWORD *)this = HmgShareLock(v3, 1);
  return this;
}
