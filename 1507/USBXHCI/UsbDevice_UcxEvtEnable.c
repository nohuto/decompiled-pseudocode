/*
 * XREFs of UsbDevice_UcxEvtEnable @ 0x1C0030B00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C00042C8 (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Command_SendCommand @ 0x1C001278C (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x1C00176D0 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0017910 (Endpoint_Enable.c)
 */

void __fastcall UsbDevice_UcxEvtEnable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // [rsp+28h] [rbp-40h]
  _QWORD v8[5]; // [rsp+30h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  LOWORD(v8[0]) = 40;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    a2,
    v8);
  v3 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         *(_QWORD *)(v8[1] + 16LL),
         off_1C00402E8);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 112LL);
  v5 = Endpoint_Enable(*(_QWORD **)(v3 + 176));
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xBu,
      0x10u,
      (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
      v7);
LABEL_5:
    *(_QWORD *)(v3 + 440) = 0LL;
    (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      a2,
      v6);
    return;
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    v6 = -1073741810;
    Endpoint_Disable(*(_QWORD *)(v3 + 176));
    goto LABEL_5;
  }
  *(_QWORD *)(v3 + 440) = a2;
  *(_BYTE *)(v3 + 448) = 0;
  memset((void *)(v3 + 456), 0, 0x50uLL);
  *(_QWORD *)(v3 + 512) = v3;
  *(_QWORD *)(v3 + 504) = UsbDevice_EnableCompletion;
  *(_DWORD *)(v3 + 492) = *(_DWORD *)(v3 + 492) & 0xFFFF03FF | 0x2400;
  Command_SendCommand(v4, v3 + 456);
}
