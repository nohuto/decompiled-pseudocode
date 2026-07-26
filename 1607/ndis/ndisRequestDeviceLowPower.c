/*
 * XREFs of ndisRequestDeviceLowPower @ 0x1C009C64C
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x1C006B1E0 (NdisMIdleNotificationConfirm.c)
 *     ndisSetSystemPower @ 0x1C009C3F4 (ndisSetSystemPower.c)
 *     ndisMediaDisconnectWorker @ 0x1C00D4820 (ndisMediaDisconnectWorker.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00DCEDC (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?NdisTraceLoggingRequestDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@W4_NDIS_MINIPORT_EVENT@@J@Z @ 0x1C0011450 (-NdisTraceLoggingRequestDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@W4_NDIS_MIN.c)
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     Template_jqx @ 0x1C0062DC8 (Template_jqx.c)
 */

__int64 __fastcall ndisRequestDeviceLowPower(
        const struct _TlgProvider_t *a1,
        enum _DEVICE_POWER_STATE a2,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        enum _NDIS_MINIPORT_EVENT a5)
{
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  unsigned int v11; // edi

  ndisLogMiniportEvent((__int64)a1, a5);
  if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    Template_jqx(
      v9,
      &DevicePowerDownRequested,
      (const GUID *)&a1[63].RegHandle,
      (unsigned __int64)&a1[63].RegHandle,
      a1[64].KeywordAny,
      (char)a1[63].CallbackContext);
  _InterlockedOr((volatile signed __int32 *)&a1[70].ProviderMetadataPtr, 4u);
  if ( (LODWORD(a1[1].AnnotationFunc) & 0x80u) != 0 )
  {
    v11 = 259;
  }
  else
  {
    v10 = PoRequestPowerIrp(
            (PDEVICE_OBJECT)a1[60].CallbackContext,
            2u,
            (POWER_STATE)a2,
            CompletionFunction,
            Context,
            0LL);
    v11 = v10;
    if ( v10 != 259 && (unsigned __int8)byte_1C00895D5 >= 2u )
      WPP_SF_dq(0x93u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, v10, a1);
  }
  NdisTraceLoggingRequestDxState(a1, a2, a5);
  return v11;
}
