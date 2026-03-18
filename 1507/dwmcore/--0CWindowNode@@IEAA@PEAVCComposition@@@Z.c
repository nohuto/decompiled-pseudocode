/*
 * XREFs of ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18007DC8C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800343F0 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CMergedRect@@QEAA@XZ @ 0x1800513FC (--0CMergedRect@@QEAA@XZ.c)
 */

CWindowNode *__fastcall CWindowNode::CWindowNode(CWindowNode *this, struct CComposition *a2)
{
  CWindowNode *result; // rax

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CWindowNode::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 7) = &CWindowNode::`vftable'{for `IExpressionSource'};
  *((_QWORD *)this + 8) = &CWindowNode::`vftable'{for `IGraphNode'};
  CMergedRect::CMergedRect((CWindowNode *)((char *)this + 792));
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 968),
    CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_DWORD *)this + 268) = 0;
  *((_DWORD *)this + 273) = 1065353216;
  *((_DWORD *)this + 274) = 1065353216;
  *((_DWORD *)this + 275) = 1065353216;
  *((_QWORD *)this + 138) = 1065353216LL;
  result = this;
  *((_QWORD *)this + 139) = 0LL;
  *((_DWORD *)this + 280) = 0;
  *((_BYTE *)this + 1124) = 0;
  *((_QWORD *)this + 151) = 0LL;
  *((_QWORD *)this + 152) = 0LL;
  *((_QWORD *)this + 153) = 0LL;
  *((_DWORD *)this + 308) = 0;
  *((_QWORD *)this + 162) = 0LL;
  *((_QWORD *)this + 163) = 0LL;
  *((_BYTE *)this + 1336) = 0;
  *((_QWORD *)this + 165) = 0LL;
  *((_QWORD *)this + 166) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 147) = 0LL;
  *((_QWORD *)this + 148) = 0LL;
  *((_QWORD *)this + 149) = 0LL;
  *((_QWORD *)this + 150) = 0LL;
  *((_QWORD *)this + 156) = 0LL;
  *((_QWORD *)this + 158) = 0LL;
  return result;
}
