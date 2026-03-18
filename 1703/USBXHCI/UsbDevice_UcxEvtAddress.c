/*
 * XREFs of UsbDevice_UcxEvtAddress @ 0x1C002E8A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0008A90 (WPP_RECORDER_SF_dq.c)
 *     UsbDevice_SetAddress @ 0x1C0010420 (UsbDevice_SetAddress.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 */

__int64 __fastcall UsbDevice_UcxEvtAddress(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  __int64 result; // rax
  __int64 v6; // rax
  int v7; // [rsp+28h] [rbp-50h]
  __int64 v8; // [rsp+28h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-48h]
  _QWORD v10[5]; // [rsp+40h] [rbp-38h] BYREF

  memset(v10, 0, sizeof(v10));
  LOWORD(v10[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v10);
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v10[1] + 16LL),
                   off_1C0045250);
  v7 = *((unsigned __int8 *)v3 + 135);
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(v3[1] + 64LL),
    4u,
    0xBu,
    0x1Cu,
    (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
    v7,
    *v3);
  if ( *((_BYTE *)v3 + 134) )
  {
    if ( Controller_IsControllerAccessible(v3[1]) )
    {
      v3[55] = a2;
      *((_BYTE *)v3 + 448) = 0;
      result = UsbDevice_SetAddress((__int64)v3, 0);
      v4 = result;
      if ( (int)result >= 0 )
        return result;
      LODWORD(v9) = result;
      LODWORD(v8) = *((unsigned __int8 *)v3 + 135);
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v3[1] + 64LL),
        3u,
        0xBu,
        0x1Eu,
        (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
        v8,
        v9);
    }
    else
    {
      v4 = -1073741810;
    }
  }
  else
  {
    LODWORD(v8) = *((unsigned __int8 *)v3 + 135);
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v3[1] + 64LL),
      3u,
      0xBu,
      0x1Du,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
      v8,
      *v3);
    v4 = -1073741823;
  }
  v6 = WdfFunctions_01015;
  v3[55] = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v6 + 2104))(WdfDriverGlobals, a2, v4);
}
