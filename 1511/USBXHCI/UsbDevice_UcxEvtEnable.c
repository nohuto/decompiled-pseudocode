/*
 * XREFs of UsbDevice_UcxEvtEnable @ 0x1C00318F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C00073DC (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Command_SendCommand @ 0x1C001BD2C (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x1C0020DE0 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0021020 (Endpoint_Enable.c)
 */

void __fastcall UsbDevice_UcxEvtEnable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[5]; // [rsp+30h] [rbp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  LOWORD(v9[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, a2, v9);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v9[1] + 16LL),
         off_1C0041318);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 112LL);
  v5 = Endpoint_Enable(*(_QWORD **)(v3 + 176));
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xBu,
      0x10u,
      (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
      v8);
LABEL_5:
    v7 = WdfFunctions_01015;
    *(_QWORD *)(v3 + 440) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v7 + 2104))(WdfDriverGlobals, a2, v6);
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
