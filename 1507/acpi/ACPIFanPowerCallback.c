/*
 * XREFs of ACPIFanPowerCallback @ 0x1C003B4E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     AcpiDiagTraceFanEvent @ 0x1C00339D8 (AcpiDiagTraceFanEvent.c)
 *     ACPIFanLoop @ 0x1C003B218 (ACPIFanLoop.c)
 */

void __fastcall ACPIFanPowerCallback(__int64 a1)
{
  __int16 v2; // [rsp+20h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+28h] [rbp-40h] BYREF
  __int16 *v4; // [rsp+48h] [rbp-20h]
  __int64 v5; // [rsp+50h] [rbp-18h]

  v2 = *(_DWORD *)(a1 + 328) == 1;
  v5 = 2LL;
  v4 = &v2;
  AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_POWER_STATE_CHANGE, 3u, &v3);
  ACPIFanLoop(a1, 2, 0);
}
