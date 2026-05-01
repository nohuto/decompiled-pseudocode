/*
 * XREFs of ?TEMP_PerformAcquireResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@KPEA_NPEAUIResourceSet@2@@Z @ 0x180014280
 * Callers:
 *     ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180012D30 (-HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x180001820 (-AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x180012380 (-AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSet.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::TEMP_PerformAcquireResourceSet(
        ExecutionModel::ResourceSetImpl *this,
        struct IResourceManager *a2,
        struct ExecutionModel::_ResourceSetInfo *a3,
        unsigned int a4,
        bool *a5,
        struct ExecutionModel::IResourceSet *a6)
{
  unsigned __int16 *v6; // rbp
  struct ExecutionModel::_ResourceSetInfo *v7; // r10
  bool *v11; // r11
  struct ExecutionModel::IResourceSet *v12; // rbx
  struct ExecutionModel::IResourceSet *v13; // rsi
  struct ExecutionModel::IResourceSetCallback *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned int v18; // r15d
  __int64 v19; // rax
  void *v20; // rdx
  unsigned int v21; // r13d
  HRESULT (__stdcall *RequestResource)(IResourceManager *, LONG, IUnknown *, IResourceConsumer *); // rsi
  int v23; // eax
  unsigned int v24; // ebp
  struct ExecutionModel::IResourceSetCallback *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  void *Src; // r9
  unsigned int v31; // r8d
  HRESULT (__stdcall *Register)(IResourceManager *, LPCWSTR, LONG, LONG *); // r13
  unsigned int v33; // [rsp+70h] [rbp-A8h]
  struct ExecutionModel::IResourceSet *v34; // [rsp+78h] [rbp-A0h] BYREF
  struct ExecutionModel::_ResourceSetInfo *v35; // [rsp+80h] [rbp-98h]
  bool *v36; // [rsp+88h] [rbp-90h]
  unsigned __int64 v37; // [rsp+90h] [rbp-88h]
  unsigned int v38; // [rsp+98h] [rbp-80h]
  void *v39; // [rsp+A0h] [rbp-78h]
  unsigned int v40; // [rsp+A8h] [rbp-70h]
  int v41; // [rsp+ACh] [rbp-6Ch]
  int v42; // [rsp+B0h] [rbp-68h]
  int v43; // [rsp+B4h] [rbp-64h]
  int v44; // [rsp+B8h] [rbp-60h]

  v6 = 0LL;
  v7 = a3;
  v11 = a5;
  v12 = 0LL;
  v36 = a5;
  v35 = a3;
  v34 = a6;
  if ( a6 )
  {
    (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)a6 + 8LL))(a6);
    v13 = (struct ExecutionModel::IResourceSet *)*((_QWORD *)a6 + 23);
    ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v34);
    if ( v13 )
    {
      (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)v13 + 8LL))(v13);
      v12 = v13;
    }
    v11 = v36;
    v7 = v35;
  }
  if ( a4 )
  {
    if ( this )
      v26 = (ExecutionModel::ResourceSetImpl *)((char *)this + 8);
    else
      v26 = 0LL;
    v27 = *((_QWORD *)this + 20);
    v34 = v26;
    v40 = 0;
    v41 = 2;
    v37 = *(_QWORD *)(v27 + 48);
    v28 = *(int *)(v27 + 32);
    v42 = 4;
    v43 = 8;
    v44 = 2;
    if ( (int)v28 >= 5 )
      v33 = 0;
    else
      v33 = *(&v40 + v28);
    v29 = *(_QWORD *)(v27 + 24);
    Src = *(void **)(v29 + 56);
    v31 = *(_DWORD *)(v29 + 48);
    v39 = Src;
    v38 = v31;
    if ( *(_DWORD *)(v27 + 32) )
      v6 = *(unsigned __int16 **)(v27 + 40);
    Register = a2->lpVtbl[3].Register;
    if ( (char *)Register == (char *)ExecutionModel::ResourceManager::AcquireResourceSetFromSponsorProcess )
      v23 = ExecutionModel::ResourceManager::AcquireResourceSetFromSponsorProcess(
              (ExecutionModel::ResourceManager *)a2,
              v7,
              v26,
              0LL,
              v6,
              Src,
              v31,
              v33,
              v37,
              a4,
              v11,
              a6,
              (struct ExecutionModel::IResourceSet **)this + 23);
    else
      v23 = ((__int64 (__fastcall *)(struct IResourceManager *, struct ExecutionModel::_ResourceSetInfo *, struct ExecutionModel::IResourceSet *, _QWORD, unsigned __int16 *, void *, unsigned int, unsigned int, unsigned __int64, unsigned int, bool *, struct ExecutionModel::IResourceSet *, char *))Register)(
              a2,
              v35,
              v34,
              0LL,
              v6,
              v39,
              v38,
              v33,
              v37,
              a4,
              v36,
              a6,
              (char *)this + 184);
  }
  else
  {
    if ( this )
      v14 = (ExecutionModel::ResourceSetImpl *)((char *)this + 8);
    else
      v14 = 0LL;
    v15 = *((_QWORD *)this + 20);
    v40 = 0;
    v41 = 2;
    v42 = 4;
    v16 = *(int *)(v15 + 32);
    v17 = *(_QWORD *)(v15 + 48);
    v34 = (struct ExecutionModel::IResourceSet *)v17;
    v43 = 8;
    v44 = 2;
    if ( (int)v16 >= 5 )
      v18 = 0;
    else
      v18 = *(&v40 + v16);
    v19 = *(_QWORD *)(v15 + 24);
    v20 = *(void **)(v19 + 56);
    v21 = *(_DWORD *)(v19 + 48);
    v37 = (unsigned __int64)v20;
    if ( *(_DWORD *)(v15 + 32) )
      v6 = *(unsigned __int16 **)(v15 + 40);
    RequestResource = a2->lpVtbl->RequestResource;
    if ( (char *)RequestResource == (char *)ExecutionModel::ResourceManager::AcquireResourceSet )
      v23 = ExecutionModel::ResourceManager::AcquireResourceSet(
              (ExecutionModel::ResourceManager *)a2,
              v7,
              v14,
              0LL,
              v6,
              v20,
              v21,
              v18,
              v17,
              v11,
              v12,
              (struct ExecutionModel::IResourceSet **)this + 23);
    else
      v23 = ((__int64 (__fastcall *)(struct IResourceManager *, struct ExecutionModel::_ResourceSetInfo *, struct ExecutionModel::IResourceSetCallback *, _QWORD, unsigned __int16 *, unsigned __int64, unsigned int, unsigned int, struct ExecutionModel::IResourceSet *, bool *, struct ExecutionModel::IResourceSet *, char *))RequestResource)(
              a2,
              v35,
              v14,
              0LL,
              v6,
              v37,
              v21,
              v18,
              v34,
              v36,
              v12,
              (char *)this + 184);
  }
  v24 = v23;
  if ( v23 < 0 )
  {
    if ( *((_QWORD *)this + 23) )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 23, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 8LL))(this);
  }
  if ( v12 )
    (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)v12 + 16LL))(v12);
  return v24;
}
