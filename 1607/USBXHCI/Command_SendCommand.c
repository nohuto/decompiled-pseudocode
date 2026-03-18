/*
 * XREFs of Command_SendCommand @ 0x1C001C18C
 * Callers:
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0004DA8 (Command_D0EntryPostInterruptsEnabled.c)
 *     UsbDevice_SetAddress @ 0x1C000F87C (UsbDevice_SetAddress.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0020F30 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C00224B0 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C00227B0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0022968 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0022F38 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C00232F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C00236E0 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C0023AF4 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C0023B88 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C0023CB8 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C00245E0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_DisableCompletion @ 0x1C00303A4 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0030630 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00309B0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C003143C (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0031780 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0031D10 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0031F70 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0032110 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0032920 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0032B80 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0005C54 (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C001BC70 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_qL @ 0x1C001CC74 (WPP_RECORDER_SF_qL.c)
 */

void __fastcall Command_SendCommand(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // r8d
  KIRQL v6; // r14
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned int v9; // ebp
  __int64 v10; // rdx

  if ( !Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qL(
      *(_QWORD *)(a1 + 16),
      v4,
      6,
      56,
      (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
      a2,
      (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2);
    *(_BYTE *)(a2 + 68) = 0;
LABEL_12:
    v10 = 3LL;
    goto LABEL_13;
  }
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
  if ( v7 && (v8 = *(__int64 (__fastcall **)(__int64, __int64))(v7 + 16)) != 0LL )
    v9 = v8(v7, a2);
  else
    v9 = 4;
  if ( v9 == 4 )
  {
    if ( *(_DWORD *)(a1 + 36) != 5 )
    {
      Command_InternalSendCommand(a1, a2, v5);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 128), v6);
      return;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 128), v6);
    goto LABEL_12;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 128), v6);
  v10 = v9;
LABEL_13:
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(a2 + 48))(a2, v10, 0LL);
}
