/*
 * XREFs of UsbDevice_UcxEvtReset @ 0x1C002F730
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0008A90 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Command_SendCommand @ 0x1C00184A4 (Command_SendCommand.c)
 *     Endpoint_Disable_Internal @ 0x1C001D68C (Endpoint_Disable_Internal.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0030364 (WPP_RECORDER_SF_dqL.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

void __fastcall UsbDevice_UcxEvtReset(__int64 a1, __int64 a2)
{
  int v3; // edx
  _QWORD *v4; // rbx
  int v5; // r8d
  __int64 v6; // r10
  __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned int v9; // eax
  int v10; // r8d
  __int64 **v11; // rdi
  __int64 v12; // rbp
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  int v17; // [rsp+38h] [rbp-50h]
  _QWORD v18[5]; // [rsp+40h] [rbp-48h] BYREF

  memset(v18, 0, sizeof(v18));
  LOWORD(v18[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v18);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v18[1] + 16LL),
                   off_1C0045250);
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
LABEL_16:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
      WdfDriverGlobals,
      a2,
      0LL);
    return;
  }
  v8 = *(_QWORD *)(v4[53] + 16LL);
  LOBYTE(v3) = 4;
  v17 = *(_DWORD *)(v8 + 12) >> 27;
  WPP_RECORDER_SF_dqL(*(_QWORD *)(v6 + 64), v3, v5, 56);
  v9 = *(_DWORD *)(v8 + 12);
  if ( v9 < 0x8000000 || (v9 & 0xF8000000) == 0x8000000 )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v4[1] + 64LL),
      4u,
      0xBu,
      0x39u,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
      *((unsigned __int8 *)v4 + 135),
      *v4,
      v17);
    goto LABEL_16;
  }
  if ( !Controller_IsControllerAccessible(v4[1]) )
  {
    v11 = (__int64 **)(v4 + 23);
    v12 = 30LL;
    do
    {
      v13 = *v11;
      if ( *v11 )
      {
        Endpoint_Disable_Internal(*v11, 0, v10);
        ESM_AddEvent(v13 + 34);
      }
      ++v11;
      --v12;
    }
    while ( v12 );
    *((_DWORD *)v4 + 38) = 3;
    goto LABEL_16;
  }
  v14 = v4[1];
  v4[55] = a2;
  *((_BYTE *)v4 + 448) = 1;
  v15 = *(_QWORD *)(v14 + 232);
  v4[64] = v4;
  if ( (v15 & 0x8000) != 0 )
  {
    v4[63] = UsbDevice_OnResetDisableCompletion;
    v16 = *((_DWORD *)v4 + 123) & 0xFFFF03FF | 0x2800;
  }
  else
  {
    v4[63] = UsbDevice_DeviceResetCompletion;
    v16 = *((_DWORD *)v4 + 123) & 0xFFFF03FF | 0x4400;
  }
  *((_DWORD *)v4 + 123) = v16;
  *((_BYTE *)v4 + 495) = *((_BYTE *)v4 + 135);
  Command_SendCommand(v7, (__int64)(v4 + 57));
}
