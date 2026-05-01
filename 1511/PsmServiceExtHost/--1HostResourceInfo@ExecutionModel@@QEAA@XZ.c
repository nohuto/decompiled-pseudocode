/*
 * XREFs of ??1HostResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180013628
 * Callers:
 *     ?Release@HostResourceInfo@ExecutionModel@@UEAAKXZ @ 0x180012CE0 (-Release@HostResourceInfo@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ?Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ @ 0x1800193B0 (-Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ApplicationPackageInfo@ExecutionModel@@UEAAKXZ @ 0x18001B8E0 (-Release@ApplicationPackageInfo@ExecutionModel@@UEAAKXZ.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@?$_ContainerBase@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@1@@Z @ 0x18001FB88 (--$_DeleteNode@U-$_DlistNode@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_DecStrong@_RefCountBase@utl@@QEAAXXZ @ 0x18004E120 (-_DecStrong@_RefCountBase@utl@@QEAAXXZ.c)
 */

void __fastcall ExecutionModel::HostResourceInfo::~HostResourceInfo(ExecutionModel::HostResourceInfo *this)
{
  __int64 v1; // rsi
  void *v3; // rcx
  __int64 v4; // rsi
  __int64 **v5; // rbx
  __int64 *v6; // rdx
  __int64 **v7; // rbx
  __int64 *v8; // rdx
  __int64 **v9; // rbx
  __int64 *v10; // rdx
  char *v11; // rcx
  __int64 v12; // rbx
  unsigned int (__fastcall *v13)(ExecutionModel::ApplicationPackageInfo *__hidden); // rsi
  ExecutionModel::ResourcePolicyEngine *v14; // rbx
  unsigned int (__fastcall *v15)(ExecutionModel::ResourcePolicyEngine *__hidden); // rdi
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rax

  v1 = *((_QWORD *)this + 20);
  *(_QWORD *)this = &ExecutionModel::HostResourceInfo::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 120LL))(v1);
  if ( (*((_QWORD *)this + 25) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    utl::_RefCountBase::_DecStrong((utl::_RefCountBase *)(*((_QWORD *)this + 25) & 0xFFFFFFFFFFFFFFFEuLL));
  v3 = (void *)*((_QWORD *)this + 23);
  if ( v3 )
    operator delete(v3);
  v4 = *((_QWORD *)this + 20);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 20));
  v5 = (__int64 **)((char *)this + 136);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (__int64 *)v5 )
      break;
    v16 = (__int64 *)v6[1];
    v17 = *v6;
    *v16 = *v6;
    *(_QWORD *)(v17 + 8) = v16;
    utl::_ContainerBase<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_DeleteNode<utl::_DlistNode<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>();
  }
  *((_QWORD *)this + 19) = 0LL;
  v7 = (__int64 **)((char *)this + 112);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (__int64 *)v7 )
      break;
    v18 = (__int64 *)v8[1];
    v19 = *v8;
    *v18 = *v8;
    *(_QWORD *)(v19 + 8) = v18;
    utl::_ContainerBase<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_DeleteNode<utl::_DlistNode<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>();
  }
  *((_QWORD *)this + 16) = 0LL;
  v9 = (__int64 **)((char *)this + 88);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 == (__int64 *)v9 )
      break;
    v20 = (__int64 *)v10[1];
    v21 = *v10;
    *v20 = *v10;
    *(_QWORD *)(v21 + 8) = v20;
    utl::_ContainerBase<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_DeleteNode<utl::_DlistNode<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>();
  }
  *((_QWORD *)this + 13) = 0LL;
  v11 = (char *)*((_QWORD *)this + 7);
  if ( v11 != (char *)this + 72 )
    operator delete(v11);
  v12 = *((_QWORD *)this + 3);
  if ( v12 )
  {
    v13 = *(unsigned int (__fastcall **)(ExecutionModel::ApplicationPackageInfo *__hidden))(*(_QWORD *)v12 + 16LL);
    if ( v13 == ExecutionModel::ApplicationPackageInfo::Release )
      ExecutionModel::ApplicationPackageInfo::Release(*((ExecutionModel::ApplicationPackageInfo **)this + 3));
    else
      v13(*((ExecutionModel::ApplicationPackageInfo **)this + 3));
  }
  v14 = (ExecutionModel::ResourcePolicyEngine *)*((_QWORD *)this + 2);
  if ( v14 )
  {
    v15 = *(unsigned int (__fastcall **)(ExecutionModel::ResourcePolicyEngine *__hidden))(*(_QWORD *)v14 + 16LL);
    if ( v15 == ExecutionModel::ResourcePolicyEngine::Release )
      ExecutionModel::ResourcePolicyEngine::Release(v14);
    else
      v15(v14);
  }
}
