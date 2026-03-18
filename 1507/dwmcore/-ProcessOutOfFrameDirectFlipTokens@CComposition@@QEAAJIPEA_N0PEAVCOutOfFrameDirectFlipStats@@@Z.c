/*
 * XREFs of ?ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800E3798
 * Callers:
 *     ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x1800E1A90 (-ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z.c)
 * Callees:
 *     ?Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ @ 0x180005EC0 (-Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x180006914 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?NeedsPresent@CDirectFlipInfo@@QEAA_NXZ @ 0x180006994 (-NeedsPresent@CDirectFlipInfo@@QEAA_NXZ.c)
 *     ?Init@COutOfFrameDirectFlipStats@@QEAAXPEAVCCompositionSurfaceInfo@@I@Z @ 0x180010098 (-Init@COutOfFrameDirectFlipStats@@QEAAXPEAVCCompositionSurfaceInfo@@I@Z.c)
 *     ?FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ @ 0x180049D04 (-FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ.c)
 *     ?Reset@COutOfFrameDirectFlipStats@@QEAAXXZ @ 0x18005ECA0 (-Reset@COutOfFrameDirectFlipStats@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?ProcessSurfaceUpdate@COutOfFrameDirectFlipInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800EEDE0 (-ProcessSurfaceUpdate@COutOfFrameDirectFlipInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 */

__int64 __fastcall CComposition::ProcessOutOfFrameDirectFlipTokens(
        CRenderTargetManager **this,
        int a2,
        bool *a3,
        bool *a4,
        CMILCOMBase **a5)
{
  unsigned int v5; // ebx
  unsigned int v9; // edi
  struct COutOfFrameDirectFlipInfo *OutOfFrameDirectFlipInfo; // rsi
  int OutOfFrameDirectFlipSurfaceUpdates; // eax
  int v12; // eax
  HGDIOBJ v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-E0h]
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  _BYTE v20[216]; // [rsp+40h] [rbp-C0h] BYREF
  HGDIOBJ ho[139]; // [rsp+118h] [rbp+18h]

  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  v18 = a2;
  v16 = 0;
  v9 = 0;
  COutOfFrameDirectFlipStats::Reset(a5);
  OutOfFrameDirectFlipInfo = CRenderTargetManager::FindOutOfFrameDirectFlipInfo(this[4]);
  if ( OutOfFrameDirectFlipInfo )
  {
    v19 = 0;
    v17 = 0;
    OutOfFrameDirectFlipSurfaceUpdates = NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates(
                                           (unsigned int)(v18 + 1),
                                           v20,
                                           5LL,
                                           &v16,
                                           &v19,
                                           &v17);
    if ( OutOfFrameDirectFlipSurfaceUpdates < 0 )
    {
      v9 = OutOfFrameDirectFlipSurfaceUpdates | 0x10000000;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, OutOfFrameDirectFlipSurfaceUpdates | 0x10000000, 0x437u);
      goto LABEL_17;
    }
    *a4 = v17 != 0;
    if ( !v16 )
      return v9;
    v12 = COutOfFrameDirectFlipInfo::ProcessSurfaceUpdate(
            OutOfFrameDirectFlipInfo,
            (const struct CSM_SURFACE_UPDATE *)v20);
    v9 = v12;
    if ( v12 >= 0 )
    {
      if ( CRenderTargetManager::FindOutOfFrameDirectFlipInfo(this[4]) != OutOfFrameDirectFlipInfo )
      {
        SetEvent(*((HANDLE *)this[63] + 11));
        goto LABEL_17;
      }
      v12 = CDirectFlipInfo::EnsurePinnedResources(OutOfFrameDirectFlipInfo);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v12 = COutOfFrameDirectFlipInfo::Activate((CCompositionSurfaceInfo **)OutOfFrameDirectFlipInfo);
        v9 = v12;
        if ( v12 >= 0 )
        {
          COutOfFrameDirectFlipStats::Init(
            a5,
            *((struct CCompositionSurfaceInfo **)OutOfFrameDirectFlipInfo + 4),
            *((_DWORD *)OutOfFrameDirectFlipInfo + 32));
          *a3 = CDirectFlipInfo::NeedsPresent(OutOfFrameDirectFlipInfo);
          goto LABEL_17;
        }
        v15 = 1110;
      }
      else
      {
        v15 = 1109;
      }
    }
    else
    {
      v15 = 1095;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v15);
  }
  else
  {
    ResetEvent(*((HANDLE *)this[63] + 14));
  }
LABEL_17:
  if ( v16 )
  {
    do
    {
      v13 = ho[33 * v5];
      if ( (unsigned __int64)v13 >= 2 )
        DeleteObject(v13);
      ++v5;
    }
    while ( v5 < v16 );
  }
  return v9;
}
