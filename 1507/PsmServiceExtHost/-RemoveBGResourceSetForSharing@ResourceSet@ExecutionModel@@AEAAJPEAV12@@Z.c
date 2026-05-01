/*
 * XREFs of ?RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180040F24
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000FD48 (-TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180040C3C (-ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000D87C (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x180040DB8 (-ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::RemoveBGResourceSetForSharing(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::ResourceSet *a2)
{
  unsigned int v3; // esi
  ExecutionModel::ResourceSet *v5; // rdi
  ExecutionModel::ResourceSet *i; // rbx
  ExecutionModel::ResourceSet *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v5 = (ExecutionModel::ResourceSet *)((char *)this + 1856);
  for ( i = (ExecutionModel::ResourceSet *)*((_QWORD *)this + 232); ; i = *(ExecutionModel::ResourceSet **)i )
  {
    if ( i == v5 )
      goto LABEL_6;
    if ( *((struct ExecutionModel::ResourceSet **)i + 2) == a2 )
      break;
  }
  if ( i == v5 )
  {
LABEL_6:
    v3 = -2147024809;
    goto LABEL_8;
  }
  ExecutionModel::ResourceSet::ReleaseMemoryForFGSharing(this, *((_QWORD *)a2 + 231));
  utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
    (__int64)this + 1856,
    &v8,
    (ExecutionModel::ResourceSet **)i);
LABEL_8:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v3;
}
