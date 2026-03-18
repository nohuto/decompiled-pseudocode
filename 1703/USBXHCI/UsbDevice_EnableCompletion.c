/*
 * XREFs of UsbDevice_EnableCompletion @ 0x1C002D280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_L @ 0x1C0004FA0 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0008A90 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     UsbDevice_SetAddress @ 0x1C0010420 (UsbDevice_SetAddress.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Command_SendCommand @ 0x1C00184A4 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 *     DeviceSlot_SetDeviceContext @ 0x1C001CF84 (DeviceSlot_SetDeviceContext.c)
 *     Endpoint_Disable_Internal @ 0x1C001D68C (Endpoint_Disable_Internal.c)
 *     Endpoint_SetLogIdentifier @ 0x1C002052C (Endpoint_SetLogIdentifier.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

void __fastcall UsbDevice_EnableCompletion(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  __int64 *v6; // r10
  __int64 v7; // r14
  __int64 *v8; // r12
  int v9; // edx
  int v10; // r8d
  char v11; // r14
  unsigned int v12; // ebp
  unsigned __int8 v13; // al
  int v14; // eax
  int v15; // r8d
  int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+30h] [rbp-68h]
  _QWORD v24[5]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 56);
  v6 = (__int64 *)v3[1];
  v7 = v6[10];
  v8 = (__int64 *)v6[13];
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_q(v6[8], 4u, 0xBu, 0x11u, (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids, *v3);
    v11 = 1;
    v12 = *((_BYTE *)v3 + 448) == 0 ? 0xC0000001 : 0;
  }
  else
  {
    v13 = *(_BYTE *)(a1 + 68);
    if ( v13 == 1 )
    {
      WPP_RECORDER_SF_dq(
        v6[8],
        4u,
        0xBu,
        0x12u,
        (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
        *(unsigned __int8 *)(a1 + 69),
        *v3);
      *((_BYTE *)v3 + 134) = 1;
      *((_BYTE *)v3 + 135) = *(_BYTE *)(a1 + 69);
      Endpoint_SetLogIdentifier(v3[22]);
      memset(*(void **)(v3[53] + 16LL), 0, *(unsigned int *)(v3[53] + 40LL));
      v14 = DeviceSlot_SetDeviceContext(v8, (__int64)v3, *((unsigned __int8 *)v3 + 135), *(_QWORD *)(v3[53] + 24LL));
      if ( v14 >= 0 )
      {
        v3[20] = *(_QWORD *)(v7 + 48) + 4LL * *((unsigned __int8 *)v3 + 135);
        v16 = UsbDevice_SetAddress((__int64)v3, 1);
        if ( v16 >= 0 )
          return;
        LODWORD(v23) = v16;
        LODWORD(v22) = *((unsigned __int8 *)v3 + 135);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v3[1] + 64LL),
          2u,
          0xBu,
          0x14u,
          (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
          v22,
          v23);
        v17 = *(_QWORD *)(v3[1] + 112LL);
        memset(v3 + 57, 0, 0x50uLL);
        if ( !*((_BYTE *)v3 + 448) )
        {
          v3[64] = v3;
          v3[63] = UsbDevice_DisableCompletionReturnFailure;
          *((_DWORD *)v3 + 123) = *((_DWORD *)v3 + 123) & 0xFFFF03FF | 0x2800;
          *((_BYTE *)v3 + 495) = *((_BYTE *)v3 + 135);
          Command_SendCommand(v17, (__int64)(v3 + 57));
          return;
        }
        v15 = 4117;
      }
      else
      {
        LODWORD(v23) = v14;
        LODWORD(v22) = *((unsigned __int8 *)v3 + 135);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v3[1] + 64LL),
          2u,
          0xBu,
          0x13u,
          (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
          v22,
          v23);
        Controller_HwVerifierBreakIfEnabled(
          (_QWORD *)v3[1],
          *v3,
          0,
          0x20000LL,
          "Enable Slot command returned a SlotId value that is already in use",
          (_QWORD *)(a1 + 24),
          a3);
        v15 = 4116;
      }
      Controller_ReportFatalError(v3[1], 2, v15, 0LL, 0LL, 0LL);
      return;
    }
    WPP_RECORDER_SF_L(v6[8], 3u, 0xBu, 0x15u, (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids, v13);
    if ( *(_BYTE *)(a1 + 68) == 9 )
    {
      memset(v24, 0, sizeof(v24));
      v18 = v3[55];
      LOWORD(v24[0]) = 40;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
        WdfDriverGlobals,
        v18,
        v24);
      *(_DWORD *)(v24[1] + 32LL) |= 2u;
    }
    if ( *((_BYTE *)v3 + 448) )
    {
      Controller_ReportFatalError(v3[1], 2, 4118, 0LL, 0LL, 0LL);
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
    v12 = -1073741823;
  }
  v19 = (__int64 *)v3[22];
  LOBYTE(v9) = 1;
  Endpoint_Disable_Internal(v19, v9, v10);
  ESM_AddEvent(v19 + 34);
  if ( v11 )
  {
    v20 = WdfFunctions_01015;
    v21 = v3[55];
    v3[55] = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v20 + 2104))(WdfDriverGlobals, v21, v12);
  }
}
