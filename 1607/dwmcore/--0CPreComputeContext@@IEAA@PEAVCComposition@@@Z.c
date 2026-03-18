/*
 * XREFs of ??0CPreComputeContext@@IEAA@PEAVCComposition@@@Z @ 0x1800616D8
 * Callers:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x1800B8704 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x1800B1FF0 (--0CBspPreComputeHelper@@QEAA@XZ.c)
 */

CPreComputeContext *__fastcall CPreComputeContext::CPreComputeContext(
        CPreComputeContext *this,
        struct CComposition *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CPreComputeContext::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 18) = &CClipStack<CoordinateSpace::PageInPixels>::`vftable';
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 62) = 0;
  *(_QWORD *)((char *)this + 220) = 1LL;
  *((_DWORD *)this + 49) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  CBspPreComputeHelper::CBspPreComputeHelper((CPreComputeContext *)((char *)this + 384));
  *(_QWORD *)(v3 + 712) = v2;
  *(_QWORD *)(v3 + 728) = v2;
  *(_DWORD *)(v3 + 720) = v2;
  *(_DWORD *)(v3 + 736) = v2;
  *(_QWORD *)(v3 + 704) = &CTransformParentPreComputeHelper::`vftable';
  *(_QWORD *)(v3 + 752) = v2;
  *(_QWORD *)(v3 + 768) = v2;
  *(_DWORD *)(v3 + 760) = v2;
  *(_DWORD *)(v3 + 776) = v2;
  *(_QWORD *)(v3 + 744) = &CLightPreComputeHelper::`vftable';
  return (CPreComputeContext *)v3;
}
