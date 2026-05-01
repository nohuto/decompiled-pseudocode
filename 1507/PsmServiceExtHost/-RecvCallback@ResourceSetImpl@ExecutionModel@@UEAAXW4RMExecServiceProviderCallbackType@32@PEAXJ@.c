/*
 * XREFs of ?RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800016D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAcquired@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z @ 0x1800018D4 (-SetAcquired@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??1?$lock_guard@Vrecursive_mutex@utl@@@utl@@QEAA@XZ @ 0x180005534 (--1-$lock_guard@Vrecursive_mutex@utl@@@utl@@QEAA@XZ.c)
 *     ??1?$auto_ptr@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@$1??$_delete@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@tlx@@YAXPEAU123@@Z@tlx@@QEAA@XZ @ 0x180005544 (--1-$auto_ptr@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@$1--$_delete@UResSetCallba.c)
 *     ??1?$CComPtr@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180016FF0 (--1-$CComPtr@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??7?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEBA_NXZ @ 0x180017084 (--7-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEBA_NXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??0?$lock_guard@Vrecursive_mutex@utl@@@utl@@QEAA@AEAVrecursive_mutex@1@@Z @ 0x18002E460 (--0-$lock_guard@Vrecursive_mutex@utl@@@utl@@QEAA@AEAVrecursive_mutex@1@@Z.c)
 *     ??1?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@QEAA@XZ @ 0x18002F210 (--1-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::RecvCallback(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rdx
  struct IUnknown *v5; // rbx
  struct IUnknown *v7; // rdx
  struct IUnknown *v8; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  struct IUnknown *v11; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v14; // [rsp+80h] [rbp+40h] BYREF
  struct IUnknown *v15; // [rsp+90h] [rbp+50h] BYREF

  v3 = a1[21];
  v5 = 0LL;
  v13 = a3;
  v14 = 0LL;
  utl::lock_guard<utl::recursive_mutex>::lock_guard<utl::recursive_mutex>(v12, v3 + 40);
  v7 = (struct IUnknown *)a1[18];
  if ( v7 )
  {
    ATL::AtlComPtrAssign(&v14, v7);
    v5 = v14;
  }
  if ( *a3 )
  {
    if ( *a3 == 1 )
      ExecutionModel::ResourceSetImpl::SetAcquired((ExecutionModel::ResourceSetImpl *)(a1 - 2), 0);
  }
  else
  {
    *((_DWORD *)a1 + 3) &= ~1u;
    if ( (unsigned __int8)ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::operator!(&v14) )
    {
      v8 = 0LL;
      v15 = 0LL;
      if ( a1 == (_QWORD *)16 )
      {
        CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>::~CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>(&v15);
      }
      else
      {
        v9 = (struct _RTL_CRITICAL_SECTION *)a1[21];
        EnterCriticalSection(v9 + 1);
        ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
          &v11,
          a1 - 2);
        if ( v11 )
        {
          ATL::AtlComPtrAssign(&v15, v11);
          v8 = v15;
        }
        ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v11);
        if ( (*(int (__fastcall **)(_QWORD *))(*(a1 - 2) + 120LL))(a1 - 2) >= 0 && v8[20].lpVtbl )
          ATL::AtlComPtrAssign((struct IUnknown **)&v8[20], 0LL);
        LeaveCriticalSection(v9 + 1);
        ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v15);
      }
    }
  }
  utl::lock_guard<utl::recursive_mutex>::~lock_guard<utl::recursive_mutex>(v12);
  if ( !(unsigned __int8)ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::operator!(&v14) )
  {
    if ( *a3 )
    {
      switch ( *a3 )
      {
        case 1:
          ((void (__fastcall *)(struct IUnknown *, _QWORD))v5->lpVtbl[1].AddRef)(v5, a1[19]);
          break;
        case 2:
          ((void (__fastcall *)(struct IUnknown *, _QWORD))v5->lpVtbl[1].Release)(v5, a1[19]);
          break;
        case 3:
          ((void (__fastcall *)(struct IUnknown *, _QWORD))v5->lpVtbl[2].QueryInterface)(v5, a1[19]);
          break;
      }
    }
    else
    {
      ((void (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))v5->lpVtbl[1].QueryInterface)(
        v5,
        a1[19],
        (unsigned int)a3[1]);
    }
  }
  tlx::auto_ptr<ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem,&void tlx::_delete<ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem>(ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem *)>::~auto_ptr<ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem,&void tlx::_delete<ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem>(ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem *)>(&v13);
  return ATL::CComPtr<ExecutionModel::IResourceSetCallback>::~CComPtr<ExecutionModel::IResourceSetCallback>(&v14);
}
