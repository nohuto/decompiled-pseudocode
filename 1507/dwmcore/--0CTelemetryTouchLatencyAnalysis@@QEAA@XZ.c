/*
 * XREFs of ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180094F08
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAUIDWMCoRenderEngine@@@Z @ 0x180094C7C (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAUIDWMCoRende.c)
 * Callees:
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

CTelemetryTouchLatencyAnalysis *__fastcall CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis(
        CTelemetryTouchLatencyAnalysis *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD v8[6]; // [rsp+20h] [rbp-68h] BYREF
  LARGE_INTEGER Frequency; // [rsp+90h] [rbp+8h] BYREF

  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 216) = 0LL;
  memset_0((char *)this + 16, 0, 0x640uLL);
  *(_QWORD *)&v8[0] = 0LL;
  memset_0((char *)v8 + 8, 0, 0x58uLL);
  v2 = v8[1];
  *((_OWORD *)this + 101) = v8[0];
  v3 = v8[2];
  *((_OWORD *)this + 102) = v2;
  v4 = v8[3];
  *((_OWORD *)this + 103) = v3;
  v5 = v8[4];
  *((_OWORD *)this + 104) = v4;
  v6 = v8[5];
  *((_OWORD *)this + 105) = v5;
  *((_OWORD *)this + 106) = v6;
  if ( QueryPerformanceFrequency(&Frequency) )
    *((_QWORD *)this + 214) = Frequency.QuadPart / 1000;
  else
    *((_QWORD *)this + 214) = 0LL;
  return this;
}
