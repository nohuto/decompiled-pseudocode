/*
 * XREFs of ??4?$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@utl@@QEAAAEAV01@AEBV01@@Z @ 0x18004D860
 * Callers:
 *     ?QueuePendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z @ 0x18004DEC4 (-QueuePendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@.c)
 *     ?RecvCallback@HostResourceInfo@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x18004E020 (-RecvCallback@HostResourceInfo@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ.c)
 * Callees:
 *     ?_DecStrong@_RefCountBase@utl@@QEAAXXZ @ 0x18004E120 (-_DecStrong@_RefCountBase@utl@@QEAAXXZ.c)
 */

_QWORD *__fastcall utl::shared_ptr<ExecutionModel::PendingCustomMemoryLimit>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  utl::_RefCountBase *v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h]

  v3 = *a2;
  v4 = a2[1] & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = *a2;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2[1] & 0xFFFFFFFFFFFFFFFEuLL));
    v3 = v8;
  }
  *a1 = v3;
  v5 = a1[1];
  a1[1] = v4;
  v6 = (utl::_RefCountBase *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v6 )
    utl::_RefCountBase::_DecStrong(v6);
  return a1;
}
