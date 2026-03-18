/*
 * XREFs of ACPIDeviceInternalDelayedDeviceRequest @ 0x1C000EB98
 * Callers:
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000EC80 (ACPIBuildProcessDevicePhasePsc.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000E7E0 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000FCF0 (WPP_RECORDER_SF_qdqss.c)
 */

__int64 __fastcall ACPIDeviceInternalDelayedDeviceRequest(_QWORD *a1, POWER_STATE a2)
{
  char v3; // r10
  __int64 *v4; // rcx
  POWER_STATE v5; // edi
  __int64 *v6; // r8
  __int64 v7; // rax
  __int64 result; // rax

  v3 = 0;
  v4 = qword_1C002C340;
  v5.SystemState = a2.SystemState;
  v6 = qword_1C002C340;
  if ( a1 )
  {
    v7 = a1[1];
    a2.SystemState = PowerSystemUnspecified;
    v3 = (char)a1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v4 = (__int64 *)a1[70];
      a2.SystemState = PowerSystemUnspecified;
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (__int64 *)a1[71];
    }
  }
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, char, char, char, __int64, __int64))WPP_RECORDER_SF_qdqss)(
    WPP_GLOBAL_Control->DeviceExtension,
    (POWER_STATE)a2.SystemState,
    10,
    23,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    0,
    LOBYTE(v5.SystemState) - 1,
    v3,
    (__int64)v4,
    (__int64)v6);
  result = ACPIDeviceInitializePowerRequest((__int64)a1, v5, 0LL, 0LL, 0, 0, 9u);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
