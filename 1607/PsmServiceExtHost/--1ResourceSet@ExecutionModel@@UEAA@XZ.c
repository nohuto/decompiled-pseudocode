/*
 * XREFs of ??1ResourceSet@ExecutionModel@@UEAA@XZ @ 0x180012A28
 * Callers:
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180012AE0 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x1800150D4 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x180035354 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_ContainerBa.c)
 */

void __fastcall ExecutionModel::ResourceSet::~ResourceSet(ExecutionModel::ResourceSet *this)
{
  char *v2; // rdi
  __int64 *v3; // rdx
  __int64 **v4; // rdi
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char *v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax

  *(_QWORD *)this = &ExecutionModel::ResourceSet::`vftable'{for `ExecutionModel::BaseResourceSet'};
  v2 = (char *)this + 1896;
  *((_QWORD *)this + 171) = &ExecutionModel::ResourceSet::`vftable'{for `ExecutionModel::IResourceSet'};
  while ( 1 )
  {
    v3 = *(__int64 **)v2;
    if ( *(char **)v2 == v2 )
      break;
    v9 = (__int64 *)v3[1];
    v10 = *v3;
    *v9 = *v3;
    *(_QWORD *)(v10 + 8) = v9;
    utl::_ContainerBase<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::ResourceSet>>>();
  }
  *((_QWORD *)v2 + 2) = 0LL;
  v4 = (__int64 **)((char *)this + 1872);
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
  *((_QWORD *)this + 236) = 0LL;
  v6 = *((_QWORD *)this + 229);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 224);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((char *)this + 160);
  v8 = (char *)*((_QWORD *)this + 4);
  if ( v8 != (char *)this + 48 )
    operator delete(v8);
}
