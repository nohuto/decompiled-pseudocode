/*
 * XREFs of ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C015BAA0
 * Callers:
 *     EngTextOut @ 0x1C009BA80 (EngTextOut.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C009C820 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x1C009CEA8 (--1FRINGERECT@@QEAA@XZ.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0281D98 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 * Callees:
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A2E80 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 */

void __fastcall UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem(UMPDReleaseAcquireRFONTSem *this)
{
  UMPDReleaseAcquireRFONTSem *v2; // rcx

  if ( *(_DWORD *)this )
  {
    UMPDAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)((char *)this + 72),
      0LL,
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 2),
      *((int **)this + 7));
    v2 = (UMPDReleaseAcquireRFONTSem *)*((_QWORD *)this + 7);
    if ( v2 )
    {
      if ( v2 != (UMPDReleaseAcquireRFONTSem *)((char *)this + 12) )
        Win32FreePool(v2);
    }
  }
  *((_QWORD *)this + 9) = 0LL;
  RFONTOBJ::~RFONTOBJ((UMPDReleaseAcquireRFONTSem *)((char *)this + 72));
}
