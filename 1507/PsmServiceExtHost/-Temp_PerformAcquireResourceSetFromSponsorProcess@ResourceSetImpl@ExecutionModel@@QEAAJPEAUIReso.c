/*
 * XREFs of ?Temp_PerformAcquireResourceSetFromSponsorProcess@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@PEA_NKPEAUIResourceSet@2@@Z @ 0x180001448
 * Callers:
 *     ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x1800143F0 (-HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::Temp_PerformAcquireResourceSetFromSponsorProcess(
        ExecutionModel::ResourceSetImpl *this,
        struct IResourceManager *a2,
        struct ExecutionModel::_ResourceSetInfo *a3,
        bool *a4,
        unsigned int a5,
        struct ExecutionModel::IResourceSet *a6)
{
  char *v6; // rbp
  __int64 v8; // rcx
  bool v9; // cc
  int v10; // r15d
  __int64 v11; // r14
  int v12; // ebp
  __int64 v14; // [rsp+88h] [rbp-80h]
  __int64 v15; // [rsp+90h] [rbp-78h] BYREF
  bool *v16; // [rsp+98h] [rbp-70h]
  _DWORD v17[6]; // [rsp+A0h] [rbp-68h]

  v6 = (char *)this + 8;
  v16 = a4;
  v15 = 0LL;
  if ( !this )
    v6 = 0LL;
  v8 = *((_QWORD *)this + 19);
  v17[0] = 0;
  v17[2] = 4;
  v17[3] = 8;
  v9 = *(_DWORD *)(v8 + 24) < 5;
  v14 = *(_QWORD *)(v8 + 40);
  v17[1] = 2;
  v17[4] = 2;
  if ( v9 )
    v10 = v17[*(int *)(v8 + 24)];
  else
    v10 = 0;
  v11 = 0LL;
  if ( *(_DWORD *)(v8 + 24) )
    v11 = *(_QWORD *)(v8 + 32);
  v12 = ((__int64 (__fastcall *)(struct IResourceManager *, struct ExecutionModel::_ResourceSetInfo *, char *, _QWORD, __int64, _QWORD, _DWORD, int, __int64, unsigned int, bool *, struct ExecutionModel::IResourceSet *, char *))a2->lpVtbl[3].Register)(
          a2,
          a3,
          v6,
          0LL,
          v11,
          *(_QWORD *)(v8 + 184),
          *(_DWORD *)(v8 + 176),
          v10,
          v14,
          a5,
          v16,
          a6,
          (char *)this + 176);
  if ( v12 < 0 )
  {
    if ( *((_QWORD *)this + 22) )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 22, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 8LL))(this);
  }
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v15);
  return (unsigned int)v12;
}
