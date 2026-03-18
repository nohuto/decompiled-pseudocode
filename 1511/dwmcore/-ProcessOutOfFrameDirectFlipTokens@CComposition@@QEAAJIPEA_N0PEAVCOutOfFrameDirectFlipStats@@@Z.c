/*
 * XREFs of ?ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x18009E0F0
 * Callers:
 *     ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x18008E4D4 (-ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z.c)
 * Callees:
 *     ?Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ @ 0x180006A30 (-Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ.c)
 *     ?NeedsPresent@CDirectFlipInfo@@QEBA_NXZ @ 0x180006B20 (-NeedsPresent@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x180006B60 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?Init@COutOfFrameDirectFlipStats@@QEAAXPEAVCCompositionSurfaceInfo@@I@Z @ 0x18001DB94 (-Init@COutOfFrameDirectFlipStats@@QEAAXPEAVCCompositionSurfaceInfo@@I@Z.c)
 *     ?Reset@COutOfFrameDirectFlipStats@@QEAAXXZ @ 0x1800691FC (-Reset@COutOfFrameDirectFlipStats@@QEAAXXZ.c)
 *     ?FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ @ 0x18007B894 (-FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessSurfaceUpdate@COutOfFrameDirectFlipInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800ADEF0 (-ProcessSurfaceUpdate@COutOfFrameDirectFlipInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, OutOfFrameDirectFlipSurfaceUpdates | 0x10000000, 0x440u);
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
        SetEvent(*((HANDLE *)this[63] + 12));
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
            *((_DWORD *)OutOfFrameDirectFlipInfo + 26));
          *a3 = CDirectFlipInfo::NeedsPresent(OutOfFrameDirectFlipInfo);
          goto LABEL_17;
        }
        v15 = 1119;
      }
      else
      {
        v15 = 1118;
      }
    }
    else
    {
      v15 = 1104;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v15);
  }
  else
  {
    ResetEvent(*((HANDLE *)this[63] + 15));
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
