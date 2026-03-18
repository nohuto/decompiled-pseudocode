/*
 * XREFs of ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800AFD6C
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAUIDWMCoRenderEngine@@@Z @ 0x180090F20 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAUIDWMCoRende.c)
 * Callees:
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

CTelemetryTouchLatencyAnalysis *__fastcall CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis(
        CTelemetryTouchLatencyAnalysis *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rax
  _OWORD v11[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v12; // [rsp+A0h] [rbp-18h]
  LARGE_INTEGER Frequency; // [rsp+C0h] [rbp+8h] BYREF

  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 231) = 0LL;
  memset_0((char *)this + 16, 0, 0x690uLL);
  *(_QWORD *)&v11[0] = 0LL;
  memset_0((char *)v11 + 8, 0, 0x80uLL);
  v2 = v11[1];
  *((_OWORD *)this + 106) = v11[0];
  v3 = v11[2];
  *((_OWORD *)this + 107) = v2;
  v4 = v11[3];
  *((_OWORD *)this + 108) = v3;
  v5 = v11[4];
  *((_OWORD *)this + 109) = v4;
  v6 = v11[5];
  *((_OWORD *)this + 110) = v5;
  v7 = v11[6];
  *((_OWORD *)this + 111) = v6;
  v8 = v11[7];
  v9 = v12;
  *((_OWORD *)this + 112) = v7;
  *((_OWORD *)this + 113) = v8;
  *((_QWORD *)this + 228) = v9;
  if ( QueryPerformanceFrequency(&Frequency) )
    *((_QWORD *)this + 229) = Frequency.QuadPart / 1000;
  else
    *((_QWORD *)this + 229) = 0LL;
  return this;
}
