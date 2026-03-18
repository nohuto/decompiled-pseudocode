/*
 * XREFs of ?ReleaseShape@CpuClipShape@@AEAAXXZ @ 0x180058C84
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x180058D48 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ??1CpuClipShape@@QEAA@XZ @ 0x1800FCF78 (--1CpuClipShape@@QEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CpuClipShape::ReleaseShape(CpuClipShape *this)
{
  if ( *((_BYTE *)this + 40) && *(_QWORD *)this )
    (***(void (__fastcall ****)(_QWORD, __int64))this)(*(_QWORD *)this, 1LL);
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 40) = 0;
}
