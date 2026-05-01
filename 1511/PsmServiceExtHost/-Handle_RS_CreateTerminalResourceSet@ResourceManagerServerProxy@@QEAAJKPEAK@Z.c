/*
 * XREFs of ?Handle_RS_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJKPEAK@Z @ 0x180039BF4
 * Callers:
 *     RmtSrv_RS_CreateTerminalResourceSet @ 0x1800387B0 (RmtSrv_RS_CreateTerminalResourceSet.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180038904 (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 *     ??0?$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x180038A5C (--0-$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV?$CComPtr@VResourceSetServerProxy@@@ATL@@PEAK@Z @ 0x180038B88 (-AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV-$CComPtr@VResourceSetServerProxy@@@ATL@@.c)
 *     ?Attach@?$CComPtrBase@VResourceSetServerProxy@@@ATL@@QEAAXPEAVResourceSetServerProxy@@@Z @ 0x180038C00 (-Attach@-$CComPtrBase@VResourceSetServerProxy@@@ATL@@QEAAXPEAVResourceSetServerProxy@@@Z.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_CreateTerminalResourceSet(
        ResourceManagerServerProxy *this,
        int a2,
        unsigned int *a3)
{
  struct IUnknown **v4; // rbx
  __int64 v6; // rdx
  int v7; // r15d
  __int64 *v8; // rdi
  _QWORD *v9; // rax
  __int64 *v10; // rax
  unsigned int v11; // edx
  __int64 *v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h] BYREF
  __int64 v16; // [rsp+48h] [rbp-10h] BYREF
  int v17; // [rsp+A8h] [rbp+50h] BYREF
  struct IUnknown *v18; // [rsp+B0h] [rbp+58h] BYREF
  struct IUnknown **v19; // [rsp+B8h] [rbp+60h] BYREF

  v17 = a2;
  v4 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !a3 )
  {
    v7 = -2147024809;
    goto LABEL_14;
  }
  v13 = 0LL;
  v14 = 0LL;
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (__int64)this + 72,
    v6,
    (unsigned __int16 *)&v17,
    &v13,
    &v14,
    &v15);
  v8 = v13;
  if ( v13 == (__int64 *)((char *)this + 72) )
  {
    v7 = -2147023728;
    goto LABEL_14;
  }
  v9 = malloc(0x20uLL);
  if ( v9 )
  {
    *v9 = &ResourceSetServerProxy::`vftable';
    v9[1] = 0LL;
    v9[2] = 0LL;
    *((_DWORD *)v9 + 6) = 1;
  }
  else
  {
    v9 = 0LL;
  }
  ATL::CComPtrBase<ResourceSetServerProxy>::Attach(&v19, (__int64)v9);
  v4 = v19;
  if ( !v19 )
  {
    v7 = -2147024882;
LABEL_14:
    if ( v18 )
      ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl[5].QueryInterface)(v18);
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown **))(**(_QWORD **)(v8[4] + 8) + 48LL))(
         *(_QWORD *)(v8[4] + 8),
         &v18);
  if ( v7 < 0 )
    goto LABEL_14;
  if ( v4[1] != v18 )
    ATL::AtlComPtrAssign(v4 + 1, v18);
  v10 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v16, (__int64 *)&v19);
  v7 = ResourceManagerServerProxy::AddResourceSetProxy((int)this, v10, a3);
  if ( v7 < 0 )
    goto LABEL_14;
LABEL_16:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
    (ExecutionModel::ResourceSetImpl **)&v18,
    v11);
  if ( v4 )
    ((void (__fastcall *)(struct IUnknown **))(*v4)[2].lpVtbl)(v4);
  return (unsigned int)v7;
}
