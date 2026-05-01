/*
 * XREFs of ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18000ED00
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000C690 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x18000B350 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_ContainerBa.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x18000F0E0 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Contain.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ExecutionModel::ResourceSet *__fastcall ExecutionModel::ResourceSet::`scalar deleting destructor'(
        ExecutionModel::ResourceSet *this,
        char a2)
{
  ExecutionModel::ResourceSet ***v3; // rdi
  ExecutionModel::ResourceSet **v5; // rdx
  ExecutionModel::ResourceSet ***v6; // rdi
  ExecutionModel::ResourceSet **v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 **v12; // rdi
  __int64 *v13; // rdx
  char *v14; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rax
  ExecutionModel::ResourceSet **v18; // rcx
  ExecutionModel::ResourceSet *v19; // rax
  ExecutionModel::ResourceSet **v20; // rcx
  ExecutionModel::ResourceSet *v21; // rax

  *(_QWORD *)this = &ExecutionModel::ResourceSet::`vftable'{for `ExecutionModel::BaseResourceSet'};
  v3 = (ExecutionModel::ResourceSet ***)((char *)this + 1888);
  *((_QWORD *)this + 171) = &ExecutionModel::ResourceSet::`vftable'{for `ExecutionModel::IResourceSet'};
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == (ExecutionModel::ResourceSet **)v3 )
      break;
    v18 = (ExecutionModel::ResourceSet **)v5[1];
    v19 = *v5;
    *v18 = *v5;
    *((_QWORD *)v19 + 1) = v18;
    utl::_ContainerBase<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::ResourceSet>>>(
      (__int64)v18,
      v5);
  }
  v3[2] = 0LL;
  v6 = (ExecutionModel::ResourceSet ***)((char *)this + 1864);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (ExecutionModel::ResourceSet **)v6 )
      break;
    v20 = (ExecutionModel::ResourceSet **)v7[1];
    v21 = *v7;
    *v20 = *v7;
    *((_QWORD *)v21 + 1) = v20;
    utl::_ContainerBase<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::ResourceSet>>>(
      (__int64)v20,
      v7);
  }
  *((_QWORD *)this + 235) = 0LL;
  v8 = *((_QWORD *)this + 228);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 228));
  v9 = *((_QWORD *)this + 227);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 227));
  v10 = *((_QWORD *)this + 226);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*((_QWORD *)this + 226));
  v11 = *((_QWORD *)this + 221);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 16LL))(*((_QWORD *)this + 221));
  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  v12 = (__int64 **)((char *)this + 160);
  while ( 1 )
  {
    v13 = *v12;
    if ( *v12 == (__int64 *)v12 )
      break;
    v16 = (__int64 *)v13[1];
    v17 = *v13;
    *v16 = *v13;
    *(_QWORD *)(v17 + 8) = v16;
    utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>();
  }
  *((_QWORD *)this + 22) = 0LL;
  v14 = (char *)*((_QWORD *)this + 4);
  if ( v14 != (char *)this + 48 )
    operator delete(v14);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
