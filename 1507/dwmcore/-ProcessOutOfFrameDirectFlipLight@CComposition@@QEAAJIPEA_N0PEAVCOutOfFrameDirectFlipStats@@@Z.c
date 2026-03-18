/*
 * XREFs of ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x180005C34
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180066480 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 * Callees:
 *     ?AreAnimateUpdatesRequired@CComposition@@IEAA_NXZ @ 0x180005B24 (-AreAnimateUpdatesRequired@CComposition@@IEAA_NXZ.c)
 *     ?Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ @ 0x180005EC0 (-Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ.c)
 *     ?IsOutOfFrameOptimizationDisabled@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180005F50 (-IsOutOfFrameOptimizationDisabled@COutOfFrameDirectFlipInfo@@QEBA_NXZ.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x180006914 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?NeedsPresent@CDirectFlipInfo@@QEAA_NXZ @ 0x180006994 (-NeedsPresent@CDirectFlipInfo@@QEAA_NXZ.c)
 *     ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x1800077A4 (-AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?Init@COutOfFrameDirectFlipStats@@QEAAXPEAVCCompositionSurfaceInfo@@I@Z @ 0x180010098 (-Init@COutOfFrameDirectFlipStats@@QEAAXPEAVCCompositionSurfaceInfo@@I@Z.c)
 *     ?FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ @ 0x180049D04 (-FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ.c)
 *     ?Reset@COutOfFrameDirectFlipStats@@QEAAXXZ @ 0x18005ECA0 (-Reset@COutOfFrameDirectFlipStats@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     ?ProcessSurfaceUpdate@COutOfFrameDirectFlipInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800EEDE0 (-ProcessSurfaceUpdate@COutOfFrameDirectFlipInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     Template_q @ 0x1800F7910 (Template_q.c)
 */

__int64 __fastcall CComposition::ProcessOutOfFrameDirectFlipLight(
        CComposition *this,
        int a2,
        bool *a3,
        bool *a4,
        struct COutOfFrameDirectFlipStats *a5)
{
  unsigned int v5; // ebx
  CRenderTargetManager *v7; // rcx
  unsigned int v8; // edi
  struct COutOfFrameDirectFlipInfo *OutOfFrameDirectFlipInfo; // rsi
  __int64 v13; // rcx
  HGDIOBJ v14; // rcx
  int OutOfFrameDirectFlipSurfaceUpdates; // eax
  unsigned int v16; // r14d
  int v17; // eax
  unsigned int v18; // edx
  unsigned int v20; // [rsp+20h] [rbp-E0h]
  unsigned int v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  COutOfFrameDirectFlipStats *v24; // [rsp+40h] [rbp-C0h]
  HGDIOBJ v25[166]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = 0;
  v24 = a5;
  v7 = (CRenderTargetManager *)*((_QWORD *)this + 4);
  v8 = 0;
  v21 = 0;
  v23 = 0;
  v22 = 1;
  OutOfFrameDirectFlipInfo = CRenderTargetManager::FindOutOfFrameDirectFlipInfo(v7);
  *a3 = 0;
  *a4 = 0;
  COutOfFrameDirectFlipStats::Reset(a5);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v13, &EVTDESC_SCHEDULE_RENDER_DFLIPLIGHT_Start);
  if ( COutOfFrameDirectFlipInfo::IsOutOfFrameOptimizationDisabled(OutOfFrameDirectFlipInfo)
    || CComposition::AreAnimateUpdatesRequired(this)
    || CRenderTargetManager::AlwaysNeedsRenderPass(*((CRenderTargetManager **)this + 4))
    || *((_QWORD *)this + 64) )
  {
    goto LABEL_13;
  }
  OutOfFrameDirectFlipSurfaceUpdates = NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates(
                                         (unsigned int)(a2 + 1),
                                         v25,
                                         5LL,
                                         &v21,
                                         &v23,
                                         &v22);
  if ( OutOfFrameDirectFlipSurfaceUpdates < 0 )
  {
    v8 = OutOfFrameDirectFlipSurfaceUpdates | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, OutOfFrameDirectFlipSurfaceUpdates | 0x10000000, 0x4F6u);
    goto LABEL_13;
  }
  if ( v22 )
    goto LABEL_14;
  v16 = 0;
  if ( v21 )
  {
    while ( 1 )
    {
      v17 = COutOfFrameDirectFlipInfo::ProcessSurfaceUpdate(
              OutOfFrameDirectFlipInfo,
              (const struct CSM_SURFACE_UPDATE *)&v25[33 * v16]);
      v8 = v17;
      if ( v17 < 0 )
        break;
      if ( CRenderTargetManager::FindOutOfFrameDirectFlipInfo(*((CRenderTargetManager **)this + 4)) != OutOfFrameDirectFlipInfo )
      {
        SetEvent(*(HANDLE *)(*((_QWORD *)this + 63) + 88LL));
        goto LABEL_13;
      }
      if ( ++v16 >= v21 )
        goto LABEL_10;
    }
    v20 = 1276;
    goto LABEL_29;
  }
LABEL_10:
  v17 = CDirectFlipInfo::EnsurePinnedResources(OutOfFrameDirectFlipInfo);
  v8 = v17;
  if ( v17 < 0 )
  {
    v20 = 1291;
LABEL_29:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v20);
    goto LABEL_13;
  }
  v17 = COutOfFrameDirectFlipInfo::Activate(OutOfFrameDirectFlipInfo);
  v8 = v17;
  if ( v17 < 0 )
  {
    v20 = 1292;
    goto LABEL_29;
  }
  COutOfFrameDirectFlipStats::Init(
    v24,
    *((struct CCompositionSurfaceInfo **)OutOfFrameDirectFlipInfo + 4),
    *((_DWORD *)OutOfFrameDirectFlipInfo + 32));
  *a3 = 1;
  *a4 = CDirectFlipInfo::NeedsPresent(OutOfFrameDirectFlipInfo);
LABEL_13:
  if ( !v22 && !*a4 )
    NtTokenManagerDeleteOutstandingDirectFlipTokens();
LABEL_14:
  v18 = v21;
  if ( v21 )
  {
    do
    {
      v14 = v25[33 * v5 + 27];
      if ( (unsigned __int64)v14 >= 2 )
      {
        DeleteObject(v14);
        v18 = v21;
      }
      ++v5;
    }
    while ( v5 < v18 );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_q(v14, &EVTDESC_SCHEDULE_RENDER_DFLIPLIGHT_Stop, *a4);
  return v8;
}
