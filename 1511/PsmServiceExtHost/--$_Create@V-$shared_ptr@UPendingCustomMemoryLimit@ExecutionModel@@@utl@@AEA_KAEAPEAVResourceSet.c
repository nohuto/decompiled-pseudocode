/*
 * XREFs of ??$_Create@V?$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@utl@@AEA_KAEAPEAVResourceSetImpl@ExecutionModel@@@?$_SharedAlloc@UPendingCustomMemoryLimit@ExecutionModel@@V?$allocator@H@utl@@@utl@@QEAA?AV?$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@1@AEA_KAEAPEAVResourceSetImpl@ExecutionModel@@@Z @ 0x18004D570
 * Callers:
 *     ?QueuePendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z @ 0x18004DEC4 (-QueuePendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_EnableAndInitNull@PEAUPendingCustomMemoryLimit@ExecutionModel@@@?$_SharedBase@PEAUPendingCustomMemoryLimit@ExecutionModel@@@utl@@IEAAXAEBQEAUPendingCustomMemoryLimit@ExecutionModel@@PEAV_RefCountBase@1@@Z @ 0x18002BF3C (--$_EnableAndInitNull@PEAUPendingCustomMemoryLimit@ExecutionModel@@@-$_SharedBase@PEAUPendingCus.c)
 */

_QWORD *__fastcall utl::_SharedAlloc<ExecutionModel::PendingCustomMemoryLimit,utl::allocator<int>>::_Create<utl::shared_ptr<ExecutionModel::PendingCustomMemoryLimit>,unsigned __int64 &,ExecutionModel::ResourceSetImpl * &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4)
{
  _DWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  *a1 = (__int64)v8;
  if ( v8 )
  {
    *v8 = 1;
    v8[1] = 1;
    v9 = v8 + 2;
    if ( v9 )
      *v9 = &utl::_RefCountVtable<utl::_RefCountStored<ExecutionModel::PendingCustomMemoryLimit,utl::allocator<int>>>::`vftable';
    v10 = *a1;
    v11 = *a3;
    v12 = *a4;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 16) = v11;
    *(_BYTE *)(v10 + 32) = 1;
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      (_QWORD *)(v10 + 40),
      v12);
    v13 = *a1;
    v15 = *a1 + 16;
    utl::_SharedBase<ExecutionModel::PendingCustomMemoryLimit *>::_EnableAndInitNull<ExecutionModel::PendingCustomMemoryLimit *>(
      a2,
      &v15,
      v13);
    *a1 = 0LL;
  }
  return a2;
}
