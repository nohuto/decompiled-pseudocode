/*
 * XREFs of ?Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KPEAHPEBKPEAK@Z @ 0x180031A38
 * Callers:
 *     RmtSrv_RM_AcquireResourceSet2 @ 0x180031090 (RmtSrv_RM_AcquireResourceSet2.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18002ED58 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??0?$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x180031834 (--0-$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV?$CComPtr@VResourceSetServerProxy@@@ATL@@PEAK@Z @ 0x180031968 (-AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV-$CComPtr@VResourceSetServerProxy@@@ATL@@.c)
 *     ?Attach@?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z @ 0x1800319E0 (-Attach@-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?ValidateUserSidInput@ResourceManagerServerProxy@@IEAAEPEAEK@Z @ 0x180033510 (-ValidateUserSidInput@ResourceManagerServerProxy@@IEAAEPEAEK@Z.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18003E16C (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180042DF4 (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_AcquireResourceSet2(
        ResourceManagerServerProxy *this,
        unsigned __int64 a2,
        struct RmResourceSetInfo *a3,
        char a4,
        void *a5,
        const unsigned __int16 *a6,
        unsigned __int8 *a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned __int64 a11,
        int *a12,
        const unsigned int *a13,
        unsigned int *a14)
{
  struct IUnknown **v16; // rbx
  ResourceManagerServerProxy *v17; // rcx
  _QWORD *v18; // rax
  int v19; // r15d
  int v21; // edx
  struct ExecutionModel::_ResourceSetInfo *v22; // r8
  struct IUnknown *v23; // rdx
  char v24; // r13
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 *v27; // rax
  unsigned __int8 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  struct IUnknown *v30; // [rsp+70h] [rbp-90h] BYREF
  struct IUnknown *v31; // [rsp+78h] [rbp-88h] BYREF
  ExecutionModel *v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v34; // [rsp+90h] [rbp-70h]
  _QWORD *v35; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int8 *v36; // [rsp+A0h] [rbp-60h]
  ResourceManagerServerProxy *v37; // [rsp+A8h] [rbp-58h]
  int *v38; // [rsp+B0h] [rbp-50h]
  const unsigned __int16 *v39; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h] BYREF
  void *v42; // [rsp+D0h] [rbp-30h]
  char v43[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v44; // [rsp+E0h] [rbp-20h] BYREF
  char v45[8]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v46[352]; // [rsp+F0h] [rbp-10h] BYREF

  v42 = a5;
  v39 = a6;
  v34 = a14;
  v16 = 0LL;
  v37 = this;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v28 = 0;
  v32 = a3;
  v40 = a2;
  v36 = a7;
  v38 = a12;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v46);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( a10 )
  {
    if ( a7 && !ResourceManagerServerProxy::ValidateUserSidInput(v17, a7, a8) )
      goto LABEL_9;
  }
  else if ( a7 || a9 )
  {
    goto LABEL_9;
  }
  if ( !v34 )
  {
LABEL_9:
    v19 = -2147024809;
    goto LABEL_10;
  }
  v18 = malloc(0x20uLL);
  if ( v18 )
  {
    *v18 = &ResourceSetServerProxy::`vftable';
    v18[1] = 0LL;
    v18[2] = 0LL;
    *((_DWORD *)v18 + 6) = 1;
  }
  ATL::CComPtrBase<ExecutionModel::ResourceSet>::Attach(&v29, (__int64)v18);
  v16 = (struct IUnknown **)v29;
  if ( !v29 )
  {
    v19 = -2147024882;
    goto LABEL_10;
  }
  if ( (v40 & -(__int64)(a4 != 0)) != 0 )
    *(_QWORD *)(v29 + 16) = v40 & -(__int64)(a4 != 0);
  if ( a13 )
  {
    v35 = 0LL;
    utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
      (_DWORD)this + 72,
      v21,
      (_DWORD)a13,
      (unsigned int)&v35,
      (__int64)v45,
      (__int64)v43);
    if ( v35 == (_QWORD *)((char *)this + 72) )
    {
      v19 = -2147023728;
LABEL_10:
      if ( v30 )
        ((void (__fastcall *)(struct IUnknown *))v30->lpVtbl[5].QueryInterface)(v30);
      goto LABEL_12;
    }
    v23 = *(struct IUnknown **)(v35[4] + 8LL);
    if ( v31 != v23 )
      ATL::AtlComPtrAssign(&v31, v23);
  }
  ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(v32, (const struct RmResourceSetInfo *)v46, v22);
  v32 = (ExecutionModel *)((unsigned __int64)&v28 & -(__int64)(a12 != 0LL));
  if ( a4 )
  {
    v24 = 1;
    v25 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v41, &v29);
    v26 = v33;
  }
  else
  {
    v26 = 0LL;
    v25 = &v33;
    v33 = 0LL;
    v24 = 2;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, void *, const unsigned __int16 *, unsigned __int8 *, unsigned int, unsigned int, unsigned __int64, ExecutionModel *, struct IUnknown *, struct IUnknown **))(**((_QWORD **)this + 7) + 40LL))(
          *((_QWORD *)this + 7),
          v46,
          *v25,
          v42,
          v39,
          v36,
          a9,
          a10,
          a11,
          v32,
          v31,
          &v30);
  if ( (v24 & 2) != 0 )
  {
    v24 &= ~2u;
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( (v24 & 1) != 0 && v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v19 < 0 )
    goto LABEL_10;
  if ( v16[1] != v30 )
    ATL::AtlComPtrAssign(v16 + 1, v30);
  v27 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v44, &v29);
  v19 = ResourceManagerServerProxy::AddResourceSetProxy((int)v37, v27, v34);
  if ( v19 < 0 )
    goto LABEL_10;
  if ( v38 )
    *v38 = v28;
LABEL_12:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>((ExecutionModel::ResourceSetImpl **)&v31);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>((ExecutionModel::ResourceSetImpl **)&v30);
  if ( v16 )
    ((void (__fastcall *)(struct IUnknown **))(*v16)[2].lpVtbl)(v16);
  return (unsigned int)v19;
}
