/*
 * XREFs of UsbDevice_EnableCompletion @ 0x1C002EEB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_L @ 0x1C00024B0 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0005328 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Command_SendCommand @ 0x1C001278C (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     DeviceSlot_SetDeviceContext @ 0x1C0017004 (DeviceSlot_SetDeviceContext.c)
 *     Endpoint_Disable @ 0x1C00176D0 (Endpoint_Disable.c)
 *     Endpoint_SetLogIdentifier @ 0x1C001A4A8 (Endpoint_SetLogIdentifier.c)
 *     UsbDevice_SetAddress @ 0x1C002FEE4 (UsbDevice_SetAddress.c)
 */

void __fastcall UsbDevice_EnableCompletion(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  __int64 *v6; // r10
  __int64 v7; // r14
  __int64 *v8; // r12
  char v9; // bp
  unsigned int v10; // esi
  unsigned __int8 v11; // al
  int v12; // eax
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+28h] [rbp-70h]
  int v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  _QWORD v23[5]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 56);
  v6 = (__int64 *)v3[1];
  v7 = v6[10];
  v8 = (__int64 *)v6[13];
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_q(v6[8], 4u, 0xBu, 0x11u, (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids, *v3);
    v9 = 1;
    v10 = *((_BYTE *)v3 + 448) == 0 ? 0xC0000001 : 0;
  }
  else
  {
    v11 = *(_BYTE *)(a1 + 68);
    if ( v11 == 1 )
    {
      v19 = *(unsigned __int8 *)(a1 + 69);
      WPP_RECORDER_SF_dq(v6[8], 4u, 0xBu, 0x12u, (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids, v19, *v3);
      *((_BYTE *)v3 + 134) = 1;
      *((_BYTE *)v3 + 135) = *(_BYTE *)(a1 + 69);
      Endpoint_SetLogIdentifier(v3[22]);
      memset(*(void **)(v3[53] + 16LL), 0, *(unsigned int *)(v3[53] + 40LL));
      v12 = DeviceSlot_SetDeviceContext(v8, (__int64)v3, *((unsigned __int8 *)v3 + 135), *(_QWORD *)(v3[53] + 24LL));
      if ( v12 >= 0 )
      {
        LOBYTE(v13) = 1;
        v3[20] = *(_QWORD *)(v7 + 48) + 4LL * *((unsigned __int8 *)v3 + 135);
        v15 = UsbDevice_SetAddress(v3, v13);
        if ( v15 >= 0 )
          return;
        LODWORD(v22) = v15;
        LODWORD(v20) = *((unsigned __int8 *)v3 + 135);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v3[1] + 64LL),
          2u,
          0xBu,
          0x14u,
          (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
          v20,
          v22);
        v16 = *(_QWORD *)(v3[1] + 112LL);
        memset(v3 + 57, 0, 0x50uLL);
        if ( !*((_BYTE *)v3 + 448) )
        {
          v3[64] = v3;
          v3[63] = UsbDevice_DisableCompletionReturnFailure;
          *((_DWORD *)v3 + 123) = *((_DWORD *)v3 + 123) & 0xFFFF03FF | 0x2800;
          *((_BYTE *)v3 + 495) = *((_BYTE *)v3 + 135);
          Command_SendCommand(v16, (__int64)(v3 + 57));
          return;
        }
        v14 = 4117;
      }
      else
      {
        LODWORD(v22) = v12;
        LODWORD(v20) = *((unsigned __int8 *)v3 + 135);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v3[1] + 64LL),
          2u,
          0xBu,
          0x13u,
          (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
          v20,
          v22);
        Controller_HwVerifierBreakIfEnabled(
          (_QWORD *)v3[1],
          *v3,
          0,
          0x20000LL,
          "Enable Slot command returned a SlotId value that is already in use",
          (_QWORD *)(a1 + 24),
          a3);
        v14 = 4116;
      }
      Controller_ReportFatalError(v3[1], 2, v14, 0LL, 0LL, 0LL);
      return;
    }
    v21 = v11;
    WPP_RECORDER_SF_L(v6[8], 3u, 0xBu, 0x15u, (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids, v21);
    if ( *(_BYTE *)(a1 + 68) == 9 )
    {
      memset(v23, 0, sizeof(v23));
      v17 = v3[55];
      LOWORD(v23[0]) = 40;
      (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
        v17,
        v23);
      *(_DWORD *)(v23[1] + 32LL) |= 2u;
    }
    if ( *((_BYTE *)v3 + 448) )
    {
      Controller_ReportFatalError(v3[1], 2, 4118, 0LL, 0LL, 0LL);
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
    v10 = -1073741823;
  }
  Endpoint_Disable(v3[22]);
  if ( v9 )
  {
    v18 = v3[55];
    v3[55] = 0LL;
    (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      v18,
      v10);
  }
}
