/*
 * XREFs of Endpoint_GetDequeuePointer @ 0x1C001E62C
 * Callers:
 *     UsbDevice_SetAddress @ 0x1C0010420 (UsbDevice_SetAddress.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C001D1E0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_Enable @ 0x1C001D8B0 (Endpoint_Enable.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C001EAB0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C001EC70 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C001F25C (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001F630 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C001FA24 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0020990 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0021900 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C002DE50 (UsbDevice_InitializeEndpointContext.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C0035A58 (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Endpoint_GetDequeuePointer(__int64 a1, int a2)
{
  if ( !*(_BYTE *)(a1 + 37) )
    return TR_GetDequeuePointer(*(_QWORD *)(a1 + 88));
  if ( a2 )
    return TR_GetDequeuePointer(*(_QWORD *)(88LL * (unsigned int)(a2 - 1) + *(_QWORD *)(a1 + 136) + 40));
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 32LL) + 24LL);
}
