/*
 * XREFs of ??$Start@AEAPEB_WW4TraceDriverType@@AEAU_GUID@@@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@SA?AV01@AEAPEB_W$$QEAW4TraceDriverType@@AEAU_GUID@@@Z @ 0x18008C880
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@_NPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x180089D6C (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@_NPEAV-$.c)
 * Callees:
 *     ?StartActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x18008E924 (-StartActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDri.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall HolographicDriverClientTrace::TelemetryOpenHolographicDevice::Start<wchar_t const * &,enum TraceDriverType,_GUID &>(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v8; // rcx

  *(_QWORD *)(a1 + 16) = a1;
  v4 = a1 + 56;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  v8 = (_QWORD *)(a1 + 136);
  *(_BYTE *)(v4 + 4) = 0;
  *(_BYTE *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = "TelemetryOpenHolographicDevice";
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_QWORD *)(v4 + 72) = 1LL;
  v8[18] = 0LL;
  v8[19] = 0LL;
  memset(v8, 0, 0x90uLL);
  *(_QWORD *)(v4 + 240) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)a1 = &HolographicDriverClientTrace::TelemetryOpenHolographicDevice::`vftable';
  HolographicDriverClientTrace::TelemetryOpenHolographicDevice::StartActivity(a1, *a2, *a3, a4);
  return a1;
}
