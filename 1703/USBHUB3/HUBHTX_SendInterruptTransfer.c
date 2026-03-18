/*
 * XREFs of HUBHTX_SendInterruptTransfer @ 0x1C0003070
 * Callers:
 *     HUBHSM_SendingInterruptTransfer @ 0x1C0007EC0 (HUBHSM_SendingInterruptTransfer.c)
 *     HUBHSM_SendingInterruptTransferAfterResettingPipe @ 0x1C0007F00 (HUBHSM_SendingInterruptTransferAfterResettingPipe.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBHTX_SendInterruptTransfer(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ebx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // r14d
  __int64 (__fastcall *v10)(PWDF_DRIVER_GLOBALS, __int64, __int64 *); // rax
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // [rsp+28h] [rbp-31h]
  int v14; // [rsp+28h] [rbp-31h]
  __int64 v15; // [rsp+30h] [rbp-29h] BYREF
  __int64 v16; // [rsp+38h] [rbp-21h]
  __int64 v17; // [rsp+40h] [rbp-19h]
  _QWORD v18[9]; // [rsp+48h] [rbp-11h] BYREF

  v1 = *(_QWORD *)(a1 + 936);
  v16 = 0LL;
  v17 = 0LL;
  v15 = 24LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v1,
         &v15);
  if ( v3 < 0 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005B110);
    v14 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 64),
      2u,
      2u,
      0x3Au,
      (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
      v14);
  }
  memset((void *)(a1 + 944), 0, 0x80uLL);
  *(_QWORD *)(a1 + 952) = *(_QWORD *)(a1 + 240);
  *(_DWORD *)(a1 + 976) = 2;
  v5 = *(_DWORD *)(a1 + 976);
  *(_DWORD *)(a1 + 944) = 589952;
  if ( *(_BYTE *)(a1 + 2240) )
    v5 = 18;
  *(_DWORD *)(a1 + 976) = v5;
  *(_QWORD *)(a1 + 984) = *(_QWORD *)(a1 + 1088);
  if ( *(_BYTE *)(a1 + 232) )
    v6 = *(unsigned __int16 *)(a1 + 88);
  else
    v6 = *(unsigned __int16 *)(a1 + 1096);
  *(_QWORD *)(a1 + 992) = 0LL;
  *(_DWORD *)(a1 + 980) = v6;
  *(_QWORD *)(a1 + 968) = *(_QWORD *)(a1 + 1072);
  if ( *(_BYTE *)(a1 + 1080) )
  {
    *(_DWORD *)(a1 + 960) |= 0x80000000;
    *(_BYTE *)(a1 + 1080) = 0;
  }
  memset(v18, 0, sizeof(v18));
  LOBYTE(v18[0]) = 15;
  LODWORD(v18[3]) = 2228227;
  v18[1] = a1 + 944;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v1,
    v18);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v1,
    HUBHTX_SendInterruptTransferComplete,
    a1);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v1,
             v7,
             0LL);
  if ( !(_BYTE)result )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v1);
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v10 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992);
    LODWORD(v15) = 24;
    result = v10(WdfDriverGlobals, v1, &v15);
    v11 = result;
    if ( (int)result < 0 )
    {
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C005B110);
      LODWORD(v13) = v11;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(v12 + 64),
                 2u,
                 2u,
                 0x3Au,
                 (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
                 v13);
    }
    if ( v9 < 0 )
      return HUBSM_AddEvent(a1 + 1232, 2030LL);
  }
  return result;
}
