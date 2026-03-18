/*
 * XREFs of UsbDevice_UcxEvtDisable @ 0x1C002EA60
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
 *     RootHub_DisableLPMForSlot @ 0x1C0023448 (RootHub_DisableLPMForSlot.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C002E75C (UsbDevice_SetDeviceDisabled.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

void __fastcall UsbDevice_UcxEvtDisable(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 *v6; // rdi
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // r8d
  __int64 **v11; // rsi
  __int64 v12; // r14
  __int64 *v13; // rdi
  __int64 v14; // rdi
  KIRQL v15; // al
  __int64 v16; // [rsp+28h] [rbp-60h]
  _QWORD v17[5]; // [rsp+40h] [rbp-48h] BYREF

  memset(v17, 0, sizeof(v17));
  LOWORD(v17[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v17);
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v17[1] + 16LL),
                   off_1C0045250);
  v4 = v3[1];
  v5 = *(_QWORD *)(v4 + 112);
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(v4 + 64),
    4u,
    0xBu,
    0x31u,
    (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
    *((unsigned __int8 *)v3 + 135),
    *v3);
  if ( !*((_BYTE *)v3 + 134) )
  {
    LODWORD(v16) = *((unsigned __int8 *)v3 + 135);
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v3[1] + 64LL),
      4u,
      0xBu,
      0x32u,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
      v16,
      *v3);
    v6 = (__int64 *)v3[22];
    LOBYTE(v7) = 1;
    Endpoint_Disable_Internal(v6, v7, v8);
    ESM_AddEvent(v6 + 34);
    v11 = (__int64 **)(v3 + 23);
    v12 = 30LL;
    do
    {
      v13 = *v11;
      if ( *v11 )
      {
        LOBYTE(v9) = 1;
        Endpoint_Disable_Internal(*v11, v9, v10);
        ESM_AddEvent(v13 + 34);
        *v11 = 0LL;
      }
      ++v11;
      --v12;
    }
    while ( v12 );
    goto LABEL_6;
  }
  if ( *((_BYTE *)v3 + 552) )
    RootHub_DisableLPMForSlot(*(_QWORD **)(v3[1] + 120LL), *((_DWORD *)v3 + 11), *((unsigned __int8 *)v3 + 135));
  if ( *((_BYTE *)v3 + 553) )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v3[1] + 120LL) + 48LL) + 56LL * (unsigned int)(*((_DWORD *)v3 + 11) - 1);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 16));
    --*(_DWORD *)(v14 + 40);
    KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 16), v15);
  }
  if ( !Controller_IsControllerAccessible(v3[1]) )
  {
    UsbDevice_SetDeviceDisabled((__int64)v3);
LABEL_6:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
      WdfDriverGlobals,
      a2,
      0LL);
    return;
  }
  v3[55] = a2;
  *((_BYTE *)v3 + 448) = 1;
  memset(v3 + 57, 0, 0x50uLL);
  v3[64] = v3;
  v3[63] = UsbDevice_DisableCompletionReturnSuccess;
  *((_DWORD *)v3 + 123) = *((_DWORD *)v3 + 123) & 0xFFFF03FF | 0x2800;
  *((_BYTE *)v3 + 495) = *((_BYTE *)v3 + 135);
  Command_SendCommand(v5, (__int64)(v3 + 57));
}
