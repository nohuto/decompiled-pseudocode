/*
 * XREFs of ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x1800788D8
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x18001E8B4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x180078A74 (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180078AB4 (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180126494 (-AddMultipleAndSet@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUOverlayPlaneInf.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x1801284A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x1801286D4 (-FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ @ 0x18012899C (-Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ.c)
 *     ?RectContainedInRegionRect@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x180129850 (-RectContainedInRegionRect@COverlayContext@@CA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?RemoveAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801299B4 (-RemoveAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?ReplaceWith@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x180129AC4 (-ReplaceWith@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180129B54 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801523F0 (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1801529A8 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall COverlayContext::PushCandidates(COverlayContext *this, __int64 a2, char a3)
{
  int v4; // esi
  char v5; // r14
  __int64 v8; // rdx
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  unsigned int i; // r14d
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // ebx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  _OWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // r9d
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // r15
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // r15d
  _QWORD *v35; // r14
  __int64 v36; // rbx
  bool v37; // cf
  int v38; // eax
  unsigned int j; // ebx
  __int64 v40; // r15
  __int64 v41; // rcx
  unsigned int v42; // edx
  __int64 v43; // rax
  unsigned int v44; // [rsp+20h] [rbp-E0h]
  _QWORD v45[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+40h] [rbp-C0h]
  __int64 v47; // [rsp+44h] [rbp-BCh]
  _BYTE v48[928]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v49[14]; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v50; // [rsp+4D0h] [rbp+3D0h]

  v4 = 0;
  v5 = 0;
  COverlayContext::ResetPreviousOverlayCandidatesList(this);
  if ( a3 )
  {
    v45[0] = v48;
    v46 = 4;
    v45[1] = v48;
    v47 = 4LL;
    `vector constructor iterator'(
      (TemporaryConfiguration *)v48,
      0xE8uLL,
      4uLL,
      (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    v17 = 0;
    if ( *(_DWORD *)(a2 + 24) )
    {
      while ( 1 )
      {
        v18 = *(_OWORD **)(*(_QWORD *)a2 + 8LL * v17);
        if ( *(COverlayContext **)v18 == this )
        {
          v49[0] = *v18;
          v49[1] = v18[1];
          v49[2] = v18[2];
          v49[3] = v18[3];
          v49[4] = v18[4];
          v49[5] = v18[5];
          v49[6] = v18[6];
          v19 = v18[7];
          v20 = v18 + 8;
          v49[7] = v19;
          v49[8] = *v20;
          v49[9] = v20[1];
          v49[10] = v20[2];
          v49[11] = v20[3];
          v49[12] = v20[4];
          v49[13] = v20[5];
          v50 = *((_QWORD *)v20 + 12);
          COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)v49);
          v21 = DynArray<COverlayContext::OverlayPlaneInfo,0>::AddMultipleAndSet(v45, v49);
          v4 = v21;
          if ( v21 < 0 )
            break;
        }
        if ( ++v17 >= *(_DWORD *)(a2 + 24) )
          goto LABEL_17;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xE9Du);
    }
    else
    {
LABEL_17:
      if ( *((_DWORD *)this + 50)
        && (v24 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith((char *)this + 208, (char *)this + 176),
            v4 = v24,
            v24 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xEA3u);
      }
      else
      {
        if ( !HIDWORD(v47)
          || (v25 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith((char *)this + 176, v45),
              v4 = v25,
              v25 >= 0) )
        {
          DynArrayImpl<1>::~DynArrayImpl<1>(v45, v15, v16);
          goto LABEL_3;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xEA8u);
      }
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(v45, v22, v23);
    goto LABEL_11;
  }
  if ( *((_DWORD *)this + 50) )
  {
    v26 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith((char *)this + 208, (char *)this + 176);
    v4 = v26;
    if ( v26 < 0 )
    {
      v44 = 3764;
LABEL_28:
      v27 = v26;
LABEL_31:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v44);
      goto LABEL_11;
    }
  }
LABEL_3:
  if ( *((_DWORD *)this + 74) )
    v5 = *(_BYTE *)(*((_QWORD *)this + 34) + 104LL) != 0;
  if ( *((_BYTE *)this + 1089) != v5 )
  {
    v28 = *((_QWORD *)this + 2);
    LOBYTE(v8) = v5;
    *((_BYTE *)this + 1089) = v5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 264LL))(v28, v8);
    *((_BYTE *)this + 1081) = 1;
    *((_BYTE *)this + 1097) = 1;
  }
  v9 = *((_DWORD *)this + 148);
  v10 = *((_OWORD *)this + 34);
  *(_OWORD *)((char *)this + 664) = *((_OWORD *)this + 33);
  v11 = *((_OWORD *)this + 35);
  *(_OWORD *)((char *)this + 680) = v10;
  v12 = *((_OWORD *)this + 36);
  *(_OWORD *)((char *)this + 696) = v11;
  *(_OWORD *)((char *)this + 712) = v12;
  *((_DWORD *)this + 182) = v9;
  *((_BYTE *)this + 1092) = *((_BYTE *)this + 1091);
  if ( *((_DWORD *)this + 50) )
  {
    if ( *((_DWORD *)this + 66) || *((_DWORD *)this + 22) == 1 )
      goto LABEL_9;
    *((_DWORD *)this + 23) = 1;
  }
  else
  {
    if ( !*((_DWORD *)this + 66) )
      goto LABEL_9;
    v29 = *((_DWORD *)this + 22);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2)) == v29 )
      goto LABEL_9;
    *((_DWORD *)this + 23) = v29;
  }
  *((_BYTE *)this + 1096) = 1;
LABEL_9:
  for ( i = 0; i < *((_DWORD *)this + 66); ++i )
  {
    v30 = *((_QWORD *)this + 30);
    v31 = 232LL * i;
    if ( (unsigned int)COverlayContext::FindOverlayCandidateIndex(
                         this,
                         0LL,
                         *(struct ISwapChainContent **)(v30 + v31 + 16),
                         *(_QWORD *)(v30 + v31 + 32)) == -1 )
    {
      if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
      {
        v26 = COverlayContext::EnsureIndependentFlipState(
                this,
                (struct COverlayContext::OverlayPlaneInfo *)(v30 + v31),
                0,
                0);
        v4 = v26;
        if ( v26 < 0 )
        {
          v44 = 3834;
          goto LABEL_28;
        }
        v32 = CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(*(_QWORD *)(*((_QWORD *)this + 30) + v31 + 24) + 48LL));
        v4 = v32;
        if ( v32 < 0 )
        {
          v44 = 3836;
          v27 = v32;
          goto LABEL_31;
        }
        v33 = *((_QWORD *)this + 30);
        *((_BYTE *)this + 1086) = 1;
        CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*(_QWORD *)(v33 + v31 + 24) + 48LL), 2, 0);
      }
      if ( !(unsigned __int8)COverlayContext::RectContainedInRegionRect(
                               v31 + *((_QWORD *)this + 30) + 144LL,
                               *((unsigned int *)this + 183),
                               (char *)this + 736) )
        *((_BYTE *)this + 1097) = 1;
    }
  }
  COverlayContext::ResetOverlayPlanesList(this);
  if ( !*((_DWORD *)this + 50) )
    goto LABEL_11;
  v34 = 0;
  v35 = (_QWORD *)((char *)this + 176);
  while ( 1 )
  {
    v36 = 232LL * v34;
    if ( !*(_BYTE *)(*v35 + v36 + 184) )
      break;
LABEL_60:
    if ( ++v34 >= *((_DWORD *)this + 50) )
      goto LABEL_68;
  }
  v37 = CCommonRegistryData::m_dwOverlayTestMode < 3;
  *(_BYTE *)(*v35 + v36 + 228) = 1;
  if ( !v37 )
  {
LABEL_56:
    if ( !*((_BYTE *)this + 1097)
      && !(unsigned __int8)COverlayContext::RectContainedInRegionRect(
                             v36 + *v35 + 144LL,
                             *((unsigned int *)this + 183),
                             (char *)this + 736) )
    {
      *((_BYTE *)this + 1097) = 1;
    }
    *(_BYTE *)(*v35 + v36 + 184) = 1;
    *(_BYTE *)(*v35 + v36 + 208) = 1;
    goto LABEL_60;
  }
  v38 = CCompositionSurfaceInfo::CBindInfo::PinResources(
          (CCompositionSurfaceInfo::CBindInfo *)(*(_QWORD *)(*v35 + v36 + 24) + 48LL),
          *(struct _LUID *)((char *)this + 64));
  v4 = v38;
  if ( v38 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xF26u);
  CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*(_QWORD *)(*v35 + v36 + 24) + 48LL), 2, 1);
  if ( v4 != -2005532292 )
  {
    if ( v4 < 0 )
    {
      v44 = 3894;
      v27 = v4;
      goto LABEL_31;
    }
    goto LABEL_56;
  }
  v4 = 0;
  for ( j = 0; j < *((_DWORD *)this + 50); ++j )
  {
    v40 = 232LL * j;
    if ( *(_BYTE *)(*v35 + v40 + 228) )
    {
      v41 = *(_QWORD *)(*v35 + v40 + 24);
      if ( *(_BYTE *)(v41 + 220) )
        CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v41 + 48));
      COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v40 + *v35));
      DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((char *)this + 176, j--);
    }
  }
LABEL_68:
  if ( *((_DWORD *)this + 50) )
  {
    v42 = 0;
    do
    {
      v43 = v42++;
      *(_BYTE *)(232 * v43 + *((_QWORD *)this + 22) + 228) = 0;
    }
    while ( v42 < *((_DWORD *)this + 50) );
    v26 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith((char *)this + 240, (char *)this + 176);
    v4 = v26;
    if ( v26 < 0 )
    {
      v44 = 3953;
      goto LABEL_28;
    }
    *((_BYTE *)this + 1081) = 1;
  }
  else
  {
    *((_DWORD *)this + 23) = *((_DWORD *)this + 22);
    *((_BYTE *)this + 1096) = 1;
  }
  if ( *((_DWORD *)this + 74) && !*((_DWORD *)this + 269) )
    *((_BYTE *)this + 1097) = 1;
LABEL_11:
  *((_DWORD *)this + 183) = 0;
  return (unsigned int)v4;
}
