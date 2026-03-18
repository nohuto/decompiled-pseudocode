/*
 * XREFs of ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x180025A20
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004FE84 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

CWindowNode *__fastcall CWindowNode::CWindowNode(CWindowNode *this, struct CComposition *a2)
{
  CWindowNode *result; // rax

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CWindowNode::`vftable';
  `vector constructor iterator'(
    (CWindowNode *)((char *)this + 552),
    0x10uLL,
    4uLL,
    (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  memset_0((char *)this + 552, 0, 0x4CuLL);
  *((_DWORD *)this + 155) = 1;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 728),
    CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::CompareTableData,
    CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::AllocTableData,
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_DWORD *)this + 208) = 0;
  *((_DWORD *)this + 213) = 1065353216;
  *((_DWORD *)this + 214) = 1065353216;
  *((_DWORD *)this + 215) = 1065353216;
  *((_QWORD *)this + 108) = 1065353216LL;
  result = this;
  *((_QWORD *)this + 109) = 0LL;
  *((_DWORD *)this + 220) = 0;
  *((_BYTE *)this + 884) = 0;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_DWORD *)this + 248) = 0;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_BYTE *)this + 1096) = 0;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_QWORD *)this + 128) = 0LL;
  return result;
}
