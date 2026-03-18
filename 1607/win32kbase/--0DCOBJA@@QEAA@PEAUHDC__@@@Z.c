/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00272DC
 * Callers:
 *     GreValidateVisrgn @ 0x1C00209DC (GreValidateVisrgn.c)
 *     GreSelectVisRgnShared @ 0x1C00382B0 (GreSelectVisRgnShared.c)
 *     GreIsRendering @ 0x1C0039210 (GreIsRendering.c)
 *     GreGetDCOrgEx @ 0x1C0075B20 (GreGetDCOrgEx.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0075F70 (GreLockVisRgnSharedOrExclusive.c)
 *     GreCopyVisRgn @ 0x1C00767F0 (GreCopyVisRgn.c)
 *     GreIntersectVisRect @ 0x1C00CBA80 (GreIntersectVisRect.c)
 * Callees:
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00C53B8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  __int64 v4; // rdx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>((char *)this + 16);
  LOBYTE(v4) = 1;
  *(_QWORD *)this = HmgShareLock(a2, v4);
  return this;
}
