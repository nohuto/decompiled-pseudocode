/*
 * XREFs of ?RecordOutOfFrameDirectFlipStats@CCompositionSurfaceInfo@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x180119548
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800655A0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogRenderTarget@@AEAA_NXZ @ 0x180126970 (-ProcessExclusiveSurfaceUpdate@CAnalogRenderTarget@@AEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::RecordOutOfFrameDirectFlipStats(
        CCompositionSurfaceInfo *this,
        __int64 a2,
        const struct DXGI_FRAME_STATISTICS *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v3 = 0;
  v4 = NtSetCompositionSurfaceStatistics(*((_QWORD *)this + 4), &v6, a3);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4 | 0x10000000, 0xE6u);
  }
  return v3;
}
