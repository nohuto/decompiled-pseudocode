/*
 * XREFs of ?CancelPendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJXZ @ 0x18004DAA8
 * Callers:
 *     ?HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z @ 0x18004DD50 (-HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?_DecStrong@_RefCountBase@utl@@QEAAXXZ @ 0x18004E120 (-_DecStrong@_RefCountBase@utl@@QEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::CancelPendingCustomMemoryPolicyChange(
        ExecutionModel::HostResourceInfo *this)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // rcx
  utl::_RefCountBase *v5; // rcx

  v1 = *((_QWORD *)this + 24);
  if ( v1 )
  {
    *(_BYTE *)(v1 + 16) = 0;
    v3 = *(_QWORD *)(*((_QWORD *)this + 24) + 8LL);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 128LL) + 32LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 128LL),
        v3);
      *(_QWORD *)(*((_QWORD *)this + 24) + 8LL) = 0LL;
    }
    *((_QWORD *)this + 24) = 0LL;
    v4 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = 0LL;
    v5 = (utl::_RefCountBase *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v5 )
      utl::_RefCountBase::_DecStrong(v5);
  }
  return 0LL;
}
