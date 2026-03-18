/*
 * XREFs of UsbDevice_UcxEvtDisable @ 0x1C0031D10
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
 *     RootHub_DisableLPMForSlot @ 0x1C0026F24 (RootHub_DisableLPMForSlot.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0031A44 (UsbDevice_SetDeviceDisabled.c)
 */

void __fastcall UsbDevice_UcxEvtDisable(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi
  KIRQL v9; // al
  int v10; // [rsp+28h] [rbp-60h]
  __int64 v11; // [rsp+28h] [rbp-60h]
  _QWORD v12[5]; // [rsp+40h] [rbp-48h] BYREF

  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v12);
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v12[1] + 16LL),
                   off_1C0043250);
  v4 = v3[1];
  v5 = *(_QWORD *)(v4 + 112);
  v10 = *((unsigned __int8 *)v3 + 135);
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(v4 + 64),
    4u,
    0xBu,
    0x31u,
    (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
    v10,
    *v3);
  if ( !*((_BYTE *)v3 + 134) )
  {
    LODWORD(v11) = *((unsigned __int8 *)v3 + 135);
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v3[1] + 64LL),
      4u,
      0xBu,
      0x32u,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
      v11,
      *v3);
    Endpoint_Disable(v3[22]);
    v6 = v3 + 23;
    v7 = 30LL;
    do
    {
      if ( *v6 )
      {
        Endpoint_Disable(*v6);
        *v6 = 0LL;
      }
      ++v6;
      --v7;
    }
    while ( v7 );
    goto LABEL_6;
  }
  if ( *((_BYTE *)v3 + 552) )
    RootHub_DisableLPMForSlot(*(_QWORD **)(v3[1] + 120LL), *((_DWORD *)v3 + 11), *((unsigned __int8 *)v3 + 135));
  if ( *((_BYTE *)v3 + 553) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v3[1] + 120LL) + 48LL) + 56LL * (unsigned int)(*((_DWORD *)v3 + 11) - 1);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 16));
    --*(_DWORD *)(v8 + 40);
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 16), v9);
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
