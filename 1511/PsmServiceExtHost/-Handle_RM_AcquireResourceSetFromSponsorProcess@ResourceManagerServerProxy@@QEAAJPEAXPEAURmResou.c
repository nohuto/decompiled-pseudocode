/*
 * XREFs of ?Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KKPEAHPEBKPEAK@Z @ 0x180039344
 * Callers:
 *     RmtSrv_RM_AcquireResourceSetFromSponsorProcess @ 0x1800382E0 (RmtSrv_RM_AcquireResourceSetFromSponsorProcess.c)
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
        unsigned __int16 *a14,
        unsigned int *a15)
{
  struct IUnknown **v17; // rbx
  ResourceManagerServerProxy *v18; // rcx
  _QWORD *v19; // rax
  int v20; // r15d
  unsigned int v21; // edx
  unsigned int v22; // edx
  __int64 v24; // rdx
  struct ExecutionModel::_ResourceSetInfo *v25; // r8
  struct IUnknown *v26; // rdx
  char v27; // r13
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 *v30; // rax
  unsigned __int8 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  struct IUnknown *v33; // [rsp+80h] [rbp-80h] BYREF
  struct IUnknown *v34; // [rsp+88h] [rbp-78h] BYREF
  ExecutionModel *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v37; // [rsp+A0h] [rbp-60h]
  __int64 *v38; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int8 *v39; // [rsp+B0h] [rbp-50h]
  ResourceManagerServerProxy *v40; // [rsp+B8h] [rbp-48h]
  int *v41; // [rsp+C0h] [rbp-40h]
  const unsigned __int16 *v42; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h] BYREF
  void *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v48; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v49[368]; // [rsp+100h] [rbp+0h] BYREF

  v45 = a5;
  v42 = a6;
  v37 = a15;
  v17 = 0LL;
  v40 = this;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v31 = 0;
  v35 = a3;
  v43 = a2;
  v39 = a7;
  v41 = a13;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v49);
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
  if ( !v37 )
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
  ATL::CComPtrBase<ResourceSetServerProxy>::Attach(&v32, (__int64)v19);
  v17 = (struct IUnknown **)v32;
  if ( !v32 )
  {
    v20 = -2147024882;
    goto LABEL_10;
  }
  if ( (v43 & -(__int64)(a4 != 0)) != 0 )
    *(_QWORD *)(v32 + 16) = v43 & -(__int64)(a4 != 0);
  if ( a14 )
  {
    v38 = 0LL;
    utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
      (__int64)this + 72,
      v24,
      a14,
      &v38,
      &v48,
      &v46);
    if ( v38 == (__int64 *)((char *)this + 72) )
    {
      v20 = -2147023728;
LABEL_10:
      if ( v33 )
        ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl[5].QueryInterface)(v33);
      goto LABEL_12;
    }
    v26 = *(struct IUnknown **)(v38[4] + 8);
    if ( v34 != v26 )
      ATL::AtlComPtrAssign(&v34, v26);
  }
  ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(v35, (const struct RmResourceSetInfo *)v49, v25);
  v35 = (ExecutionModel *)((unsigned __int64)&v31 & -(__int64)(a13 != 0LL));
  if ( a4 )
  {
    v27 = 1;
    v28 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v44, &v32);
    v29 = v36;
  }
  else
  {
    v29 = 0LL;
    v28 = &v36;
    v36 = 0LL;
    v27 = 2;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, void *, const unsigned __int16 *, unsigned __int8 *, unsigned int, unsigned int, unsigned __int64, unsigned int, ExecutionModel *, struct IUnknown *, struct IUnknown **))(**((_QWORD **)this + 7) + 288LL))(
          *((_QWORD *)this + 7),
          v49,
          *v28,
          v45,
          v42,
          v39,
          a9,
          a10,
          a11,
          a12,
          v35,
          v34,
          &v33);
  if ( (v27 & 2) != 0 )
  {
    v27 &= ~2u;
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  if ( (v27 & 1) != 0 && v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  if ( v20 < 0 )
    goto LABEL_10;
  if ( v17[1] != v33 )
    ATL::AtlComPtrAssign(v17 + 1, v33);
  v30 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v47, &v32);
  v20 = ResourceManagerServerProxy::AddResourceSetProxy((int)v40, v30, v37);
  if ( v20 < 0 )
    goto LABEL_10;
  if ( v41 )
    *v41 = v31;
LABEL_12:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
    (ExecutionModel::ResourceSetImpl **)&v34,
    v21);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
    (ExecutionModel::ResourceSetImpl **)&v33,
    v22);
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown **))(*v17)[2].lpVtbl)(v17);
  return (unsigned int)v20;
}
