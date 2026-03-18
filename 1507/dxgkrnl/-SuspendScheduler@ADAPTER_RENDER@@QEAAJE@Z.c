/*
 * XREFs of ?SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z @ 0x1C0093ECC
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0078920 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00B58D4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C0093D5C (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendScheduler(ADAPTER_RENDER *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( !*((_QWORD *)this + 51) )
    return 0LL;
  ADAPTER_RENDER::SuspendVidMmWorkerThread((__int64)this, 1u, a2);
  v5 = *((_QWORD *)this + 48);
  if ( !v5 )
    return 0LL;
  LOBYTE(v4) = a2;
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 47) + 8LL) + 656LL))(v5, v4);
}
