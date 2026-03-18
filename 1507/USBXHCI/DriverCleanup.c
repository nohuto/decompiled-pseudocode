/*
 * XREFs of DriverCleanup @ 0x1C004F8C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     McGenEventUnregister @ 0x1C00170E0 (McGenEventUnregister.c)
 *     WppCleanupKm @ 0x1C004F928 (WppCleanupKm.c)
 */

void __fastcall DriverCleanup(__int64 a1)
{
  __int64 v1; // rax
  PREGHANDLE v2; // rcx

  v1 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 944))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1);
  WppCleanupKm(v1);
  McGenEventUnregister(v2);
  if ( *(_BYTE *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 28) )
  {
    PcwUnregister(*(PPCW_REGISTRATION *)&WPP_MAIN_CB.ActiveThreadCount);
    PcwUnregister((PPCW_REGISTRATION)WPP_MAIN_CB.SecurityDescriptor);
    PcwUnregister(*(PPCW_REGISTRATION *)&WPP_MAIN_CB.DeviceLock.Header.Lock);
  }
}
