/*
 * XREFs of ?RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180035E00
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011700 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180011B4C (-TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 * Callees:
 *     ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAX_K@Z @ 0x180035CA8 (-ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAX_K@Z.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x180036500 (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::RemoveBGResourceSetForSharing(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::ResourceSet *a2)
{
  unsigned int v3; // esi
  char *v5; // rdi
  char *i; // rbx
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v5 = (char *)this + 1872;
  for ( i = (char *)*((_QWORD *)this + 234); ; i = *(char **)i )
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
  ExecutionModel::ResourceSet::ReleaseMemoryForFGSharing(this, *((_QWORD *)a2 + 232));
  utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
    (char *)this + 1872,
    &v8,
    i);
LABEL_8:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v3;
}
