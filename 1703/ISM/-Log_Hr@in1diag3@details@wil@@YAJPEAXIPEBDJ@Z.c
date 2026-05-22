/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180092AF0
 * Callers:
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180090D68 (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?StopActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x180091550 (-StopActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 *     ??1?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180091964 (--1-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?StopActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ @ 0x180091E10 (-StopActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180092248 (-Stop@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 *     ?StopActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ @ 0x1800926E0 (-StopActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ.c)
 *     ??1?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180092B34 (--1-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ?StopActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x180093BB0 (-StopActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180002F78 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  wil::details::ReportFailure_Hr(
    (__int64)this,
    0x3AEu,
    (__int64)"internal\\sdk\\inc\\wil\\result.h",
    0LL,
    0LL,
    retaddr,
    2,
    (unsigned int)a4);
  return v4;
}
