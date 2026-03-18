/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00E5208
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
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C00E528C (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((char *)this + 16);
}
