/*
 * XREFs of InitPep @ 0x1C001C8C8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011F34 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0014208 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001434C (ProcLibTraceGetPlatformIdleStates.c)
 *     PepQueryVetoList @ 0x1C00155E4 (PepQueryVetoList.c)
 *     PepNotifyQueryCapabilities @ 0x1C001CB04 (PepNotifyQueryCapabilities.c)
 */

__int64 __fastcall InitPep(__int64 a1)
{
  bool v2; // zf
  int VetoList; // edi
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  char v7; // [rsp+38h] [rbp-39h] BYREF
  char v8; // [rsp+39h] [rbp-38h] BYREF
  int v9; // [rsp+3Ch] [rbp-35h] BYREF
  int v10; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v11[12]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v12[3]; // [rsp+A8h] [rbp+37h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  v12[0] = 0LL;
  v12[1] = 0LL;
  memset(v11, 0, sizeof(v11));
  v12[2] = 0xFFFFFFFFLL;
  v2 = *(_BYTE *)(a1 + 66) == 0;
  v11[11] = v12;
  v11[6] = PepDevicePowerControlCallback;
  v11[0] = 0x100000001LL;
  LODWORD(v11[10]) = 1;
  v11[7] = a1;
  if ( v2 || !byte_1C0009AD4 )
  {
    v4 = (_QWORD *)(a1 + 1064);
    VetoList = PoFxRegisterDevice(*(_QWORD *)a1, v11, a1 + 1064);
    if ( VetoList >= 0 )
    {
      PoFxActivateComponent(*v4, 0LL, 0LL);
      PoFxStartDevicePowerManagement(*v4);
    }
    else
    {
      *v4 = 0LL;
    }
  }
  else
  {
    VetoList = -1073741823;
  }
  if ( VetoList >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00093A8,
      0LL);
    if ( !PepPlatformStatesQueried )
    {
      v5 = *(_QWORD *)(a1 + 1064);
      v9 = 0;
      if ( (int)PoFxProcessorNotification(v5, 16LL, &v9) >= 0 )
        dword_1C00098D0 = v9;
      if ( !*(_BYTE *)(a1 + 66) )
        ((void (__fastcall *)(_QWORD))qword_1C0009620)(*(_QWORD *)(a1 + 1064));
      PepPlatformStatesQueried = 1;
      ProcLibTraceGetPlatformIdleStates(0);
      VetoList = PepQueryVetoList(a1);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00093A8);
    if ( VetoList >= 0 )
    {
      VetoList = PepNotifyQueryCapabilities(a1, (unsigned int)&v10, (unsigned int)&v9, (unsigned int)&v8, (__int64)&v7);
      if ( VetoList >= 0 )
      {
        *(_BYTE *)(a1 + 1081) = v7;
        *(_BYTE *)(a1 + 1080) = v8;
        *(_DWORD *)(a1 + 1072) = v9;
        *(_DWORD *)(a1 + 1076) = v10;
        ProcLibTraceQueryCapabilities(a1, 0);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  return (unsigned int)VetoList;
}
