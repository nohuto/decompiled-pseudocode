/*
 * XREFs of Command_SendCommand @ 0x1C001278C
 * Callers:
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0004DB8 (Command_D0EntryPostInterruptsEnabled.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0017230 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C00187C4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0018AC0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0018C78 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019248 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0019600 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C00199F0 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C0019E04 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C0019E98 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C0019FC8 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001ACF0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_DisableCompletion @ 0x1C002EC24 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C002EEB0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C002F230 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C002FC4C (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddress @ 0x1C002FEE4 (UsbDevice_SetAddress.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0030230 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00308A0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0030B00 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0030CA0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0031450 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C00316B0 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C00042C8 (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C0012270 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0013270 (WPP_RECORDER_SF_qL.c)
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
      (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
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
