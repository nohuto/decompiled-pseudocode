/*
 * XREFs of ACPIFanPowerCallback @ 0x1C004E580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     AcpiDiagTraceFanEvent @ 0x1C0042AB8 (AcpiDiagTraceFanEvent.c)
 *     ACPIFanLoop @ 0x1C004E2AC (ACPIFanLoop.c)
 */

void __fastcall ACPIFanPowerCallback(__int64 a1, __int64 a2, int a3)
{
  const char *v4; // rax
  char v5; // r10
  const char *v6; // rdx
  __int64 v7; // rcx
  __int16 v8; // [rsp+50h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+58h] [rbp-40h] BYREF
  __int16 *v10; // [rsp+78h] [rbp-20h]
  __int64 v11; // [rsp+80h] [rbp-18h]

  if ( a3 < 0 )
  {
    v4 = (const char *)qword_1C002C340;
    v5 = 0;
    v6 = (const char *)qword_1C002C340;
    if ( a1 )
    {
      v5 = a1;
      v7 = *(_QWORD *)(a1 + 8);
      if ( (v7 & 0x200000000000LL) != 0 )
      {
        v4 = *(const char **)(a1 + 560);
        if ( (v7 & 0x400000000000LL) != 0 )
          v6 = *(const char **)(a1 + 568);
      }
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x10u,
      0xDu,
      (__int64)&WPP_89e67fd0699430ed71704d47006f9e9f_Traceguids,
      a3,
      v5,
      v4,
      v6);
  }
  v8 = *(_DWORD *)(a1 + 336) == 1;
  v11 = 2LL;
  v10 = &v8;
  AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_POWER_STATE_CHANGE, 3u, &v9);
  ACPIFanLoop(a1, 2, 0);
}
