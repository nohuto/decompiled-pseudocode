/*
 * XREFs of ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D044
 * Callers:
 *     RmpActivityHostDelete @ 0x1800083A8 (RmpActivityHostDelete.c)
 *     RmpActivityHostCreateHostPsm @ 0x180008598 (RmpActivityHostCreateHostPsm.c)
 *     ?RmpActivityHostCleanupAllState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B640 (-RmpActivityHostCleanupAllState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     RmpPsmAppFamilyTableTryRemoveActivityHost @ 0x180008410 (RmpPsmAppFamilyTableTryRemoveActivityHost.c)
 *     ?PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x180009AC0 (-PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x18002F194 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_ContainerBa.c)
 */

void __fastcall RmpActivityHostCleanupTypeSpecificState(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // ecx
  __int64 **v3; // rbx
  __int64 **v4; // rdi
  __int64 *v5; // rdx
  __int64 **v6; // rdi
  __int64 *v7; // rdx
  __int64 *v8; // rdx
  int v9; // ecx
  __int64 v10; // rdi
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rax

  v2 = *((_DWORD *)a1 + 10);
  if ( v2 )
  {
    v9 = v2 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        CloseHandle(*((HANDLE *)a1 + 6));
    }
    else
    {
      v10 = *((_QWORD *)a1 + 75);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
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
      v4 = v3 + 6;
      while ( 1 )
      {
        v5 = *v4;
        if ( *v4 == (__int64 *)v4 )
          break;
        v11 = (__int64 *)v5[1];
        v12 = *v5;
        *v11 = *v5;
        *(_QWORD *)(v12 + 8) = v11;
        utl::_ContainerBase<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::ResourceSet>>>();
      }
      v3[8] = 0LL;
      v6 = v3 + 3;
      while ( 1 )
      {
        v7 = *v6;
        if ( *v6 == (__int64 *)v6 )
          break;
        v13 = (__int64 *)v7[1];
        v14 = *v7;
        *v13 = *v7;
        *(_QWORD *)(v14 + 8) = v13;
        utl::_ContainerBase<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::ResourceSet>>>();
      }
      v3[5] = 0LL;
      while ( 1 )
      {
        v8 = *v3;
        if ( *v3 == (__int64 *)v3 )
          break;
        v15 = (__int64 *)v8[1];
        v16 = *v8;
        *v15 = *v8;
        *(_QWORD *)(v16 + 8) = v15;
        utl::_ContainerBase<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::ResourceSet>>>();
      }
      v3[2] = 0LL;
      operator delete(v3);
    }
  }
}
