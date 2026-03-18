/*
 * XREFs of ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180086B28
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180045D40 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?ProcessSurfaceUpdate@COutOfFrameDirectFlipInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800EEDE0 (-ProcessSurfaceUpdate@COutOfFrameDirectFlipInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogRenderTarget@@AEAA_NXZ @ 0x180126970 (-ProcessExclusiveSurfaceUpdate@CAnalogRenderTarget@@AEAA_NXZ.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180005478 (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x1800468D0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800863B0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x180087B20 (-GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ.c)
 *     ?FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18008981C (-FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@AEBUCSM_REA.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180089DB4 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180089E90 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_nxxxqqxqqqqqqqqx @ 0x1801197DC (Template_nxxxqqxqqqqqqqqx.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::ProcessSurfaceUpdate(CCompositionSurfaceInfo *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  int v4; // ebx
  __int64 v5; // r8
  __int64 (__fastcall ***v6)(struct CBitmapRealization *, GUID *, void **); // r14
  _QWORD *v7; // r15
  CBitmapOfDeviceBitmaps *RealizationNoRef; // rdi
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rcx
  bool v12; // zf
  __int64 (__fastcall *v13)(CBitmapOfDeviceBitmaps *); // r14
  __int64 v14; // r12
  __int64 v15; // rax
  CSurfaceManager *v16; // rbx
  struct CComposition *(__fastcall *v17)(CSurfaceManager *__hidden); // rdi
  struct CComposition *CompositionNoRef; // rax
  struct _LUID v19; // r8
  int ExistingDevice; // eax
  struct CD3DDeviceLevel1 *v21; // r13
  int v22; // eax
  __int64 (__fastcall *v23)(CBitmapRealization *); // rdi
  int v25; // eax
  _QWORD v26[4]; // [rsp+A0h] [rbp-48h] BYREF
  struct CD3DDeviceLevel1 *v27; // [rsp+F0h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_nxxxqqxqqqqqqqqx(
      (_DWORD)this,
      a2,
      *(_DWORD *)(a2 + 252),
      a2,
      *(_QWORD *)(a2 + 8),
      *(_DWORD *)(a2 + 252),
      *(_QWORD *)(a2 + 256),
      *(_DWORD *)(a2 + 68),
      *(_DWORD *)(a2 + 16),
      *(_QWORD *)(a2 + 24),
      *(_DWORD *)(a2 + 60),
      *(_DWORD *)(a2 + 64),
      *(_DWORD *)(a2 + 80),
      *(_DWORD *)(a2 + 76),
      *(_DWORD *)(a2 + 124),
      *(_DWORD *)(a2 + 128),
      *(_DWORD *)(a2 + 184),
      *(_DWORD *)(a2 + 188),
      *(_QWORD *)(a2 + 192));
  if ( *((_QWORD *)this + 7) != *(_QWORD *)(v2 + 8) )
  {
    CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 48));
    CCompositionSurfaceInfo::UpdateRenderingRealization(this, 0LL, 0LL, 0LL, 0LL, 1);
  }
  v5 = *(_QWORD *)(v2 + 8);
  if ( !v5 )
    return (unsigned int)v4;
  v6 = 0LL;
  if ( *((_QWORD *)this + 7) != v5 )
    goto LABEL_41;
  v7 = (_QWORD *)((char *)this + 48);
  RealizationNoRef = 0LL;
  v9 = 0LL;
  if ( !*((_DWORD *)this + 28) )
    goto LABEL_16;
  v10 = *((_QWORD *)this + 11);
  while ( 1 )
  {
    v11 = *(_QWORD *)(v10 + 8LL * (unsigned int)v9);
    a2 = *(unsigned int *)(v11 + 296);
    if ( *(_QWORD *)(v11 + 296) == *(_QWORD *)(v2 + 184) )
    {
      a2 = (unsigned int)(a2 - 1);
      if ( (_DWORD)a2 )
      {
        if ( (_DWORD)a2 != 1 || *(_DWORD *)(v11 + 312) != *(_DWORD *)(v2 + 200) )
          goto LABEL_38;
        v12 = *(_DWORD *)(v11 + 316) == *(_DWORD *)(v2 + 204);
      }
      else
      {
        v12 = *(_QWORD *)(v11 + 304) == *(_QWORD *)(v2 + 192);
      }
      if ( v12 )
        break;
    }
LABEL_38:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *((_DWORD *)this + 28) )
      goto LABEL_16;
  }
  RealizationNoRef = *(CBitmapOfDeviceBitmaps **)(v10 + 8LL * (unsigned int)v9);
LABEL_16:
  if ( RealizationNoRef )
  {
LABEL_17:
    v13 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)RealizationNoRef + 8LL);
    if ( v13 == CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(RealizationNoRef);
    else
      ((void (__fastcall *)(CBitmapOfDeviceBitmaps *, unsigned __int64, __int64, __int64))v13)(
        RealizationNoRef,
        a2,
        v5,
        v9);
    v6 = (__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, void **))RealizationNoRef;
    goto LABEL_20;
  }
LABEL_41:
  v7 = (_QWORD *)((char *)this + 48);
  v25 = CCompositionSurfaceInfo::CBindInfo::Initialize(
          (CCompositionSurfaceInfo *)((char *)this + 48),
          *(_QWORD *)(v2 + 8));
  v4 = v25;
  if ( v25 >= 0 )
  {
    RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
                         (CCompositionSurfaceInfo *)((char *)this + 48),
                         (const struct CSM_REALIZATION_INFO *)(v2 + 184));
    if ( RealizationNoRef )
      goto LABEL_17;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x1BDu);
  }
LABEL_20:
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xA6u);
  }
  else
  {
    v14 = *(_QWORD *)(v2 + 256);
    v4 = 0;
    if ( v14 )
    {
      v26[1] = v7[14];
      v15 = *v7;
      v26[0] = 0LL;
      v26[2] = v14;
      v16 = *(CSurfaceManager **)(v15 + 24);
      v17 = *(struct CComposition *(__fastcall **)(CSurfaceManager *__hidden))(*(_QWORD *)v16 + 8LL);
      if ( v17 == CSurfaceManager::GetCompositionNoRef )
        CompositionNoRef = CSurfaceManager::GetCompositionNoRef(v16);
      else
        CompositionNoRef = v17(v16);
      v19 = *(struct _LUID *)((char *)v7 + 100);
      v27 = 0LL;
      ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                         (CD3DDeviceManager *)&g_D3DDeviceManager,
                         (const struct _GUID *)((char *)CompositionNoRef + 252),
                         v19,
                         &v27);
      v21 = v27;
      v4 = ExistingDevice;
      if ( ExistingDevice < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, ExistingDevice, 0x4DAu);
      }
      else
      {
        v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(**((_QWORD **)v27 + 65) + 32LL))(
                *((_QWORD *)v27 + 65),
                v26,
                1LL);
        v4 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v22, 0x4DDu);
      }
      if ( v21 )
        CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v21 + 392));
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x66Cu);
      v7[3] = v14;
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xABu);
    }
    else
    {
      *((_DWORD *)this + 20) = *(_DWORD *)(v2 + 252);
      CCompositionSurfaceInfo::UpdateRenderingRealization(
        this,
        v6,
        (const struct CSM_BUFFER_ATTRIBUTES *)(v2 + 16),
        *(HRGN *)(v2 + 216),
        (const struct ScrollOptimization *)(v2 + 224),
        0);
    }
  }
  if ( v6 )
  {
    v23 = (__int64 (__fastcall *)(CBitmapRealization *))(*v6)[2];
    if ( v23 == CBitmapRealization::Release )
      CBitmapRealization::Release((CBitmapRealization *)v6);
    else
      v23((CBitmapRealization *)v6);
  }
  return (unsigned int)v4;
}
