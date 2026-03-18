/*
 * XREFs of Command_SendCommand @ 0x1C00184A4
 * Callers:
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C00051FC (Command_D0EntryPostInterruptsEnabled.c)
 *     UsbDevice_SetAddress @ 0x1C0010420 (UsbDevice_SetAddress.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C001D1E0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C001E794 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C001EAB0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C001EC70 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C001F25C (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001F630 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C001FA24 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C001FE64 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C001FF00 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C0020038 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0020990 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_DisableCompletion @ 0x1C002CFB0 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C002D280 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C002D610 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C002E144 (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C002E490 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C002EA60 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C002ECF0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C002EEB0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C002F730 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C002F9C0 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C0017F70 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0018F9C (WPP_RECORDER_SF_qL.c)
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
