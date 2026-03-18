/*
 * XREFs of ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18010838C
 * Callers:
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x180107DF8 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18001D708 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAXPEAPEAVIRenderTargetBitmap@@@Z @ 0x180144DC0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
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
  int v16; // eax
  int v18[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+B0h] [rbp+40h] BYREF
  struct _LUID v21; // [rsp+C0h] [rbp+50h]
  CDisplaySet *v22; // [rsp+C8h] [rbp+58h] BYREF

  v21 = a3;
  v5 = a5;
  v6 = 0LL;
  v7 = DisplayId::None;
  v9 = *(_OWORD *)((char *)this + 280);
  HIDWORD(a5) = 0;
  v11 = *((_QWORD *)this + 37);
  *v5 = 0LL;
  v22 = 0LL;
  v20 = v7;
  v19 = v11;
  LODWORD(a5) = 2;
  *(_OWORD *)v18 = v9;
  if ( a4 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v22);
    v14 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180183F24, 1u, CurrentDisplaySet, 0x3AAu);
      v6 = v22;
      goto LABEL_9;
    }
    v6 = v22;
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v22, a4, (struct DisplayId *)&v20);
    v14 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180183F24, 1u, DisplayIdFromMonitor, 0x3ABu);
      goto LABEL_9;
    }
    a3 = v21;
    v7 = v20;
  }
  v16 = CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
          (int)&qword_1801A3D80,
          (int)a5,
          0,
          (int)v18,
          (struct _GUID *)(*((_QWORD *)this + 2) + 252LL),
          a3,
          v7,
          a2,
          (__int64)v5);
  v14 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_180183F24, 1u, v16, 0x3BAu);
LABEL_9:
  if ( v6 )
    CDisplaySet::Release(v6);
  return v14;
}
