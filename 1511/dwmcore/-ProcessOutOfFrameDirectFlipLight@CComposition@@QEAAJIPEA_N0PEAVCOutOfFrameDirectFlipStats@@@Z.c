/*
 * XREFs of ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800067F4
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x18008E710 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 * Callees:
 *     ?AreAnimateUpdatesRequired@CComposition@@IEAA_NXZ @ 0x180006450 (-AreAnimateUpdatesRequired@CComposition@@IEAA_NXZ.c)
 *     ?Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ @ 0x180006A30 (-Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ.c)
 *     ?IsOutOfFrameOptimizationDisabled@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180006ABC (-IsOutOfFrameOptimizationDisabled@COutOfFrameDirectFlipInfo@@QEBA_NXZ.c)
 *     ?NeedsPresent@CDirectFlipInfo@@QEBA_NXZ @ 0x180006B20 (-NeedsPresent@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x180006B60 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x180007398 (-AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?Init@COutOfFrameDirectFlipStats@@QEAAXPEAVCCompositionSurfaceInfo@@I@Z @ 0x18001DB94 (-Init@COutOfFrameDirectFlipStats@@QEAAXPEAVCCompositionSurfaceInfo@@I@Z.c)
 *     ?Reset@COutOfFrameDirectFlipStats@@QEAAXXZ @ 0x1800691FC (-Reset@COutOfFrameDirectFlipStats@@QEAAXXZ.c)
 *     ?FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ @ 0x18007B894 (-FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessSurfaceUpdate@COutOfFrameDirectFlipInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800ADEF0 (-ProcessSurfaceUpdate@COutOfFrameDirectFlipInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_q @ 0x180111C90 (Template_q.c)
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
  unsigned int v15; // edx
  int OutOfFrameDirectFlipSurfaceUpdates; // eax
  unsigned int v18; // r14d
  int v19; // eax
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
    goto LABEL_4;
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, OutOfFrameDirectFlipSurfaceUpdates | 0x10000000, 0x4FFu);
    goto LABEL_4;
  }
  if ( v22 )
    goto LABEL_5;
  v18 = 0;
  if ( v21 )
  {
    while ( 1 )
    {
      v19 = COutOfFrameDirectFlipInfo::ProcessSurfaceUpdate(
              OutOfFrameDirectFlipInfo,
              (const struct CSM_SURFACE_UPDATE *)&v25[33 * v18]);
      v8 = v19;
      if ( v19 < 0 )
        break;
      if ( CRenderTargetManager::FindOutOfFrameDirectFlipInfo(*((CRenderTargetManager **)this + 4)) != OutOfFrameDirectFlipInfo )
      {
        SetEvent(*(HANDLE *)(*((_QWORD *)this + 63) + 96LL));
        goto LABEL_4;
      }
      if ( ++v18 >= v21 )
        goto LABEL_15;
    }
    v20 = 1285;
    goto LABEL_29;
  }
LABEL_15:
  v19 = CDirectFlipInfo::EnsurePinnedResources(OutOfFrameDirectFlipInfo);
  v8 = v19;
  if ( v19 < 0 )
  {
    v20 = 1300;
LABEL_29:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, v20);
    goto LABEL_4;
  }
  v19 = COutOfFrameDirectFlipInfo::Activate(OutOfFrameDirectFlipInfo);
  v8 = v19;
  if ( v19 < 0 )
  {
    v20 = 1301;
    goto LABEL_29;
  }
  COutOfFrameDirectFlipStats::Init(
    v24,
    *((struct CCompositionSurfaceInfo **)OutOfFrameDirectFlipInfo + 4),
    *((_DWORD *)OutOfFrameDirectFlipInfo + 26));
  *a3 = 1;
  *a4 = CDirectFlipInfo::NeedsPresent(OutOfFrameDirectFlipInfo);
LABEL_4:
  if ( !v22 && !*a4 )
    NtTokenManagerDeleteOutstandingDirectFlipTokens();
LABEL_5:
  v15 = v21;
  if ( v21 )
  {
    do
    {
      v14 = v25[33 * v5 + 27];
      if ( (unsigned __int64)v14 >= 2 )
      {
        DeleteObject(v14);
        v15 = v21;
      }
      ++v5;
    }
    while ( v5 < v15 );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_q(v14, &EVTDESC_SCHEDULE_RENDER_DFLIPLIGHT_Stop, *a4);
  return v8;
}
