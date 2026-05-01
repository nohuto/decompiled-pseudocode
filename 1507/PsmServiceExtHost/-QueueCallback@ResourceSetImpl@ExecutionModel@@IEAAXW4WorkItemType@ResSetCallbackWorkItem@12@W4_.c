/*
 * XREFs of ?QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_RM_REVOKE_REASON@@@Z @ 0x1800015F0
 * Callers:
 *     ?OnAcquired@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z @ 0x1800018B0 (-OnAcquired@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ?OnCommitWarning@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z @ 0x180047CF0 (-OnCommitWarning@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ?OnOutOfMemory@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z @ 0x180047D20 (-OnOutOfMemory@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ?OnRelease@ResourceSetImpl@ExecutionModel@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z @ 0x180047D50 (-OnRelease@ResourceSetImpl@ExecutionModel@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z.c)
 * Callees:
 *     ??$_delete@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@tlx@@YAXPEAUResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@Z @ 0x180004B10 (--$_delete@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@tlx@@YAXPEAUResSetCallbackWo.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall ExecutionModel::ResourceSetImpl::QueueCallback(struct IUnknown *a1, int a2, int a3)
{
  _DWORD *result; // rax
  void *v7; // rbx
  struct IUnknown *v8; // rbp
  __int64 v9; // rsi

  result = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = result;
  if ( result )
  {
    *((_QWORD *)result + 1) = 0LL;
    result[1] = -1;
    *result = 4;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    *(_DWORD *)v7 = a2;
    *((_DWORD *)v7 + 1) = a3;
    if ( *((struct IUnknown **)v7 + 1) != a1 )
      ATL::AtlComPtrAssign((struct IUnknown **)v7 + 1, a1);
    v8 = a1 + 2;
    if ( !a1 )
      v8 = 0LL;
    v9 = *((_QWORD *)a1[23].lpVtbl[3].AddRef + 13);
    result = (_DWORD *)(*(__int64 (__fastcall **)(__int64, struct IUnknown *, void *))(*(_QWORD *)v9 + 40LL))(
                         v9,
                         v8,
                         v7);
    if ( (int)result >= 0 )
      v7 = 0LL;
    if ( v7 )
      return (_DWORD *)tlx::_delete<ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem>(v7);
  }
  return result;
}
