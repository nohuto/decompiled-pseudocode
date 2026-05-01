/*
 * XREFs of ?QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_RM_REVOKE_REASON@@PEAX@Z @ 0x180003A68
 * Callers:
 *     ?OnAcquired@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z @ 0x180003CA0 (-OnAcquired@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ?OnCommitWarning@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z @ 0x18004EC70 (-OnCommitWarning@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ?OnOutOfMemory@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z @ 0x18004ECA0 (-OnOutOfMemory@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ?OnRelease@ResourceSetImpl@ExecutionModel@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z @ 0x18004ECD0 (-OnRelease@ResourceSetImpl@ExecutionModel@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z.c)
 * Callees:
 *     ??$_delete@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@tlx@@YAXPEAUResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@Z @ 0x18000435C (--$_delete@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@tlx@@YAXPEAUResSetCallbackWo.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2@PEAX@Z @ 0x180009C00 (-QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall ExecutionModel::ResourceSetImpl::QueueCallback(struct IUnknown *a1, int a2, int a3, __int64 a4)
{
  _DWORD *result; // rax
  void *v9; // rbx
  struct ExecutionModel::IRMExecServicesProviderCallback *v10; // rsi
  ULONG (__stdcall *AddRef)(IUnknown *); // rcx
  __int64 (__fastcall *v12)(ExecutionModel::RMExecServicesProvider *__hidden, struct ExecutionModel::IRMExecServicesProviderCallback *, void *); // rbp

  result = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = result;
  if ( result )
  {
    *((_QWORD *)result + 2) = 0LL;
    result[1] = -1;
    *result = 4;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    *(_DWORD *)v9 = a2;
    *((_DWORD *)v9 + 1) = a3;
    *((_QWORD *)v9 + 1) = a4;
    if ( *((struct IUnknown **)v9 + 2) != a1 )
      ATL::AtlComPtrAssign((struct IUnknown **)v9 + 2, a1);
    v10 = (struct ExecutionModel::IRMExecServicesProviderCallback *)&a1[2];
    if ( !a1 )
      v10 = 0LL;
    AddRef = a1[24].lpVtbl[3].AddRef;
    v12 = *(__int64 (__fastcall **)(ExecutionModel::RMExecServicesProvider *__hidden, struct ExecutionModel::IRMExecServicesProviderCallback *, void *))(**((_QWORD **)AddRef + 16) + 40LL);
    if ( v12 == ExecutionModel::RMExecServicesProvider::QueueWorkItem )
      result = (_DWORD *)ExecutionModel::RMExecServicesProvider::QueueWorkItem(
                           *((ExecutionModel::RMExecServicesProvider **)AddRef + 16),
                           v10,
                           v9);
    else
      result = (_DWORD *)v12(*((ExecutionModel::RMExecServicesProvider **)AddRef + 16), v10, v9);
    if ( (int)result >= 0 )
      v9 = 0LL;
    if ( v9 )
      return (_DWORD *)tlx::_delete<ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem>(v9);
  }
  return result;
}
