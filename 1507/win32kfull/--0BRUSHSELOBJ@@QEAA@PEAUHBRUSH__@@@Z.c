/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00E5234
 * Callers:
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C00076BC (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     GreExtCreatePen @ 0x1C00E4EE8 (GreExtCreatePen.c)
 *     NtGdiFrameRgn @ 0x1C0104C30 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0105250 (NtGdiFillRgn.c)
 *     GreMarkDeletableBrush @ 0x1C0152ABC (GreMarkDeletableBrush.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B0454 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B0640 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreGetObjectBitmapHandle @ 0x1C02B1C84 (GreGetObjectBitmapHandle.c)
 * Callees:
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C00E52D4 (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C0290DB8 (--0-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  *((_DWORD *)this + 2) = 0;
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::UnexpectedThreadTerminationHandler<BRUSHSELOBJ>((char *)this + 16);
  LOBYTE(v4) = 16;
  v5 = HmgShareLockCheck(a2, v4);
  *(_QWORD *)this = v5;
  if ( v5 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
