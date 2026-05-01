/*
 * XREFs of ?Handle_RS_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJKPEAK@Z @ 0x1800329D4
 * Callers:
 *     RmtSrv_RS_CreateTerminalResourceSet @ 0x180031600 (RmtSrv_RS_CreateTerminalResourceSet.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??0?$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x180031834 (--0-$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV?$CComPtr@VResourceSetServerProxy@@@ATL@@PEAK@Z @ 0x180031968 (-AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV-$CComPtr@VResourceSetServerProxy@@@ATL@@.c)
 *     ?Attach@?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z @ 0x1800319E0 (-Attach@-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18003E16C (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_CreateTerminalResourceSet(
        ResourceManagerServerProxy *this,
        int a2,
        unsigned int *a3)
{
  struct IUnknown **v4; // rbx
  int v6; // edx
  int v7; // r15d
  ResourceManagerServerProxy *v8; // rdi
  _QWORD *v9; // rax
  __int64 *v10; // rax
  ResourceManagerServerProxy *v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h] BYREF
  _BYTE v14[8]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h] BYREF
  int v16; // [rsp+A8h] [rbp+50h] BYREF
  struct IUnknown *v17; // [rsp+B0h] [rbp+58h] BYREF
  struct IUnknown **v18; // [rsp+B8h] [rbp+60h] BYREF

  v16 = a2;
  v4 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !a3 )
  {
    v7 = -2147024809;
    goto LABEL_14;
  }
  v12 = 0LL;
  v13 = 0LL;
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (_DWORD)this + 72,
    v6,
    (unsigned int)&v16,
    (unsigned int)&v12,
    (__int64)&v13,
    (__int64)v14);
  v8 = v12;
  if ( v12 == (ResourceManagerServerProxy *)((char *)this + 72) )
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
  ATL::CComPtrBase<ExecutionModel::ResourceSet>::Attach(&v18, (__int64)v9);
  v4 = v18;
  if ( !v18 )
  {
    v7 = -2147024882;
LABEL_14:
    if ( v17 )
      ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl[5].QueryInterface)(v17);
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown **))(**(_QWORD **)(*((_QWORD *)v8 + 4) + 8LL) + 48LL))(
         *(_QWORD *)(*((_QWORD *)v8 + 4) + 8LL),
         &v17);
  if ( v7 < 0 )
    goto LABEL_14;
  if ( v4[1] != v17 )
    ATL::AtlComPtrAssign(v4 + 1, v17);
  v10 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v15, (__int64 *)&v18);
  v7 = ResourceManagerServerProxy::AddResourceSetProxy((int)this, v10, a3);
  if ( v7 < 0 )
    goto LABEL_14;
LABEL_16:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>((ExecutionModel::ResourceSetImpl **)&v17);
  if ( v4 )
    ((void (__fastcall *)(struct IUnknown **))(*v4)[2].lpVtbl)(v4);
  return (unsigned int)v7;
}
