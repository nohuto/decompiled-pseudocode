/*
 * XREFs of ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015123C
 * Callers:
 *     EngTextOut @ 0x1C0037A40 (EngTextOut.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C00387E0 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x1C0038E48 (--1FRINGERECT@@QEAA@XZ.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0282108 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A2964 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

UMPDReleaseAcquireRFONTSem *__fastcall UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        UMPDReleaseAcquireRFONTSem *this,
        struct SURFACE *a2,
        struct _FONTOBJ *a3,
        int a4)
{
  int **v4; // rdi
  struct RFONTOBJ *v6; // rcx
  __int64 v7; // rax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v4 = (int **)((char *)this + 56);
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 7) = (char *)this + 12;
  *((_QWORD *)this + 8) = *((_QWORD *)a2 + 6);
  v6 = (UMPDReleaseAcquireRFONTSem *)((char *)this + 72);
  *(_QWORD *)v6 = a3;
  v7 = *((_QWORD *)this + 8);
  if ( v7 && (*(_DWORD *)(v7 + 56) & 0x8080) == 0x8080 && a3 && a4 )
    *(_DWORD *)this = UMPDReleaseRFONTSem(v6, 0LL, (unsigned int *)this + 1, (unsigned int *)this + 2, v4);
  return this;
}
