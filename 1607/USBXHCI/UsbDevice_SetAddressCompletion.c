/*
 * XREFs of UsbDevice_SetAddressCompletion @ 0x1C0031780
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0008F40 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     Command_SendCommand @ 0x1C001C18C (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0031A44 (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C00333EC (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_dqdL @ 0x1C00337E8 (WPP_RECORDER_SF_dqdL.c)
 */

void __fastcall UsbDevice_SetAddressCompletion(__int64 a1, int a2, _QWORD *a3, int a4)
{
  _QWORD *v4; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rsi
  int v14; // [rsp+28h] [rbp-70h]
  int v15; // [rsp+28h] [rbp-70h]
  _QWORD v16[5]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *(_QWORD **)(a1 + 56);
  if ( a2 == 3 )
  {
    v14 = *((unsigned __int8 *)v4 + 135);
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v4[1] + 64LL),
      4u,
      0xBu,
      0x18u,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
      v14,
      *v4);
    if ( (*((_DWORD *)v4 + 123) & 0x200) != 0 )
    {
      UsbDevice_SetDeviceDisabled(v4);
      return;
    }
    v7 = *((_BYTE *)v4 + 448) == 0 ? 0xC0000001 : 0;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(a1 + 68) == 1 )
  {
    if ( (*((_DWORD *)v4 + 123) & 0x200) != 0 )
    {
      v15 = *(unsigned __int8 *)(a1 + 69);
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(v4[1] + 64LL),
        4u,
        0xBu,
        0x1Au,
        (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
        v15,
        *v4);
    }
    else
    {
      memset(v16, 0, sizeof(v16));
      v8 = v4[55];
      LOWORD(v16[0]) = 40;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
        WdfDriverGlobals,
        v8,
        v16);
      v9 = (unsigned __int8)*(_DWORD *)(*(_QWORD *)(v4[53] + 16LL) + 12LL);
      *(_DWORD *)(v16[1] + 28LL) = v9;
      WPP_RECORDER_SF_dqd(*(_QWORD *)(v4[1] + 64LL), *(unsigned __int8 *)(a1 + 69), v9, 25);
    }
    v7 = 0LL;
    goto LABEL_12;
  }
  WPP_RECORDER_SF_dqdL(*(_QWORD *)(v4[1] + 64LL), *((unsigned __int8 *)v4 + 135), (*((_DWORD *)v4 + 123) >> 9) & 1, a4);
  if ( (*((_DWORD *)v4 + 123) & 0x200) == 0 )
  {
    v7 = 3221225473LL;
LABEL_12:
    v10 = WdfFunctions_01015;
    v11 = v4[55];
    v4[55] = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v10 + 2104))(WdfDriverGlobals, v11, v7);
    return;
  }
  v12 = (_QWORD *)v4[1];
  v13 = v12[14];
  if ( *((_BYTE *)v4 + 448) )
  {
    Controller_HwVerifierBreakIfEnabled(
      v12,
      *v4,
      0,
      0x40000LL,
      "Set Address Command with BSR=1 failed",
      (_QWORD *)(a1 + 24),
      a3);
    Controller_ReportFatalError(v4[1], 2, 4117, 0LL, 0LL, 0LL);
  }
  else
  {
    memset(v4 + 57, 0, 0x50uLL);
    v4[64] = v4;
    v4[63] = UsbDevice_DisableCompletionReturnFailure;
    *((_DWORD *)v4 + 123) = *((_DWORD *)v4 + 123) & 0xFFFF03FF | 0x2800;
    *((_BYTE *)v4 + 495) = *((_BYTE *)v4 + 135);
    Command_SendCommand(v13, (__int64)(v4 + 57));
  }
}
