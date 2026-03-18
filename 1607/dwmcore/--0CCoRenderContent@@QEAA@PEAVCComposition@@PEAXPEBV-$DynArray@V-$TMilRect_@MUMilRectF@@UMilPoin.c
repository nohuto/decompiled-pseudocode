/*
 * XREFs of ??0CCoRenderContent@@QEAA@PEAVCComposition@@PEAXPEBV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x180155394
 * Callers:
 *     ?Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z @ 0x1801258A8 (-Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CResource *__fastcall CCoRenderContent::CCoRenderContent(
        CResource *a1,
        struct CComposition *a2,
        __int64 a3,
        __int64 a4)
{
  CResource *result; // rax

  CResource::CResource(a1, a2);
  *((_QWORD *)a1 + 15) = a3;
  *(_QWORD *)a1 = &CCoRenderContent::`vftable'{for `CContent'};
  *((_QWORD *)a1 + 14) = &CCoRenderContent::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)a1 + 16) = 0LL;
  *((_QWORD *)a1 + 17) = 0LL;
  result = a1;
  *((_QWORD *)a1 + 18) = a4;
  return result;
}
