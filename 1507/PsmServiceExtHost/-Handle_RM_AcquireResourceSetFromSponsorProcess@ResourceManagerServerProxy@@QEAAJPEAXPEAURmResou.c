/*
 * XREFs of ?Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KKPEAHPEBKPEAK@Z @ 0x180032124
 * Callers:
 *     RmtSrv_RM_AcquireResourceSetFromSponsorProcess @ 0x180031130 (RmtSrv_RM_AcquireResourceSetFromSponsorProcess.c)
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

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_AcquireResourceSetFromSponsorProcess(
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
        unsigned int a12,
        int *a13,
        const unsigned int *a14,
        unsigned int *a15)
{
  struct IUnknown **v17; // rbx
  ResourceManagerServerProxy *v18; // rcx
  _QWORD *v19; // rax
  int v20; // r15d
  int v22; // edx
  struct ExecutionModel::_ResourceSetInfo *v23; // r8
  struct IUnknown *v24; // rdx
  char v25; // r13
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 *v28; // rax
  unsigned __int8 v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  struct IUnknown *v31; // [rsp+80h] [rbp-80h] BYREF
  struct IUnknown *v32; // [rsp+88h] [rbp-78h] BYREF
  ExecutionModel *v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v35; // [rsp+A0h] [rbp-60h]
  _QWORD *v36; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int8 *v37; // [rsp+B0h] [rbp-50h]
  ResourceManagerServerProxy *v38; // [rsp+B8h] [rbp-48h]
  int *v39; // [rsp+C0h] [rbp-40h]
  const unsigned __int16 *v40; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h] BYREF
  void *v43; // [rsp+E0h] [rbp-20h]
  char v44[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v45; // [rsp+F0h] [rbp-10h] BYREF
  char v46[8]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v47[352]; // [rsp+100h] [rbp+0h] BYREF

  v43 = a5;
  v40 = a6;
  v35 = a15;
  v17 = 0LL;
  v38 = this;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v29 = 0;
  v33 = a3;
  v41 = a2;
  v37 = a7;
  v39 = a13;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v47);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( a10 )
  {
    if ( a7 && !ResourceManagerServerProxy::ValidateUserSidInput(v18, a7, a8) )
      goto LABEL_9;
  }
  else if ( a7 || a9 )
  {
    goto LABEL_9;
  }
  if ( !v35 )
  {
LABEL_9:
    v20 = -2147024809;
    goto LABEL_10;
  }
  v19 = malloc(0x20uLL);
  if ( v19 )
  {
    *v19 = &ResourceSetServerProxy::`vftable';
    v19[1] = 0LL;
    v19[2] = 0LL;
    *((_DWORD *)v19 + 6) = 1;
  }
  ATL::CComPtrBase<ExecutionModel::ResourceSet>::Attach(&v30, (__int64)v19);
  v17 = (struct IUnknown **)v30;
  if ( !v30 )
  {
    v20 = -2147024882;
    goto LABEL_10;
  }
  if ( (v41 & -(__int64)(a4 != 0)) != 0 )
    *(_QWORD *)(v30 + 16) = v41 & -(__int64)(a4 != 0);
  if ( a14 )
  {
    v36 = 0LL;
    utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
      (_DWORD)this + 72,
      v22,
      (_DWORD)a14,
      (unsigned int)&v36,
      (__int64)v46,
      (__int64)v44);
    if ( v36 == (_QWORD *)((char *)this + 72) )
    {
      v20 = -2147023728;
LABEL_10:
      if ( v31 )
        ((void (__fastcall *)(struct IUnknown *))v31->lpVtbl[5].QueryInterface)(v31);
      goto LABEL_12;
    }
    v24 = *(struct IUnknown **)(v36[4] + 8LL);
    if ( v32 != v24 )
      ATL::AtlComPtrAssign(&v32, v24);
  }
  ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(v33, (const struct RmResourceSetInfo *)v47, v23);
  v33 = (ExecutionModel *)((unsigned __int64)&v29 & -(__int64)(a13 != 0LL));
  if ( a4 )
  {
    v25 = 1;
    v26 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v42, &v30);
    v27 = v34;
  }
  else
  {
    v27 = 0LL;
    v26 = &v34;
    v34 = 0LL;
    v25 = 2;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, void *, const unsigned __int16 *, unsigned __int8 *, unsigned int, unsigned int, unsigned __int64, unsigned int, ExecutionModel *, struct IUnknown *, struct IUnknown **))(**((_QWORD **)this + 7) + 288LL))(
          *((_QWORD *)this + 7),
          v47,
          *v26,
          v43,
          v40,
          v37,
          a9,
          a10,
          a11,
          a12,
          v33,
          v32,
          &v31);
  if ( (v25 & 2) != 0 )
  {
    v25 &= ~2u;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  if ( (v25 & 1) != 0 && v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  if ( v20 < 0 )
    goto LABEL_10;
  if ( v17[1] != v31 )
    ATL::AtlComPtrAssign(v17 + 1, v31);
  v28 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v45, &v30);
  v20 = ResourceManagerServerProxy::AddResourceSetProxy((int)v38, v28, v35);
  if ( v20 < 0 )
    goto LABEL_10;
  if ( v39 )
    *v39 = v29;
LABEL_12:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>((ExecutionModel::ResourceSetImpl **)&v32);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>((ExecutionModel::ResourceSetImpl **)&v31);
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown **))(*v17)[2].lpVtbl)(v17);
  return (unsigned int)v20;
}
