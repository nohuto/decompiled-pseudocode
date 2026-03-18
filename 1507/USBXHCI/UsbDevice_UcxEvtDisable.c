/*
 * XREFs of UsbDevice_UcxEvtDisable @ 0x1C00308A0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C00042C8 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0005328 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Command_SendCommand @ 0x1C001278C (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x1C00176D0 (Endpoint_Disable.c)
 *     RootHub_DisableLPMForSlot @ 0x1C001E32C (RootHub_DisableLPMForSlot.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C00304F4 (UsbDevice_SetDeviceDisabled.c)
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
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    a2,
    v12);
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                   WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                   *(_QWORD *)(v12[1] + 16LL),
                   off_1C00402E8);
  v4 = v3[1];
  v5 = *(_QWORD *)(v4 + 112);
  v10 = *((unsigned __int8 *)v3 + 135);
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(v4 + 64),
    4u,
    0xBu,
    0x31u,
    (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
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
      (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
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
    (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
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
