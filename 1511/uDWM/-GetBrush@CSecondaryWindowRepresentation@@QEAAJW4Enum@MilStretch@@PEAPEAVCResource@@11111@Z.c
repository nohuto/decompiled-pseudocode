/*
 * XREFs of ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x18001673C
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180012518 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180018FA8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009CF24 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z @ 0x180012EC0 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x1800165D0 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAP.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetBrush(
        __int64 a1,
        __int64 a2,
        CBaseObject **a3,
        CBaseObject **a4,
        __int64 a5,
        CBaseObject **a6,
        CResource **a7,
        CBaseObject **a8)
{
  CBaseObject *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  CBaseObject *v14; // rax
  int v15; // eax
  CBaseObject *v16; // rax
  int v17; // eax
  CTransitionWindowSnapshot *v18; // rcx
  CResource *v19; // rax
  int v20; // eax
  int v21; // eax
  CWindowData *v22; // r9
  CWindowData *v23; // r8
  __int64 v24; // rdx
  CWindowData *v25; // r8
  CWindowData *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int BrushForCVI; // eax
  struct CResource *v33; // rcx
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  CBaseObject *v36; // rcx
  CResource *v37; // rcx
  int Brush; // eax
  CResource *v40; // [rsp+30h] [rbp-89h] BYREF
  CBaseObject *v41; // [rsp+38h] [rbp-81h]
  CBaseObject *v42; // [rsp+40h] [rbp-79h]
  CBaseObject *v43; // [rsp+48h] [rbp-71h]
  struct CResource *v44[2]; // [rsp+50h] [rbp-69h] BYREF
  int v45; // [rsp+60h] [rbp-59h] BYREF
  char v46[4]; // [rsp+64h] [rbp-55h] BYREF
  __int64 v47; // [rsp+68h] [rbp-51h]
  __int64 v48; // [rsp+70h] [rbp-49h]
  __int128 v49; // [rsp+78h] [rbp-41h]
  int v50; // [rsp+88h] [rbp-31h]
  int v51; // [rsp+8Ch] [rbp-2Dh]
  int v52; // [rsp+90h] [rbp-29h]
  int v53; // [rsp+94h] [rbp-25h]

  v44[0] = 0LL;
  v43 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  if ( a3 )
  {
    v11 = *a3;
    v43 = v11;
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
    if ( !v43 )
    {
      v12 = CResource::Create(49LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
      v13 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x397u);
        goto LABEL_66;
      }
    }
  }
  if ( a4 )
  {
    v14 = *a4;
    v41 = v14;
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
    if ( !v41 )
    {
      v15 = CResource::Create(49LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
      v13 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x3A1u);
        goto LABEL_66;
      }
    }
  }
  if ( a6 )
  {
    v16 = *a6;
    v42 = v16;
    if ( v16 )
      _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
    if ( !v42 )
    {
      v17 = CResource::Create(50LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
      v13 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x3B5u);
        goto LABEL_66;
      }
    }
  }
  v18 = *(CTransitionWindowSnapshot **)(a1 + 544);
  if ( !v18 )
  {
    if ( a7 && (v19 = *a7) != 0LL )
    {
      v40 = *a7;
      _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
    }
    else
    {
      v20 = CResource::Create(56LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
      v13 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x3C6u);
        goto LABEL_66;
      }
    }
    v45 = 162;
    memset_0(v46, 0, 0x40uLL);
    if ( v42 )
      v21 = *((_DWORD *)v42 + 6);
    else
      v21 = 0;
    v51 = v21;
    v49 = 0LL;
    if ( v43 )
    {
      v53 = 0;
      v50 = *((_DWORD *)v43 + 6);
      v47 = 0LL;
      v48 = 0LL;
    }
    else
    {
      v47 = 0LL;
      v53 = 1;
      v48 = 0x3F8000003F800000LL;
    }
    v22 = 0LL;
    v23 = *(CWindowData **)(a1 + 64);
    if ( *(_DWORD *)(a1 + 72) != 1 )
    {
      if ( *(_DWORD *)(a1 + 72) == 2 )
      {
        v22 = *(CWindowData **)(*((_QWORD *)v23 + 50) + 32LL);
        goto LABEL_26;
      }
      if ( *(_DWORD *)(a1 + 72) != 3 )
        goto LABEL_26;
      if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
      {
        v22 = *(CWindowData **)(*((_QWORD *)v23 + 51) + 80LL);
        goto LABEL_26;
      }
    }
    v22 = v23;
LABEL_26:
    if ( CWindowData::IsImmersiveWindow(v22) && *(_DWORD *)(a1 + 72) == 3 )
    {
      if ( *(_QWORD *)(a1 + 512) )
        v24 = *(_QWORD *)(a1 + 512);
      goto LABEL_33;
    }
    if ( v24 )
    {
LABEL_34:
      v28 = *(_QWORD *)(v24 + 16);
      if ( v28 )
        v29 = *(_DWORD *)(v28 + 24);
      else
        v29 = 0;
      v52 = v29;
      goto LABEL_37;
    }
    v26 = 0LL;
    if ( *(_DWORD *)(a1 + 72) != 1 )
    {
      if ( *(_DWORD *)(a1 + 72) == 2 )
      {
        v26 = *(CWindowData **)(*((_QWORD *)v25 + 50) + 32LL);
        goto LABEL_30;
      }
      if ( *(_DWORD *)(a1 + 72) != 3 )
        goto LABEL_30;
      if ( !CWindowData::IsImmersiveWindow(v25) )
      {
        v26 = *(CWindowData **)(*((_QWORD *)v25 + 51) + 80LL);
        goto LABEL_30;
      }
    }
    v26 = v25;
LABEL_30:
    v27 = *((_QWORD *)v26 + 48);
    if ( !v27 )
      goto LABEL_100;
    if ( (*(_BYTE *)(a1 + 40) & 4) != 0 )
      v24 = *(_QWORD *)(v27 + 552);
    else
      v24 = *(_QWORD *)(v27 + 280);
LABEL_33:
    if ( v24 )
      goto LABEL_34;
LABEL_100:
    v52 = 0;
LABEL_37:
    v30 = CResource::Send(v40, &v45, 0x44u);
    v13 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0x3F7u);
      goto LABEL_66;
    }
    BrushForCVI = CSecondaryWindowRepresentation::CreateBrushForCVI(v31, 2, (__int64)v40, (__int64)v41, 0LL, v44);
    v13 = BrushForCVI;
    if ( BrushForCVI >= 0 )
      goto LABEL_39;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BrushForCVI, 0x3F9u);
    goto LABEL_64;
  }
  Brush = CTransitionWindowSnapshot::GetBrush(v18, v44, &v40, (float *)(a1 + 504));
  v13 = Brush;
  if ( Brush >= 0 )
  {
LABEL_39:
    if ( a8 )
    {
      if ( *a8 )
        CBaseObject::Release(*a8);
      v33 = v44[0];
      *a8 = v44[0];
      if ( v33 )
        _InterlockedIncrement((volatile signed __int32 *)v33 + 2);
    }
    if ( a3 )
    {
      if ( *a3 )
        CBaseObject::Release(*a3);
      v34 = v43;
      *a3 = v43;
      if ( v34 )
        _InterlockedIncrement((volatile signed __int32 *)v34 + 2);
    }
    if ( a4 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v35 = v41;
      *a4 = v41;
      if ( v35 )
        _InterlockedIncrement((volatile signed __int32 *)v35 + 2);
    }
    if ( a6 )
    {
      if ( *a6 )
        CBaseObject::Release(*a6);
      v36 = v42;
      *a6 = v42;
      if ( v36 )
        _InterlockedIncrement((volatile signed __int32 *)v36 + 2);
    }
    if ( a7 )
    {
      if ( *a7 )
        CBaseObject::Release(*a7);
      v37 = v40;
      *a7 = v40;
      if ( v37 )
        _InterlockedIncrement((volatile signed __int32 *)v37 + 2);
    }
    goto LABEL_64;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Brush, 0x3BCu);
LABEL_64:
  if ( v44[0] )
    CBaseObject::Release(v44[0]);
LABEL_66:
  if ( v43 )
    CBaseObject::Release(v43);
  if ( v41 )
    CBaseObject::Release(v41);
  if ( v42 )
    CBaseObject::Release(v42);
  if ( v40 )
    CBaseObject::Release(v40);
  return v13;
}
