/*
 * XREFs of ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180010B40
 * Callers:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x180010E60 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Contain.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x18002F194 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_ContainerBa.c)
 */

ExecutionModel::ResourceSet *__fastcall ExecutionModel::ResourceSet::`scalar deleting destructor'(
        ExecutionModel::ResourceSet *this,
        char a2)
{
  char *v3; // rdi
  __int64 *v5; // rdx
  __int64 **v6; // rdi
  __int64 *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 **v12; // rdi
  __int64 *v13; // rdx
  char *v14; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rax

  *(_QWORD *)this = &ExecutionModel::ResourceSet::`vftable'{for `ExecutionModel::BaseResourceSet'};
  v3 = (char *)this + 1880;
  *((_QWORD *)this + 171) = &ExecutionModel::ResourceSet::`vftable'{for `ExecutionModel::IResourceSet'};
  while ( 1 )
  {
    v5 = *(__int64 **)v3;
    if ( *(char **)v3 == v3 )
      break;
    v18 = (__int64 *)v5[1];
    v19 = *v5;
    *v18 = *v5;
    *(_QWORD *)(v19 + 8) = v18;
    utl::_ContainerBase<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::ResourceSet>>>();
  }
  *((_QWORD *)v3 + 2) = 0LL;
  v6 = (__int64 **)((char *)this + 1856);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (__int64 *)v6 )
      break;
    v20 = (__int64 *)v7[1];
    v21 = *v7;
    *v20 = *v7;
    *(_QWORD *)(v21 + 8) = v20;
    utl::_ContainerBase<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::ResourceSet>>>();
  }
  *((_QWORD *)this + 234) = 0LL;
  v8 = *((_QWORD *)this + 227);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 227));
  v9 = *((_QWORD *)this + 226);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 226));
  v10 = *((_QWORD *)this + 225);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*((_QWORD *)this + 225));
  v11 = *((_QWORD *)this + 220);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 16LL))(*((_QWORD *)this + 220));
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
    utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
      v16,
      v13);
  }
  *((_QWORD *)this + 22) = 0LL;
  v14 = (char *)*((_QWORD *)this + 4);
  if ( v14 != (char *)this + 48 )
    operator delete(v14);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
