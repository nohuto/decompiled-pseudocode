/*
 * XREFs of ndisMInvokeInitialize @ 0x1C00A043C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C00F5230 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C0014144 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRAC.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeInitialize(const struct _TlgProvider_t *a1, __int64 a2)
{
  void (__fastcall *EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdi
  unsigned int v5; // esi
  unsigned int v7; // [rsp+20h] [rbp-38h]
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-18h]

  EnableCallback = a1[59].EnableCallback;
  PerformanceCounter.QuadPart = 0LL;
  v8 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xC8u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, EnableCallback);
  *(LARGE_INTEGER *)&v8 = KeQueryPerformanceCounter((PLARGE_INTEGER)&v8 + 1);
  v5 = (*((__int64 (__fastcall **)(const struct _TlgProvider_t *, _QWORD, __int64))EnableCallback + 17))(
         a1,
         *((_QWORD *)EnableCallback + 8),
         a2);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  NdisTraceLoggingDeviceInitialized(a1, (__int64)&v8, v5 != 0 ? 0xB : 0, v5);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v7 = v5;
    WPP_SF_qqd(0xC9u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, EnableCallback, v7);
  }
  return v5;
}
