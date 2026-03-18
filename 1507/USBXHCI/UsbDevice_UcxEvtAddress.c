/*
 * XREFs of UsbDevice_UcxEvtAddress @ 0x1C00306E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C00042C8 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0005328 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     UsbDevice_SetAddress @ 0x1C002FEE4 (UsbDevice_SetAddress.c)
 */

__int64 __fastcall UsbDevice_UcxEvtAddress(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-50h]
  __int64 v7; // [rsp+28h] [rbp-50h]
  __int64 v8; // [rsp+30h] [rbp-48h]
  _QWORD v9[5]; // [rsp+40h] [rbp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  LOWORD(v9[0]) = 40;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    a2,
    v9);
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                   WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                   *(_QWORD *)(v9[1] + 16LL),
                   off_1C00402E8);
  v6 = *((unsigned __int8 *)v3 + 135);
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(v3[1] + 64LL),
    4u,
    0xBu,
    0x1Cu,
    (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
    v6,
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
      LODWORD(v8) = result;
      LODWORD(v7) = *((unsigned __int8 *)v3 + 135);
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v3[1] + 64LL),
        3u,
        0xBu,
        0x1Eu,
        (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
        v7,
        v8);
    }
    else
    {
      v4 = -1073741810;
    }
  }
  else
  {
    LODWORD(v7) = *((unsigned __int8 *)v3 + 135);
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v3[1] + 64LL),
      3u,
      0xBu,
      0x1Du,
      (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
      v7,
      *v3);
    v4 = -1073741823;
  }
  v3[55] = 0LL;
  return (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           a2,
           v4);
}
