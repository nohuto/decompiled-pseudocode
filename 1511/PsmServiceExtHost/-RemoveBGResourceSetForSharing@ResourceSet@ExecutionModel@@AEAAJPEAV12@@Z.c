/*
 * XREFs of ?RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000E4CC
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000D87C (-TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 * Callees:
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000B280 (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000DAE0 (-ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::RemoveBGResourceSetForSharing(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::ResourceSet *a2)
{
  unsigned int v3; // esi
  char *v5; // rdi
  __int64 i; // rbx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v5 = (char *)this + 1864;
  for ( i = *((_QWORD *)this + 233); (char *)i != v5; i = *(_QWORD *)i )
  {
    if ( *(struct ExecutionModel::ResourceSet **)(i + 16) == a2 )
    {
      if ( (char *)i != v5 )
      {
        ExecutionModel::ResourceSet::ReleaseMemoryForFGSharing(this, *((_QWORD *)a2 + 232));
        utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
          (__int64)this + 1864,
          &v8,
          (__int64 *)i);
        goto LABEL_6;
      }
      break;
    }
  }
  v3 = -2147024809;
LABEL_6:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v3;
}
