/*
 * XREFs of ACPIDeviceInternalDeviceRequest @ 0x1C000A33C
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 *     ACPIFanControl @ 0x1C004DCC0 (ACPIFanControl.c)
 *     ACPIThermalStartDevice @ 0x1C0081910 (ACPIThermalStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C009BAF0 (ACPIFanStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C009C360 (ACPIInitStopDevice.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000E7E0 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000FCF0 (WPP_RECORDER_SF_qdqss.c)
 */

__int64 __fastcall ACPIDeviceInternalDeviceRequest(_QWORD *a1, int a2, int a3, int a4, int a5)
{
  char v6; // r11
  __int64 *v7; // rcx
  __int64 *v9; // r10
  int v11; // esi
  __int64 v12; // rax
  __int64 result; // rax

  v6 = 0;
  v7 = qword_1C002C340;
  v9 = qword_1C002C340;
  v11 = a2;
  if ( a1 )
  {
    v12 = a1[1];
    a2 = 0;
    v6 = (char)a1;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v7 = (__int64 *)a1[70];
      a2 = 0;
      if ( (v12 & 0x400000000000LL) != 0 )
        v9 = (__int64 *)a1[71];
    }
  }
  WPP_RECORDER_SF_qdqss(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    10,
    24,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a4,
    v11 - 1,
    v6,
    (__int64)v7,
    (__int64)v9);
  result = ACPIDeviceInitializePowerRequest((_DWORD)a1, v11, a3, a4, 0, 0, a5);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
