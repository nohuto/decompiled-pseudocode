/*
 * XREFs of ?GetComplex2DBounds@CVisual@@QEBAXPEAPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x1800F7AB0
 * Callers:
 *     ?CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z @ 0x1800FD044 (-CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetContentAsCoRenderContentNoRef@CVisual@@AEBA_NPEAPEAVCCoRenderContent@@@Z @ 0x1800F77D4 (-GetContentAsCoRenderContentNoRef@CVisual@@AEBA_NPEAPEAVCCoRenderContent@@@Z.c)
 */

char *__fastcall CVisual::GetComplex2DBounds(CVisual *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v6; // rcx
  char *result; // rax
  struct CCoRenderContent *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( CVisual::GetContentAsCoRenderContentNoRef(a1, &v8) )
  {
    v6 = *((_QWORD *)v8 + 9);
    *a2 = *(_QWORD *)v6;
    result = (char *)*(unsigned int *)(v6 + 24);
    *a3 = (_DWORD)result;
  }
  else
  {
    result = (char *)a1 + 140;
    *a3 = 1;
    *a2 = (char *)a1 + 140;
  }
  return result;
}
