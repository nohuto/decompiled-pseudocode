/*
 * XREFs of ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_GUID@@PEAHPEBKPEAK@Z @ 0x180039004
 * Callers:
 *     RmtSrv_RM_AcquireResourceSet @ 0x1800381F0 (RmtSrv_RM_AcquireResourceSet.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800365C8 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180038904 (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 *     ??0?$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x180038A5C (--0-$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV?$CComPtr@VResourceSetServerProxy@@@ATL@@PEAK@Z @ 0x180038B88 (-AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV-$CComPtr@VResourceSetServerProxy@@@ATL@@.c)
 *     ?Attach@?$CComPtrBase@VResourceSetServerProxy@@@ATL@@QEAAXPEAVResourceSetServerProxy@@@Z @ 0x180038C00 (-Attach@-$CComPtrBase@VResourceSetServerProxy@@@ATL@@QEAAXPEAVResourceSetServerProxy@@@Z.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180047D64 (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_AcquireResourceSet(
        ResourceManagerServerProxy *this,
        unsigned __int64 a2,
        struct RmResourceSetInfo *a3,
        char a4,
        const struct _GUID *a5,
        int *a6,
        unsigned __int16 *a7,
        unsigned int *a8)
{
  struct IUnknown **v11; // rbx
  struct _RTL_CRITICAL_SECTION *v12; // rsi
  int v13; // r15d
  unsigned int v14; // edx
  unsigned int v15; // edx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  struct ExecutionModel::_ResourceSetInfo *v19; // r8
  __int64 *v20; // rdi
  struct IUnknown *v21; // rdx
  char v22; // r13
  __int64 *v23; // rax
  __int64 v24; // rdi
  __int64 *v25; // rax
  unsigned __int8 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  struct IUnknown *v28; // [rsp+50h] [rbp-B0h] BYREF
  struct IUnknown *v29; // [rsp+58h] [rbp-A8h] BYREF
  ExecutionModel *v30; // [rsp+60h] [rbp-A0h]
  ResourceManagerServerProxy *v31; // [rsp+68h] [rbp-98h]
  __int64 *v32; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h] BYREF
  const struct _GUID *v36; // [rsp+90h] [rbp-70h]
  int *v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v41[368]; // [rsp+C0h] [rbp-40h] BYREF

  v36 = a5;
  v33 = a8;
  v11 = 0LL;
  v31 = this;
  v27 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v26 = 0;
  v30 = a3;
  v37 = a6;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v41);
  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !a8 )
  {
    v13 = -2147024809;
    goto LABEL_3;
  }
  v17 = malloc(0x20uLL);
  if ( v17 )
  {
    *v17 = &ResourceSetServerProxy::`vftable';
    v17[1] = 0LL;
    v17[2] = 0LL;
    *((_DWORD *)v17 + 6) = 1;
  }
  ATL::CComPtrBase<ResourceSetServerProxy>::Attach(&v27, (__int64)v17);
  v11 = (struct IUnknown **)v27;
  if ( !v27 )
  {
    v13 = -2147024882;
    goto LABEL_3;
  }
  if ( (a2 & -(__int64)(a4 != 0)) != 0 )
    *(_QWORD *)(v27 + 16) = a2 & -(__int64)(a4 != 0);
  if ( a7 )
  {
    v32 = 0LL;
    v20 = (__int64 *)((char *)this + 72);
    utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
      (__int64)v20,
      v18,
      a7,
      &v32,
      &v40,
      &v38);
    if ( v32 == v20 )
    {
      v13 = -2147023728;
LABEL_3:
      if ( v29 )
        ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl[5].QueryInterface)(v29);
      goto LABEL_5;
    }
    v21 = *(struct IUnknown **)(v32[4] + 8);
    if ( v28 != v21 )
      ATL::AtlComPtrAssign(&v28, v21);
  }
  ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(v30, (const struct RmResourceSetInfo *)v41, v19);
  v30 = (ExecutionModel *)((unsigned __int64)&v26 & -(__int64)(a6 != 0LL));
  if ( a4 )
  {
    v22 = 1;
    v23 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v35, &v27);
    v24 = v34;
  }
  else
  {
    v24 = 0LL;
    v23 = &v34;
    v34 = 0LL;
    v22 = 2;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, const struct _GUID *, ExecutionModel *, struct IUnknown *, struct IUnknown **))(**((_QWORD **)v31 + 7) + 48LL))(
          *((_QWORD *)v31 + 7),
          v41,
          *v23,
          v36,
          v30,
          v28,
          &v29);
  if ( (v22 & 2) != 0 )
  {
    v22 &= ~2u;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( (v22 & 1) != 0 && v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v13 < 0 )
    goto LABEL_3;
  if ( v11[1] != v29 )
    ATL::AtlComPtrAssign(v11 + 1, v29);
  v25 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v39, &v27);
  v13 = ResourceManagerServerProxy::AddResourceSetProxy((int)v31, v25, v33);
  if ( v13 < 0 )
    goto LABEL_3;
  if ( v37 )
    *v37 = v26;
LABEL_5:
  LeaveCriticalSection(v12);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
    (ExecutionModel::ResourceSetImpl **)&v28,
    v14);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
    (ExecutionModel::ResourceSetImpl **)&v29,
    v15);
  if ( v11 )
    ((void (__fastcall *)(struct IUnknown **))(*v11)[2].lpVtbl)(v11);
  return (unsigned int)v13;
}
