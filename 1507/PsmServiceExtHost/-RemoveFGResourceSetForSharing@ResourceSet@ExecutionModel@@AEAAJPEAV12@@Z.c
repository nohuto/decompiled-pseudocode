/*
 * XREFs of ?RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x1800103D4
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x180011B24 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180040C3C (-ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800011B4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000D87C (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::RemoveFGResourceSetForSharing(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::ResourceSet *a2)
{
  unsigned int v3; // esi
  ExecutionModel::ResourceSet *v5; // rbx
  ExecutionModel::ResourceSet *i; // r8
  ExecutionModel::ResourceSet *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v5 = (ExecutionModel::ResourceSet *)((char *)this + 1880);
  for ( i = (ExecutionModel::ResourceSet *)*((_QWORD *)this + 235); ; i = *(ExecutionModel::ResourceSet **)i )
  {
    if ( i == v5 )
      goto LABEL_8;
    if ( *((struct ExecutionModel::ResourceSet **)i + 2) == a2 )
      break;
  }
  if ( i == v5 )
  {
LABEL_8:
    v3 = -2147024809;
    goto LABEL_7;
  }
  utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
    (__int64)this + 1880,
    &v8,
    (ExecutionModel::ResourceSet **)i);
  if ( *(ExecutionModel::ResourceSet **)v5 == v5 && (*((_DWORD *)this + 439) & 0x20000) == 0 )
    ExecutionModel::BaseResourceSet::SendReleaseRequest((__int64)this, 0);
LABEL_7:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v3;
}
