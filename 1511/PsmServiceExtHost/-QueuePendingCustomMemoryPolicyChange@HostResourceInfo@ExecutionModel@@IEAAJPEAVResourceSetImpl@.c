/*
 * XREFs of ?QueuePendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z @ 0x18004DEC4
 * Callers:
 *     ?HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z @ 0x18004DD50 (-HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Create@V?$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@utl@@AEA_KAEAPEAVResourceSetImpl@ExecutionModel@@@?$_SharedAlloc@UPendingCustomMemoryLimit@ExecutionModel@@V?$allocator@H@utl@@@utl@@QEAA?AV?$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@1@AEA_KAEAPEAVResourceSetImpl@ExecutionModel@@@Z @ 0x18004D570 (--$_Create@V-$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@utl@@AEA_KAEAPEAVResourceSet.c)
 *     ??4?$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@utl@@QEAAAEAV01@AEBV01@@Z @ 0x18004D860 (--4-$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@utl@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?HasPendingMemoryPolicyChange@HostResourceInfo@ExecutionModel@@QEBA_NXZ @ 0x18004DD30 (-HasPendingMemoryPolicyChange@HostResourceInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?_DecStrong@_RefCountBase@utl@@QEAAXXZ @ 0x18004E120 (-_DecStrong@_RefCountBase@utl@@QEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::QueuePendingCustomMemoryPolicyChange(
        ExecutionModel::HostResourceInfo *this,
        struct ExecutionModel::ResourceSetImpl *a2,
        __int64 a3)
{
  unsigned int v4; // r15d
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  utl::_RefCountBase *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // r12
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  void *Block; // [rsp+40h] [rbp-10h] BYREF
  struct ExecutionModel::ResourceSetImpl *v14; // [rsp+98h] [rbp+48h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+50h] BYREF

  v15 = a3;
  v14 = a2;
  v4 = 0;
  if ( ExecutionModel::HostResourceInfo::HasPendingMemoryPolicyChange(this) )
    return 2147483658LL;
  Block = 0LL;
  utl::_SharedAlloc<ExecutionModel::PendingCustomMemoryLimit,utl::allocator<int>>::_Create<utl::shared_ptr<ExecutionModel::PendingCustomMemoryLimit>,unsigned __int64 &,ExecutionModel::ResourceSetImpl * &>(
    (__int64 *)&Block,
    &v12,
    &v15,
    (__int64 *)&v14);
  if ( Block )
    operator delete(Block);
  v6 = *((_QWORD *)&v12 + 1);
  v7 = (_QWORD *)((char *)this + 192);
  *((_QWORD *)this + 24) = v12;
  v8 = *((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = v6 & 0xFFFFFFFFFFFFFFFEuLL;
  v12 = 0LL;
  v9 = (utl::_RefCountBase *)(v8 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v9 )
    utl::_RefCountBase::_DecStrong(v9);
  if ( (*((_QWORD *)&v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    utl::_RefCountBase::_DecStrong((utl::_RefCountBase *)(*((_QWORD *)&v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL));
  if ( !*v7 )
    return (unsigned int)-2147024882;
  v10 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    *v10 = 0LL;
    v10[1] = 0LL;
    utl::shared_ptr<ExecutionModel::PendingCustomMemoryLimit>::operator=(v10, (__int64 *)this + 24);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, ExecutionModel::HostResourceInfo *, _QWORD *, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 128LL) + 24LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 128LL),
      *(unsigned int *)(*((_QWORD *)this + 2) + 96LL),
      500LL,
      this,
      v11,
      *v7 + 8LL,
      v12);
  else
    return (unsigned int)-2147024882;
  return v4;
}
