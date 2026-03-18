/*
 * XREFs of ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18011EE3C
 * Callers:
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18011E9A0 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x180110DC4 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAXPEAPEAVIRenderTargetBitmap@@@Z @ 0x180172BB0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 */

__int64 __fastcall CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
        CMagnifierRenderTarget *this,
        __int64 a2,
        struct _LUID a3,
        HMONITOR a4,
        struct IRenderTargetBitmap **a5)
{
  struct IRenderTargetBitmap **v5; // r15
  CDisplaySet *v6; // rdi
  int v7; // eax
  __int128 v9; // xmm0
  __int64 v11; // xmm1_8
  int CurrentDisplaySet; // eax
  unsigned int v14; // ebx
  int DisplayIdFromMonitor; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  int v20[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+B0h] [rbp+40h] BYREF
  struct _LUID v23; // [rsp+C0h] [rbp+50h]
  CDisplaySet *v24; // [rsp+C8h] [rbp+58h] BYREF

  v23 = a3;
  v5 = a5;
  v6 = 0LL;
  v7 = DisplayId::None;
  v9 = *((_OWORD *)this + 22);
  HIDWORD(a5) = 0;
  v11 = *((_QWORD *)this + 46);
  *v5 = 0LL;
  v24 = 0LL;
  v22 = v7;
  v21 = v11;
  LODWORD(a5) = 2;
  *(_OWORD *)v20 = v9;
  if ( a4 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v24);
    v14 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, CurrentDisplaySet, 0x394u);
      v6 = v24;
      goto LABEL_8;
    }
    v6 = v24;
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v24, a4, (struct DisplayId *)&v22);
    v14 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, DisplayIdFromMonitor, 0x395u);
      goto LABEL_8;
    }
    a3 = v23;
    v7 = v22;
  }
  v18 = CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
          (int)&qword_1801F0020,
          (int)a5,
          0,
          (int)v20,
          (struct _GUID *)(*((_QWORD *)this + 2) + 252LL),
          a3,
          v7,
          a2,
          (__int64)v5);
  v14 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, v18, 0x3A4u);
LABEL_8:
  if ( v6 )
    CDisplaySet::Release(v6, v16, v17);
  return v14;
}
