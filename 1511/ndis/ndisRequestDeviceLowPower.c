/*
 * XREFs of ndisRequestDeviceLowPower @ 0x1C0097E18
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x1C00661F0 (NdisMIdleNotificationConfirm.c)
 *     ndisSetSystemPower @ 0x1C0097BD0 (ndisSetSystemPower.c)
 *     ndisMediaDisconnectWorker @ 0x1C00CE7D0 (ndisMediaDisconnectWorker.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00D6F28 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?NdisTraceLoggingRequestDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@W4_NDIS_MINIPORT_EVENT@@J@Z @ 0x1C00124F8 (-NdisTraceLoggingRequestDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@W4_NDIS_MIN.c)
 *     ndisLogMiniportEvent @ 0x1C00194EC (ndisLogMiniportEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     Template_jqx @ 0x1C005EDD8 (Template_jqx.c)
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
    (*(void (__fastcall **)(unsigned __int64))(*((_QWORD *)a1[59].EnableCallback + 45) + 48LL))(a1->KeywordAll);
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
    if ( v10 != 259 && (unsigned __int8)byte_1C0083715 >= 2u )
      WPP_SF_dq(0x92u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10, a1);
  }
  NdisTraceLoggingRequestDxState(a1, a2, a5);
  return v11;
}
