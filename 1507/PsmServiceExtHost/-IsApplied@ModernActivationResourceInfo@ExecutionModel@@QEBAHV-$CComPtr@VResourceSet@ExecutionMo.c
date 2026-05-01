/*
 * XREFs of ?IsApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAHV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180009594
 * Callers:
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009600 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     ?IsResourceSetValidPredecessor@ModernActivationResourceInfo@ExecutionModel@@QEBA_NPEAVResourceSet@2@@Z @ 0x180009958 (-IsResourceSetValidPredecessor@ModernActivationResourceInfo@ExecutionModel@@QEBA_NPEAVResourceSe.c)
 *     ?CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPEAVResourceSet@2@@Z @ 0x180034DCC (-CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPE.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ModernActivationResourceInfo::IsApplied(
        __int64 a1,
        ExecutionModel::ResourceSet **a2)
{
  _QWORD *v2; // r8
  _QWORD *i; // rax
  ExecutionModel::ResourceSet *v4; // rcx
  unsigned int (__fastcall *v5)(ExecutionModel::ResourceSet *__hidden); // rdi
  unsigned int (__fastcall *v7)(ExecutionModel::ResourceSet *__hidden); // rdi

  v2 = (_QWORD *)(a1 + 24);
  for ( i = *(_QWORD **)(a1 + 24); i != v2; i = (_QWORD *)*i )
  {
    v4 = *a2;
    if ( (ExecutionModel::ResourceSet *)i[2] == *a2 )
    {
      if ( v4 )
      {
        v5 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v4 + 16LL);
        if ( v5 == ExecutionModel::ResourceSet::Release )
          ExecutionModel::ResourceSet::Release(v4);
        else
          v5(v4);
      }
      return 1LL;
    }
  }
  if ( *a2 )
  {
    v7 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)*a2 + 16LL);
    if ( v7 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(*a2);
    else
      v7(*a2);
  }
  return 0LL;
}
