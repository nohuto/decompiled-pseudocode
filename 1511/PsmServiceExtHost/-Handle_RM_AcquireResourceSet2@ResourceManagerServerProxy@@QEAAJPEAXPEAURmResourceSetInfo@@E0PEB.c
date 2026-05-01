/*
 * XREFs of ?Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KPEAHPEBKPEAK@Z @ 0x180038C58
 * Callers:
 *     RmtSrv_RM_AcquireResourceSet2 @ 0x180038240 (RmtSrv_RM_AcquireResourceSet2.c)
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
 *     ?ValidateUserSidInput@ResourceManagerServerProxy@@IEAAEPEAEK@Z @ 0x18003A730 (-ValidateUserSidInput@ResourceManagerServerProxy@@IEAAEPEAEK@Z.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180047D64 (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
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
        unsigned __int16 *a13,
        unsigned int *a14)
{
  struct IUnknown **v16; // rbx
  ResourceManagerServerProxy *v17; // rcx
  _QWORD *v18; // rax
  int v19; // r15d
  unsigned int v20; // edx
  unsigned int v21; // edx
  __int64 v23; // rdx
  struct ExecutionModel::_ResourceSetInfo *v24; // r8
  struct IUnknown *v25; // rdx
  char v26; // r13
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 *v29; // rax
  unsigned __int8 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  struct IUnknown *v32; // [rsp+70h] [rbp-90h] BYREF
  struct IUnknown *v33; // [rsp+78h] [rbp-88h] BYREF
  ExecutionModel *v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v36; // [rsp+90h] [rbp-70h]
  __int64 *v37; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int8 *v38; // [rsp+A0h] [rbp-60h]
  ResourceManagerServerProxy *v39; // [rsp+A8h] [rbp-58h]
  int *v40; // [rsp+B0h] [rbp-50h]
  const unsigned __int16 *v41; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h] BYREF
  void *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v47; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v48[368]; // [rsp+F0h] [rbp-10h] BYREF

  v44 = a5;
  v41 = a6;
  v36 = a14;
  v16 = 0LL;
  v39 = this;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v30 = 0;
  v34 = a3;
  v42 = a2;
  v38 = a7;
  v40 = a12;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v48);
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
  if ( !v36 )
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
  ATL::CComPtrBase<ResourceSetServerProxy>::Attach(&v31, (__int64)v18);
  v16 = (struct IUnknown **)v31;
  if ( !v31 )
  {
    v19 = -2147024882;
    goto LABEL_10;
  }
  if ( (v42 & -(__int64)(a4 != 0)) != 0 )
    *(_QWORD *)(v31 + 16) = v42 & -(__int64)(a4 != 0);
  if ( a13 )
  {
    v37 = 0LL;
    utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
      (__int64)this + 72,
      v23,
      a13,
      &v37,
      &v47,
      &v45);
    if ( v37 == (__int64 *)((char *)this + 72) )
    {
      v19 = -2147023728;
LABEL_10:
      if ( v32 )
        ((void (__fastcall *)(struct IUnknown *))v32->lpVtbl[5].QueryInterface)(v32);
      goto LABEL_12;
    }
    v25 = *(struct IUnknown **)(v37[4] + 8);
    if ( v33 != v25 )
      ATL::AtlComPtrAssign(&v33, v25);
  }
  ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(v34, (const struct RmResourceSetInfo *)v48, v24);
  v34 = (ExecutionModel *)((unsigned __int64)&v30 & -(__int64)(a12 != 0LL));
  if ( a4 )
  {
    v26 = 1;
    v27 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v43, &v31);
    v28 = v35;
  }
  else
  {
    v28 = 0LL;
    v27 = &v35;
    v35 = 0LL;
    v26 = 2;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, void *, const unsigned __int16 *, unsigned __int8 *, unsigned int, unsigned int, unsigned __int64, ExecutionModel *, struct IUnknown *, struct IUnknown **))(**((_QWORD **)this + 7) + 40LL))(
          *((_QWORD *)this + 7),
          v48,
          *v27,
          v44,
          v41,
          v38,
          a9,
          a10,
          a11,
          v34,
          v33,
          &v32);
  if ( (v26 & 2) != 0 )
  {
    v26 &= ~2u;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  if ( (v26 & 1) != 0 && v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  if ( v19 < 0 )
    goto LABEL_10;
  if ( v16[1] != v32 )
    ATL::AtlComPtrAssign(v16 + 1, v32);
  v29 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v46, &v31);
  v19 = ResourceManagerServerProxy::AddResourceSetProxy((int)v39, v29, v36);
  if ( v19 < 0 )
    goto LABEL_10;
  if ( v40 )
    *v40 = v30;
LABEL_12:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
    (ExecutionModel::ResourceSetImpl **)&v33,
    v20);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
    (ExecutionModel::ResourceSetImpl **)&v32,
    v21);
  if ( v16 )
    ((void (__fastcall *)(struct IUnknown **))(*v16)[2].lpVtbl)(v16);
  return (unsigned int)v19;
}
