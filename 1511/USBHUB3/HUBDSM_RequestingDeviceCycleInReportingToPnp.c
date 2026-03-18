/*
 * XREFs of HUBDSM_RequestingDeviceCycleInReportingToPnp @ 0x1C001A470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_RequestingDeviceCycleInReportingToPnp(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3011LL);
  if ( *(_QWORD *)(v1 + 2136) )
    USBD_RemoveDeviceFromGlobalList(v1);
  return 1000LL;
}
