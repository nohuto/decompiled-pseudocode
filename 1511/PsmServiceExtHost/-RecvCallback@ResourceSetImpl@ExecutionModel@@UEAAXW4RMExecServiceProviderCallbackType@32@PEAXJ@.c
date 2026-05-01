/*
 * XREFs of ?RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x180003BB0
 * Callers:
 *     ?WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU.c)
 * Callees:
 *     ?CompleteTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@IEAAJPEAUPendingMemoryLimitInfo@12@@Z @ 0x180003B54 (-CompleteTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@IEAAJPEAUPendingMemoryLimi.c)
 *     ?SetAcquired@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z @ 0x180003CC8 (-SetAcquired@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z.c)
 *     ??$_delete@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@tlx@@YAXPEAUResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@Z @ 0x18000435C (--$_delete@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@tlx@@YAXPEAUResSetCallbackWo.c)
 *     ?OnAcquired@ResourceSetServerProxy@ExecutionModel@@UEAAJPEAX@Z @ 0x180004390 (-OnAcquired@ResourceSetServerProxy@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ??1?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180006290 (--1-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::RecvCallback(__int64 a1, __int64 a2, unsigned int *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  ExecutionModel::ResourceSetServerProxy *v5; // rbx
  unsigned int *v6; // rsi
  struct IUnknown *v7; // rdx
  ExecutionModel::ResourceSetImpl *v8; // rcx
  __int64 (__fastcall *v9)(ExecutionModel::ResourceSetServerProxy *__hidden, void *); // rdi
  struct IUnknown *v11; // rdi
  struct _RTL_CRITICAL_SECTION *v12; // rsi
  void *v13; // rdx
  struct IUnknown *v14; // [rsp+20h] [rbp-10h] BYREF
  struct IUnknown *v15; // [rsp+28h] [rbp-8h] BYREF
  struct IUnknown *v16; // [rsp+70h] [rbp+40h] BYREF
  unsigned int *v17; // [rsp+80h] [rbp+50h]

  v17 = a3;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 176);
  v5 = 0LL;
  v6 = a3;
  v14 = 0LL;
  EnterCriticalSection(v3 + 1);
  v7 = *(struct IUnknown **)(a1 + 152);
  if ( v7 )
  {
    ATL::AtlComPtrAssign(&v14, v7);
    v5 = (ExecutionModel::ResourceSetServerProxy *)v14;
  }
  if ( *v6 )
  {
    if ( *v6 == 1 )
    {
      ExecutionModel::ResourceSetImpl::SetAcquired((ExecutionModel::ResourceSetImpl *)(a1 - 16), 0);
      ExecutionModel::ResourceSetImpl::CompleteTransitionBackingResourceSet(
        v8,
        (struct ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *)v6);
    }
  }
  else
  {
    *(_DWORD *)(a1 - 16 + 28) &= ~1u;
    if ( !v5 )
    {
      v11 = 0LL;
      v16 = 0LL;
      if ( a1 == 16 )
      {
        ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v16);
      }
      else
      {
        v12 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 176);
        EnterCriticalSection(v12 + 1);
        ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
          &v15,
          a1 - 16);
        if ( v15 )
        {
          ATL::AtlComPtrAssign(&v16, v15);
          v11 = v16;
        }
        ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v15);
        if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 120LL))(a1 - 16) >= 0 && v11[21].lpVtbl )
          ATL::AtlComPtrAssign((struct IUnknown **)&v11[21], 0LL);
        LeaveCriticalSection(v12 + 1);
        ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v16);
        v6 = v17;
      }
    }
  }
  LeaveCriticalSection(v3 + 1);
  if ( v5 )
  {
    if ( !*v6 )
    {
      (*(void (__fastcall **)(ExecutionModel::ResourceSetServerProxy *, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(
        v5,
        *(_QWORD *)(a1 + 160),
        v6[1]);
      goto LABEL_11;
    }
    if ( *v6 == 1 )
    {
      v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetServerProxy *__hidden, void *))(*(_QWORD *)v5 + 32LL);
      if ( v9 == ExecutionModel::ResourceSetServerProxy::OnAcquired )
      {
        ExecutionModel::ResourceSetServerProxy::OnAcquired(v5, *(void **)(a1 + 160));
        goto LABEL_11;
      }
      v13 = *(void **)(a1 + 160);
    }
    else
    {
      if ( *v6 == 2 )
      {
        v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetServerProxy *__hidden, void *))(*(_QWORD *)v5 + 40LL);
      }
      else
      {
        if ( *v6 != 3 )
          goto LABEL_11;
        v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetServerProxy *__hidden, void *))(*(_QWORD *)v5 + 48LL);
      }
      v13 = *(void **)(a1 + 160);
    }
    v9(v5, v13);
  }
LABEL_11:
  tlx::_delete<ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem>(v6);
  return ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::~CComPtrBase<ExecutionModel::IResourceSetCallback>(&v14);
}
