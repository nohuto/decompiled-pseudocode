/*
 * XREFs of HUBHTX_SendInterruptTransfer @ 0x1C0002C28
 * Callers:
 *     HUBHSM_SendingInterruptTransfer @ 0x1C0007550 (HUBHSM_SendingInterruptTransfer.c)
 *     HUBHSM_SendingInterruptTransferAfterResettingPipe @ 0x1C0007580 (HUBHSM_SendingInterruptTransferAfterResettingPipe.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
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
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // [rsp+28h] [rbp-31h]
  int v13; // [rsp+28h] [rbp-31h]
  __int64 v14; // [rsp+30h] [rbp-29h] BYREF
  __int64 v15; // [rsp+38h] [rbp-21h]
  __int64 v16; // [rsp+40h] [rbp-19h]
  _QWORD v17[9]; // [rsp+48h] [rbp-11h] BYREF

  v1 = *(_QWORD *)(a1 + 888);
  v15 = 0LL;
  v16 = 0LL;
  v14 = 24LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v1,
         &v14);
  if ( v3 < 0 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C0057090);
    v13 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 64),
      2u,
      2u,
      0x3Au,
      (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
      v13);
  }
  memset((void *)(a1 + 896), 0, 0x80uLL);
  *(_QWORD *)(a1 + 904) = *(_QWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 928) = 2;
  v5 = *(_DWORD *)(a1 + 928);
  *(_DWORD *)(a1 + 896) = 589952;
  if ( *(_BYTE *)(a1 + 2192) )
    v5 = 18;
  *(_DWORD *)(a1 + 928) = v5;
  *(_QWORD *)(a1 + 936) = *(_QWORD *)(a1 + 1040);
  if ( *(_BYTE *)(a1 + 200) )
    v6 = *(unsigned __int16 *)(a1 + 80);
  else
    v6 = *(unsigned __int16 *)(a1 + 1048);
  *(_QWORD *)(a1 + 944) = 0LL;
  *(_DWORD *)(a1 + 932) = v6;
  *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 1024);
  if ( *(_BYTE *)(a1 + 1032) )
  {
    *(_DWORD *)(a1 + 912) |= 0x80000000;
    *(_BYTE *)(a1 + 1032) = 0;
  }
  memset(v17, 0, sizeof(v17));
  LOBYTE(v17[0]) = 15;
  LODWORD(v17[3]) = 2228227;
  v17[1] = a1 + 896;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v1,
    v17);
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
    v14 = 24LL;
    v16 = 0LL;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
               WdfDriverGlobals,
               v1,
               &v14);
    v10 = result;
    if ( (int)result < 0 )
    {
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C0057090);
      LODWORD(v12) = v10;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(v11 + 64),
                 2u,
                 2u,
                 0x3Au,
                 (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
                 v12);
    }
    if ( v9 < 0 )
      return HUBSM_AddEvent(a1 + 1184, 2030LL);
  }
  return result;
}
