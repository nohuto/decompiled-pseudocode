/*
 * XREFs of ndisMInvokeInitialize @ 0x1C00AC4D4
 * Callers:
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C001B708 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRAC.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeInitialize(const struct _TlgProvider_t *a1, __int64 a2)
{
  void (__fastcall *EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdi
  unsigned int v5; // esi
  NdisStopwatch v7; // [rsp+30h] [rbp-28h] BYREF

  EnableCallback = a1[59].EnableCallback;
  memset(&v7, 0, sizeof(v7));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xCBu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, EnableCallback);
  v7.QpcStartTime = KeQueryPerformanceCounter(&v7.QpFrequency);
  v5 = (*((__int64 (__fastcall **)(const struct _TlgProvider_t *, _QWORD, __int64))EnableCallback + 17))(
         a1,
         *((_QWORD *)EnableCallback + 8),
         a2);
  v7.QpcLastStopTime = KeQueryPerformanceCounter(0LL);
  NdisTraceLoggingDeviceInitialized(a1, &v7, v5 != 0 ? 0xB : 0, v5);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0xCCu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, EnableCallback, v5);
  return v5;
}
