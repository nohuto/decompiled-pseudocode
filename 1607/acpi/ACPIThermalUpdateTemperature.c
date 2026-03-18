/*
 * XREFs of ACPIThermalUpdateTemperature @ 0x1C000950C
 * Callers:
 *     ACPIThermalTMPCallback @ 0x1C0008540 (ACPIThermalTMPCallback.c)
 *     ACPIThermalReadTemperatureComplete @ 0x1C00571B0 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalReadTemperature @ 0x1C00A0D0C (ACPIThermalReadTemperature.c)
 * Callees:
 *     WPP_RECORDER_SF_ddqssdddd @ 0x1C00087BC (WPP_RECORDER_SF_ddqssdddd.c)
 *     ACPIThermalLoop @ 0x1C0008D9C (ACPIThermalLoop.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 */

void __fastcall ACPIThermalUpdateTemperature(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v4; // [rsp+20h] [rbp-78h]
  union _LARGE_INTEGER Time; // [rsp+70h] [rbp-28h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+78h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(_DWORD *)(v2 + 16) != a2 )
  {
    *(_DWORD *)(v2 + 16) = a2;
    Time.QuadPart = MEMORY[0xFFFFF78000000008];
    RtlTimeToTimeFields(&Time, &TimeFields);
    WPP_RECORDER_SF_ddqssdddd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      *(_DWORD *)(v2 + 16) / 0xAu,
      (unsigned int)TimeFields.Second,
      0x13u,
      v4);
    ACPIThermalLoop(a1, 2048LL);
  }
}
