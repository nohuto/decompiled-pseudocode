/*
 * XREFs of ??1HostResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180014258
 * Callers:
 *     ?Release@HostResourceInfo@ExecutionModel@@UEAAKXZ @ 0x180013EA0 (-Release@HostResourceInfo@ExecutionModel@@UEAAKXZ.c)
 *     ??_GHostResourceInfo@ExecutionModel@@QEAAPEAXI@Z @ 0x18002EC70 (--_GHostResourceInfo@ExecutionModel@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ @ 0x1800174E0 (-Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@?$_ContainerBase@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@1@@Z @ 0x18002381C (--$_DeleteNode@U-$_DlistNode@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ExecutionModel::HostResourceInfo::~HostResourceInfo(ExecutionModel::HostResourceInfo *this)
{
  void *v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 **v5; // rbx
  __int64 *v6; // rdx
  __int64 **v7; // rbx
  __int64 *v8; // rdx
  __int64 **v9; // rbx
  __int64 *v10; // rdx
  ExecutionModel::ResourcePolicyEngine *v11; // rbx
  unsigned int (__fastcall *v12)(ExecutionModel::ResourcePolicyEngine *__hidden); // rdi
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rax

  *(_QWORD *)this = &ExecutionModel::HostResourceInfo::`vftable';
  v2 = (void *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  v3 = *((_QWORD *)this + 19);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 120LL))(*((_QWORD *)this + 19));
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 19));
  v5 = (__int64 **)((char *)this + 128);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (__int64 *)v5 )
      break;
    v13 = (__int64 *)v6[1];
    v14 = *v6;
    *v13 = *v6;
    *(_QWORD *)(v14 + 8) = v13;
    utl::_ContainerBase<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_DeleteNode<utl::_DlistNode<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>();
  }
  *((_QWORD *)this + 18) = 0LL;
  v7 = (__int64 **)((char *)this + 104);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (__int64 *)v7 )
      break;
    v15 = (__int64 *)v8[1];
    v16 = *v8;
    *v15 = *v8;
    *(_QWORD *)(v16 + 8) = v15;
    utl::_ContainerBase<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_DeleteNode<utl::_DlistNode<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>();
  }
  *((_QWORD *)this + 15) = 0LL;
  v9 = (__int64 **)((char *)this + 80);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 == (__int64 *)v9 )
      break;
    v17 = (__int64 *)v10[1];
    v18 = *v10;
    *v17 = *v10;
    *(_QWORD *)(v18 + 8) = v17;
    utl::_ContainerBase<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_DeleteNode<utl::_DlistNode<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>();
  }
  *((_QWORD *)this + 12) = 0LL;
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((char *)this + 48);
  v11 = (ExecutionModel::ResourcePolicyEngine *)*((_QWORD *)this + 2);
  if ( v11 )
  {
    v12 = *(unsigned int (__fastcall **)(ExecutionModel::ResourcePolicyEngine *__hidden))(*(_QWORD *)v11 + 16LL);
    if ( v12 == ExecutionModel::ResourcePolicyEngine::Release )
      ExecutionModel::ResourcePolicyEngine::Release(v11);
    else
      v12(v11);
  }
}
