/*
 * XREFs of UsbDevice_UcxEvtReset @ 0x1C0032920
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0005C54 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0008F40 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     Command_SendCommand @ 0x1C001C18C (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x1C00213D0 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C00335E4 (WPP_RECORDER_SF_dqL.c)
 */

void __fastcall UsbDevice_UcxEvtReset(__int64 a1, __int64 a2)
{
  int v3; // edx
  _QWORD *v4; // rbx
  int v5; // r8d
  __int64 v6; // r10
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  int v15; // [rsp+38h] [rbp-40h]
  _QWORD v16[5]; // [rsp+40h] [rbp-38h] BYREF

  memset(v16, 0, sizeof(v16));
  LOWORD(v16[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v16);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v16[1] + 16LL),
                   off_1C0043250);
  v6 = v4[1];
  v7 = *(_QWORD *)(v6 + 112);
  if ( !*((_BYTE *)v4 + 134) )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v6 + 64),
      4u,
      0xBu,
      0x37u,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
      *((unsigned __int8 *)v4 + 135),
      *v4);
LABEL_15:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
      WdfDriverGlobals,
      a2,
      0LL);
    return;
  }
  v8 = *(_QWORD *)(v4[53] + 16LL);
  LOBYTE(v3) = 4;
  v15 = *(_DWORD *)(v8 + 12) >> 27;
  WPP_RECORDER_SF_dqL(*(_QWORD *)(v6 + 64), v3, v5, 56);
  v9 = v4[1];
  if ( (*(_DWORD *)(v8 + 12) & 0xF8000000) < 0x10000000 )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v9 + 64),
      4u,
      0xBu,
      0x39u,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
      *((unsigned __int8 *)v4 + 135),
      *v4,
      v15);
    goto LABEL_15;
  }
  if ( !Controller_IsControllerAccessible(v9) )
  {
    v10 = v4 + 23;
    v11 = 30LL;
    do
    {
      if ( *v10 )
        Endpoint_Disable(*v10);
      ++v10;
      --v11;
    }
    while ( v11 );
    *((_DWORD *)v4 + 38) = 3;
    goto LABEL_15;
  }
  v12 = v4[1];
  v4[55] = a2;
  *((_BYTE *)v4 + 448) = 1;
  v13 = *(_QWORD *)(v12 + 232);
  v4[64] = v4;
  if ( (v13 & 0x8000) != 0 )
  {
    v4[63] = UsbDevice_OnResetDisableCompletion;
    v14 = *((_DWORD *)v4 + 123) & 0xFFFF03FF | 0x2800;
  }
  else
  {
    v4[63] = UsbDevice_DeviceResetCompletion;
    v14 = *((_DWORD *)v4 + 123) & 0xFFFF03FF | 0x4400;
  }
  *((_DWORD *)v4 + 123) = v14;
  *((_BYTE *)v4 + 495) = *((_BYTE *)v4 + 135);
  Command_SendCommand(v7, (__int64)(v4 + 57));
}
