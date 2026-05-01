/*
 * XREFs of ?RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000E560
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x1800101DC (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 * Callees:
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800039C4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000B280 (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::RemoveFGResourceSetForSharing(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::ResourceSet *a2)
{
  unsigned int v3; // esi
  _QWORD *v5; // rbx
  __int64 i; // r8
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v5 = (_QWORD *)((char *)this + 1888);
  for ( i = *((_QWORD *)this + 236); ; i = *(_QWORD *)i )
  {
    if ( (_QWORD *)i == v5 )
      goto LABEL_8;
    if ( *(struct ExecutionModel::ResourceSet **)(i + 16) == a2 )
      break;
  }
  if ( (_QWORD *)i == v5 )
  {
LABEL_8:
    v3 = -2147024809;
    goto LABEL_6;
  }
  utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
    (__int64)this + 1888,
    &v8,
    (__int64 *)i);
  if ( (_QWORD *)*v5 == v5 && (*((_DWORD *)this + 441) & 0x20000) == 0 )
    ExecutionModel::BaseResourceSet::SendReleaseRequest((__int64)this, 0);
LABEL_6:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v3;
}
