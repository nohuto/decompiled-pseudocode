/*
 * XREFs of ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18001AEA0
 * Callers:
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x1800013D8 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18000E6A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000EA14 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x18000F7D8 (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 * Callees:
 *     ??$emplace@AEAPEAVBaseResourceSet@ExecutionModel@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@AEAPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180010D34 (--$emplace@AEAPEAVBaseResourceSet@ExecutionModel@@@-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AddToListPrioritized(
        _QWORD **a1,
        ExecutionModel::BaseResourceSet *a2)
{
  _QWORD *i; // r8
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  ExecutionModel::BaseResourceSet *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  for ( i = *a1; i != a1 && *(_DWORD *)(i[2] + 1360LL) < *((_DWORD *)a2 + 340); i = (_QWORD *)*i )
    ;
  return *utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::emplace<ExecutionModel::BaseResourceSet * &>(
            (__int64)a1,
            &v4,
            (__int64)i,
            &v5) == 0LL
       ? 0x8007000E
       : 0;
}
