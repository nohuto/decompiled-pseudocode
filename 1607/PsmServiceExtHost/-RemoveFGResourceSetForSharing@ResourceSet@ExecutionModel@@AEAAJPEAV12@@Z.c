/*
 * XREFs of ?RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180035E94
 * Callers:
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000F710 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011700 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     RmpPolicyTryGetRevokeAction @ 0x1800343D0 (RmpPolicyTryGetRevokeAction.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180035F54 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x180036500 (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::RemoveFGResourceSetForSharing(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::ResourceSet *a2)
{
  unsigned int v3; // edi
  __int64 *v5; // rbx
  __int64 *i; // r8
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v5 = (__int64 *)((char *)this + 1896);
  for ( i = (__int64 *)*((_QWORD *)this + 237); ; i = (__int64 *)*i )
  {
    if ( i == v5 )
      goto LABEL_6;
    if ( (struct ExecutionModel::ResourceSet *)i[2] == a2 )
      break;
  }
  if ( i == v5 )
  {
LABEL_6:
    v3 = -2147024809;
    goto LABEL_10;
  }
  utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
    (char *)this + 1896,
    &v8,
    i);
  if ( (__int64 *)*v5 == v5 && (*((_DWORD *)this + 447) & 0x20000) == 0 )
  {
    RmpPolicyTryGetRevokeAction((__int64)this, 2, (int *)&v8);
    ExecutionModel::ResourceSet::Revoke(this, v8, 0LL);
  }
LABEL_10:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v3;
}
