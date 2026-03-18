/*
 * XREFs of ??0CExpressionManager@@AEAA@XZ @ 0x180093F94
 * Callers:
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x180093F18 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x18005198C (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CExpressionManager *__fastcall CExpressionManager::CExpressionManager(
        CExpressionManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r9
  __int64 v6; // r9

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = -1LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CExpressionManager::`vftable';
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 5) = &CExpressionValueStack::`vftable';
  *((_QWORD *)this + 6) = this;
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)this + 64, 0LL, 0, a4, 24);
  *((_DWORD *)this + 24) = 0;
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)this + 104, 0LL, 0, v5, 8);
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)this + 136, 0LL, 0, v6, 16);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 168),
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  return this;
}
