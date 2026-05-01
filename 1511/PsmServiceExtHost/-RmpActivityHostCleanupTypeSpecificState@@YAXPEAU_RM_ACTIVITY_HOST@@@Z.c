/*
 * XREFs of ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009380
 * Callers:
 *     RmpActivityHostDelete @ 0x180007508 (RmpActivityHostDelete.c)
 *     RmpActivityHostCreateHostPsm @ 0x180007C50 (RmpActivityHostCreateHostPsm.c)
 *     ?RmpActivityHostCleanupAllState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180040A10 (-RmpActivityHostCleanupAllState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     RmpPsmAppFamilyTableTryRemoveActivityHost @ 0x1800075E4 (RmpPsmAppFamilyTableTryRemoveActivityHost.c)
 *     ?PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x18000A0A0 (-PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x18000B350 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_ContainerBa.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

void __fastcall RmpActivityHostCleanupTypeSpecificState(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // ecx
  __int64 **v3; // rbx
  __int64 **v4; // rdi
  __int64 *v5; // rdx
  __int64 *v6; // rdx
  int v7; // ecx
  __int64 v8; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax

  v2 = *((_DWORD *)a1 + 10);
  if ( v2 )
  {
    v7 = v2 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        CloseHandle(*((HANDLE *)a1 + 6));
    }
    else
    {
      v8 = *((_QWORD *)a1 + 75);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    RmpPsmAppFamilyTableTryRemoveActivityHost(a1);
    v3 = (__int64 **)*((_QWORD *)a1 + 75);
    if ( v3 )
    {
      ExecutionModel::ModernActivationResourceInfo::PurgeResourceSets(
        (ExecutionModel::ModernActivationResourceInfo *)v3,
        1);
      v4 = v3 + 3;
      while ( 1 )
      {
        v5 = *v4;
        if ( *v4 == (__int64 *)v4 )
          break;
        v9 = (__int64 *)v5[1];
        v10 = *v5;
        *v9 = *v5;
        *(_QWORD *)(v10 + 8) = v9;
        utl::_ContainerBase<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::ResourceSet>>>();
      }
      v3[5] = 0LL;
      while ( 1 )
      {
        v6 = *v3;
        if ( *v3 == (__int64 *)v3 )
          break;
        v11 = (__int64 *)v6[1];
        v12 = *v6;
        *v11 = *v6;
        *(_QWORD *)(v12 + 8) = v11;
        utl::_ContainerBase<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::ResourceSet>>>();
      }
      v3[2] = 0LL;
      operator delete(v3);
    }
  }
}
