/*
 * XREFs of ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_GUID@@PEAHPEBKPEAK@Z @ 0x180031DE4
 * Callers:
 *     RmtSrv_RM_AcquireResourceSet @ 0x180031040 (RmtSrv_RM_AcquireResourceSet.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18002ED58 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??0?$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x180031834 (--0-$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV?$CComPtr@VResourceSetServerProxy@@@ATL@@PEAK@Z @ 0x180031968 (-AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV-$CComPtr@VResourceSetServerProxy@@@ATL@@.c)
 *     ?Attach@?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z @ 0x1800319E0 (-Attach@-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18003E16C (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180042DF4 (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_AcquireResourceSet(
        ResourceManagerServerProxy *this,
        unsigned __int64 a2,
        struct RmResourceSetInfo *a3,
        char a4,
        const struct _GUID *a5,
        int *a6,
        const unsigned int *a7,
        unsigned int *a8)
{
  struct IUnknown **v11; // rbx
  struct _RTL_CRITICAL_SECTION *v12; // rsi
  int v13; // r15d
  _QWORD *v15; // rax
  int v16; // edx
  struct ExecutionModel::_ResourceSetInfo *v17; // r8
  char *v18; // rdi
  struct IUnknown *v19; // rdx
  char v20; // r13
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 *v23; // rax
  unsigned __int8 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  struct IUnknown *v26; // [rsp+50h] [rbp-B0h] BYREF
  struct IUnknown *v27; // [rsp+58h] [rbp-A8h] BYREF
  ExecutionModel *v28; // [rsp+60h] [rbp-A0h]
  ResourceManagerServerProxy *v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  const struct _GUID *v34; // [rsp+90h] [rbp-70h]
  int *v35; // [rsp+98h] [rbp-68h]
  _BYTE v36[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v38[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v39[352]; // [rsp+C0h] [rbp-40h] BYREF

  v34 = a5;
  v31 = a8;
  v11 = 0LL;
  v29 = this;
  v25 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v24 = 0;
  v28 = a3;
  v35 = a6;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v39);
  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !a8 )
  {
    v13 = -2147024809;
    goto LABEL_3;
  }
  v15 = malloc(0x20uLL);
  if ( v15 )
  {
    *v15 = &ResourceSetServerProxy::`vftable';
    v15[1] = 0LL;
    v15[2] = 0LL;
    *((_DWORD *)v15 + 6) = 1;
  }
  ATL::CComPtrBase<ExecutionModel::ResourceSet>::Attach(&v25, (__int64)v15);
  v11 = (struct IUnknown **)v25;
  if ( !v25 )
  {
    v13 = -2147024882;
    goto LABEL_3;
  }
  if ( (a2 & -(__int64)(a4 != 0)) != 0 )
    *(_QWORD *)(v25 + 16) = a2 & -(__int64)(a4 != 0);
  if ( a7 )
  {
    v30 = 0LL;
    v18 = (char *)this + 72;
    utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
      (_DWORD)v18,
      v16,
      (_DWORD)a7,
      (unsigned int)&v30,
      (__int64)v38,
      (__int64)v36);
    if ( (char *)v30 == v18 )
    {
      v13 = -2147023728;
LABEL_3:
      if ( v27 )
        ((void (__fastcall *)(struct IUnknown *))v27->lpVtbl[5].QueryInterface)(v27);
      goto LABEL_5;
    }
    v19 = *(struct IUnknown **)(*(_QWORD *)(v30 + 32) + 8LL);
    if ( v26 != v19 )
      ATL::AtlComPtrAssign(&v26, v19);
  }
  ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(v28, (const struct RmResourceSetInfo *)v39, v17);
  v28 = (ExecutionModel *)((unsigned __int64)&v24 & -(__int64)(a6 != 0LL));
  if ( a4 )
  {
    v20 = 1;
    v21 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v33, &v25);
    v22 = v32;
  }
  else
  {
    v22 = 0LL;
    v21 = &v32;
    v32 = 0LL;
    v20 = 2;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, const struct _GUID *, ExecutionModel *, struct IUnknown *, struct IUnknown **))(**((_QWORD **)v29 + 7) + 48LL))(
          *((_QWORD *)v29 + 7),
          v39,
          *v21,
          v34,
          v28,
          v26,
          &v27);
  if ( (v20 & 2) != 0 )
  {
    v20 &= ~2u;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( (v20 & 1) != 0 && v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v13 < 0 )
    goto LABEL_3;
  if ( v11[1] != v27 )
    ATL::AtlComPtrAssign(v11 + 1, v27);
  v23 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v37, &v25);
  v13 = ResourceManagerServerProxy::AddResourceSetProxy((int)v29, v23, v31);
  if ( v13 < 0 )
    goto LABEL_3;
  if ( v35 )
    *v35 = v24;
LABEL_5:
  LeaveCriticalSection(v12);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>((ExecutionModel::ResourceSetImpl **)&v26);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>((ExecutionModel::ResourceSetImpl **)&v27);
  if ( v11 )
    ((void (__fastcall *)(struct IUnknown **))(*v11)[2].lpVtbl)(v11);
  return (unsigned int)v13;
}
