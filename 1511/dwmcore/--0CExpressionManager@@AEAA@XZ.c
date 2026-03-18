/*
 * XREFs of ??0CExpressionManager@@AEAA@XZ @ 0x180085C48
 * Callers:
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800B49E8 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A18D0 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1800B4CF8 (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 */

CExpressionManager *__fastcall CExpressionManager::CExpressionManager(CExpressionManager *this)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = -1LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CExpressionManager::`vftable';
  *((_DWORD *)this + 2) = 0;
  CExpressionValueStack::CExpressionValueStack((CExpressionManager *)((char *)this + 40), this);
  *((_DWORD *)this + 24) = 0;
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 184, 0LL, 0LL);
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 216, 0LL, 0LL);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 248),
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::CompareTableData,
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  return this;
}
