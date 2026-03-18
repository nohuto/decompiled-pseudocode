/*
 * XREFs of ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00912FC
 * Callers:
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C0086AD8 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C009F9A0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C00913E4 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendScheduler(ADAPTER_RENDER *this, char a2, __int64 a3)
{
  bool v5; // cf
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx

  if ( !*((_QWORD *)this + 51) )
    return 0LL;
  v5 = (_BYTE)a3 != 0;
  LOBYTE(a3) = a2;
  v6 = v5 + 1;
  ADAPTER_RENDER::SuspendVidMmWorkerThread(this, v6, a3);
  v9 = *((_QWORD *)this + 48);
  if ( !v9 )
    return 0LL;
  LOBYTE(v7) = a2;
  LOBYTE(v8) = v6 == 2;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 47) + 8LL) + 656LL))(
           v9,
           v7,
           v8);
}
