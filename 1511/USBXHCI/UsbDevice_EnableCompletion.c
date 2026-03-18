/*
 * XREFs of UsbDevice_EnableCompletion @ 0x1C00300C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_L @ 0x1C0005610 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_q @ 0x1C0008E10 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0009894 (WPP_RECORDER_SF_dq.c)
 *     UsbDevice_SetAddress @ 0x1C00100F8 (UsbDevice_SetAddress.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Command_SendCommand @ 0x1C001BD2C (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E4B0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     DeviceSlot_SetDeviceContext @ 0x1C0020718 (DeviceSlot_SetDeviceContext.c)
 *     Endpoint_Disable @ 0x1C0020DE0 (Endpoint_Disable.c)
 *     Endpoint_SetLogIdentifier @ 0x1C0023B98 (Endpoint_SetLogIdentifier.c)
 */

void __fastcall UsbDevice_EnableCompletion(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 *v6; // r10
  __int64 v7; // r14
  __int64 *v8; // r12
  char v9; // bp
  unsigned int v10; // esi
  unsigned __int8 v11; // al
  int v12; // eax
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+28h] [rbp-70h]
  int v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  _QWORD v23[5]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v6 = *(__int64 **)(v3 + 8);
  v7 = v6[10];
  v8 = (__int64 *)v6[13];
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_q(v6[8], 4u, 0xBu, 0x11u, (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids, *(_QWORD *)v3);
    v9 = 1;
    v10 = *(_BYTE *)(v3 + 448) == 0 ? 0xC0000001 : 0;
  }
  else
  {
    v11 = *(_BYTE *)(a1 + 68);
    if ( v11 == 1 )
    {
      v19 = *(unsigned __int8 *)(a1 + 69);
      WPP_RECORDER_SF_dq(
        v6[8],
        4u,
        0xBu,
        0x12u,
        (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
        v19,
        *(_QWORD *)v3);
      *(_BYTE *)(v3 + 134) = 1;
      *(_BYTE *)(v3 + 135) = *(_BYTE *)(a1 + 69);
      Endpoint_SetLogIdentifier(*(_QWORD *)(v3 + 176));
      memset(*(void **)(*(_QWORD *)(v3 + 424) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(v3 + 424) + 40LL));
      v12 = DeviceSlot_SetDeviceContext(
              v8,
              v3,
              *(unsigned __int8 *)(v3 + 135),
              *(_QWORD *)(*(_QWORD *)(v3 + 424) + 24LL));
      if ( v12 >= 0 )
      {
        *(_QWORD *)(v3 + 160) = *(_QWORD *)(v7 + 48) + 4LL * *(unsigned __int8 *)(v3 + 135);
        v14 = UsbDevice_SetAddress(v3, 1);
        if ( v14 >= 0 )
          return;
        LODWORD(v22) = v14;
        LODWORD(v20) = *(unsigned __int8 *)(v3 + 135);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          2u,
          0xBu,
          0x14u,
          (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
          v20,
          v22);
        v15 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 112LL);
        memset((void *)(v3 + 456), 0, 0x50uLL);
        if ( !*(_BYTE *)(v3 + 448) )
        {
          *(_QWORD *)(v3 + 512) = v3;
          *(_QWORD *)(v3 + 504) = UsbDevice_DisableCompletionReturnFailure;
          *(_DWORD *)(v3 + 492) = *(_DWORD *)(v3 + 492) & 0xFFFF03FF | 0x2800;
          *(_BYTE *)(v3 + 495) = *(_BYTE *)(v3 + 135);
          Command_SendCommand(v15, v3 + 456);
          return;
        }
        v13 = 4117;
      }
      else
      {
        LODWORD(v22) = v12;
        LODWORD(v20) = *(unsigned __int8 *)(v3 + 135);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          2u,
          0xBu,
          0x13u,
          (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
          v20,
          v22);
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD **)(v3 + 8),
          *(_QWORD *)v3,
          0,
          0x20000LL,
          "Enable Slot command returned a SlotId value that is already in use",
          (_QWORD *)(a1 + 24),
          a3);
        v13 = 4116;
      }
      Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, v13, 0LL, 0LL, 0LL);
      return;
    }
    v21 = v11;
    WPP_RECORDER_SF_L(v6[8], 3u, 0xBu, 0x15u, (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids, v21);
    if ( *(_BYTE *)(a1 + 68) == 9 )
    {
      memset(v23, 0, sizeof(v23));
      v16 = *(_QWORD *)(v3 + 440);
      LOWORD(v23[0]) = 40;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
        WdfDriverGlobals,
        v16,
        v23);
      *(_DWORD *)(v23[1] + 32LL) |= 2u;
    }
    if ( *(_BYTE *)(v3 + 448) )
    {
      Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4118, 0LL, 0LL, 0LL);
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
    v10 = -1073741823;
  }
  Endpoint_Disable(*(_QWORD *)(v3 + 176));
  if ( v9 )
  {
    v17 = WdfFunctions_01015;
    v18 = *(_QWORD *)(v3 + 440);
    *(_QWORD *)(v3 + 440) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v17 + 2104))(WdfDriverGlobals, v18, v10);
  }
}
