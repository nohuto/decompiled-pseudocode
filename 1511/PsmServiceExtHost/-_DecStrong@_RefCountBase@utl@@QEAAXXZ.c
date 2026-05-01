/*
 * XREFs of ?_DecStrong@_RefCountBase@utl@@QEAAXXZ @ 0x18004E120
 * Callers:
 *     ??1HostResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180013628 (--1HostResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??4?$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@utl@@QEAAAEAV01@AEBV01@@Z @ 0x18004D860 (--4-$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@utl@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CancelPendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJXZ @ 0x18004DAA8 (-CancelPendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJXZ.c)
 *     ?QueuePendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z @ 0x18004DEC4 (-QueuePendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@.c)
 *     ?RecvCallback@HostResourceInfo@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x18004E020 (-RecvCallback@HostResourceInfo@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

void __fastcall utl::_RefCountBase::_DecStrong(utl::_RefCountBase *this)
{
  if ( *(_DWORD *)this == 1 && *(_QWORD *)this == 0x100000001LL )
  {
    (**((void (__fastcall ***)(char *))this + 1))((char *)this + 8);
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
  }
  else if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    (**((void (__fastcall ***)(char *))this + 1))((char *)this + 8);
    if ( *((_DWORD *)this + 1) == 1 || _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
  }
}
