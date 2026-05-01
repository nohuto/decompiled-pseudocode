/*
 * XREFs of ?TryUnapplyResourceSet@ModernActivationResourceInfo@ExecutionModel@@AEAA_NPEAVResourceSet@2@@Z @ 0x18002EE80
 * Callers:
 *     ?TempReleaseResourceSet@ModernActivationResourceInfo@ExecutionModel@@QEAAXAEAV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180038C58 (-TempReleaseResourceSet@ModernActivationResourceInfo@ExecutionModel@@QEAAXAEAV-$CComPtr@VResourc.c)
 * Callees:
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000D87C (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     RmpActivityHostOnAppliedResourceSetChange @ 0x18003BD54 (RmpActivityHostOnAppliedResourceSetChange.c)
 */

char __fastcall ExecutionModel::ModernActivationResourceInfo::TryUnapplyResourceSet(
        ExecutionModel::ModernActivationResourceInfo *this,
        struct ExecutionModel::ResourceSet *a2)
{
  char v2; // bl
  ExecutionModel::ResourceSet ***v4; // rcx
  ExecutionModel::ResourceSet **i; // r8
  __int64 v6; // rcx
  ExecutionModel::ResourceSet *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v4 = (ExecutionModel::ResourceSet ***)((char *)this + 24);
  for ( i = *v4; i != (ExecutionModel::ResourceSet **)v4; i = (ExecutionModel::ResourceSet **)*i )
  {
    if ( i[2] == a2 )
    {
      if ( i != (ExecutionModel::ResourceSet **)v4 )
      {
        v2 = 1;
        utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
          (__int64)v4,
          &v8,
          i);
        RmpActivityHostOnAppliedResourceSetChange(v6, *((_QWORD *)a2 + 175), a2, 1LL);
      }
      return v2;
    }
  }
  return v2;
}
