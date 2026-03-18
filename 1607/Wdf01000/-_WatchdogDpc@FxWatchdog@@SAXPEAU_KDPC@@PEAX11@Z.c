/*
 * XREFs of ?_WatchdogDpc@FxWatchdog@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1C0098330
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall __noreturn FxWatchdog::_WatchdogDpc(
        _KDPC *Dpc,
        _QWORD *Context,
        void *SystemArgument1,
        void *SystemArgument2)
{
  __int64 v5; // rbx
  _FX_DRIVER_GLOBALS **v6; // rsi
  WDFDEVICE__ *v7; // rbx
  struct _KTHREAD *v8; // rax
  _WDF_POWER_ROUTINE_TIMED_OUT_DATA data; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(Context[19] + 96LL);
  v6 = (_FX_DRIVER_GLOBALS **)(v5 + 16);
  WPP_IFR_SF_(*(_FX_DRIVER_GLOBALS **)(v5 + 16), 2u, 0xCu, 0x4Cu, WPP_FxPkgPnp_cpp_Traceguids);
  data.PowerState = *(_DWORD *)(v5 + 204);
  data.PowerPolicyState = *(_DWORD *)(v5 + 208);
  data.DeviceObject = *(_DEVICE_OBJECT **)(v5 + 144);
  if ( *(_WORD *)(v5 + 10) )
    v7 = (WDFDEVICE__ *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v7 = 0LL;
  v8 = (struct _KTHREAD *)Context[20];
  data.Device = v7;
  data.TimedOutThread = v8;
  FxVerifierBugCheckWorker(*v6, WDF_POWER_ROUTINE_TIMED_OUT, (ULONG_PTR)&data, 0LL);
}
