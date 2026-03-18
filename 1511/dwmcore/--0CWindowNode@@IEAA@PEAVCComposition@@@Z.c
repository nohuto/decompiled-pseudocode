/*
 * XREFs of ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18005E924
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004CD30 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 */

CWindowNode *__fastcall CWindowNode::CWindowNode(CWindowNode *this, struct CComposition *a2)
{
  CWindowNode *result; // rax

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CWindowNode::`vftable';
  `vector constructor iterator'(
    (CWindowNode *)((char *)this + 744),
    0x10uLL,
    4,
    TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  *((_DWORD *)this + 202) = 0;
  *(_QWORD *)((char *)this + 812) = 1LL;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 920),
    CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::CompareTableData,
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  *((_QWORD *)this + 125) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_QWORD *)this + 127) = 0LL;
  *((_DWORD *)this + 256) = 0;
  *((_DWORD *)this + 261) = 1065353216;
  *((_DWORD *)this + 262) = 1065353216;
  *((_DWORD *)this + 263) = 1065353216;
  *((_QWORD *)this + 132) = 1065353216LL;
  result = this;
  *((_QWORD *)this + 133) = 0LL;
  *((_DWORD *)this + 268) = 0;
  *((_BYTE *)this + 1076) = 0;
  *((_QWORD *)this + 145) = 0LL;
  *((_QWORD *)this + 146) = 0LL;
  *((_QWORD *)this + 147) = 0LL;
  *((_DWORD *)this + 296) = 0;
  *((_QWORD *)this + 156) = 0LL;
  *((_QWORD *)this + 157) = 0LL;
  *((_BYTE *)this + 1288) = 0;
  *((_QWORD *)this + 159) = 0LL;
  *((_QWORD *)this + 160) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_QWORD *)this + 142) = 0LL;
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_QWORD *)this + 150) = 0LL;
  *((_QWORD *)this + 152) = 0LL;
  return result;
}
