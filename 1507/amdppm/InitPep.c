/*
 * XREFs of InitPep @ 0x1C001C3EC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00062C0 (memset.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0013F18 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001405C (ProcLibTraceGetPlatformIdleStates.c)
 *     PepQueryVetoList @ 0x1C00196E4 (PepQueryVetoList.c)
 *     PepNotifyQueryCapabilities @ 0x1C001C604 (PepNotifyQueryCapabilities.c)
 */

__int64 __fastcall InitPep(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rsi
  int VetoList; // edi
  __int64 v5; // rcx
  char v7; // [rsp+38h] [rbp-39h] BYREF
  char v8; // [rsp+39h] [rbp-38h] BYREF
  int v9; // [rsp+3Ch] [rbp-35h] BYREF
  int v10; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v11[12]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v12[2]; // [rsp+A8h] [rbp+37h] BYREF
  __int64 v13; // [rsp+B8h] [rbp+47h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  v12[0] = 0LL;
  v12[1] = 0LL;
  v13 = 0LL;
  memset(v11, 0, sizeof(v11));
  v2 = *(_QWORD *)a1;
  LODWORD(v13) = -1;
  v3 = (_QWORD *)(a1 + 1056);
  v11[11] = v12;
  v11[0] = 0x100000001LL;
  v11[6] = PepDevicePowerControlCallback;
  LODWORD(v11[10]) = 1;
  v11[7] = a1;
  VetoList = PoFxRegisterDevice(v2, v11, a1 + 1056);
  if ( VetoList >= 0 )
  {
    PoFxActivateComponent(*v3, 0LL, 0LL);
    PoFxStartDevicePowerManagement(*v3);
  }
  else
  {
    *v3 = 0LL;
  }
  if ( VetoList >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0009398,
      0LL);
    if ( !PepPlatformStatesQueried )
    {
      v5 = *v3;
      v9 = 0;
      if ( (int)PoFxProcessorNotification(v5, 16LL, &v9) >= 0 )
        dword_1C0009868 = v9;
      ((void (__fastcall *)(_QWORD))qword_1C00095F0)(*v3);
      PepPlatformStatesQueried = 1;
      ProcLibTraceGetPlatformIdleStates(0);
      VetoList = PepQueryVetoList(a1);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0009398);
    if ( VetoList >= 0 )
    {
      VetoList = PepNotifyQueryCapabilities(a1, (unsigned int)&v10, (unsigned int)&v9, (unsigned int)&v8, (__int64)&v7);
      if ( VetoList >= 0 )
      {
        *(_BYTE *)(a1 + 1073) = v7;
        *(_BYTE *)(a1 + 1072) = v8;
        *(_DWORD *)(a1 + 1064) = v9;
        *(_DWORD *)(a1 + 1068) = v10;
        ProcLibTraceQueryCapabilities(a1, 0);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  return (unsigned int)VetoList;
}
