/*
 * XREFs of ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x180033EB8
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800082F4 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180016574 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x180099B10 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z @ 0x18000A518 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x180033D28 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAP.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetBrush(
        __int64 a1,
        __int64 a2,
        CBaseObject **a3,
        CBaseObject **a4,
        __int64 a5,
        CBaseObject **a6,
        struct CResource **a7,
        CBaseObject **a8)
{
  CBaseObject **v8; // rsi
  CBaseObject *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  CBaseObject *v15; // rax
  int v16; // eax
  CBaseObject *v17; // rax
  int v18; // eax
  CTransitionWindowSnapshot *v19; // rcx
  struct CResource *v20; // rax
  int v21; // eax
  int v22; // eax
  CWindowData *v23; // rdx
  __int64 v24; // rbx
  CWindowData *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // r9d
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  struct CResource *v35; // rcx
  CBaseObject *v36; // rcx
  CBaseObject *v37; // rcx
  CBaseObject *v38; // rcx
  struct CResource *v39; // rdx
  int Brush; // eax
  struct CResource *v42; // [rsp+50h] [rbp-59h] BYREF
  CBaseObject *v43; // [rsp+58h] [rbp-51h] BYREF
  CBaseObject *v44; // [rsp+60h] [rbp-49h] BYREF
  CBaseObject *v45; // [rsp+68h] [rbp-41h] BYREF
  int v46; // [rsp+70h] [rbp-39h]
  int v47; // [rsp+74h] [rbp-35h]
  struct CResource *v48; // [rsp+78h] [rbp-31h] BYREF
  CBaseObject **v49; // [rsp+80h] [rbp-29h]
  __int128 v50; // [rsp+88h] [rbp-21h] BYREF
  _QWORD v51[2]; // [rsp+98h] [rbp-11h] BYREF

  v8 = a8;
  v49 = a8;
  v48 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  if ( a3 )
  {
    v12 = *a3;
    v43 = v12;
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    if ( !v43 )
    {
      v13 = CResource::Create(0x19u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v43);
      v14 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x39Fu);
        goto LABEL_66;
      }
    }
  }
  if ( a4 )
  {
    v15 = *a4;
    v44 = v15;
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    if ( !v44 )
    {
      v16 = CResource::Create(0x19u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v44);
      v14 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x3A9u);
        goto LABEL_66;
      }
    }
  }
  if ( a6 )
  {
    v17 = *a6;
    v45 = v17;
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
    if ( !v45 )
    {
      v18 = CResource::Create(0x1Eu, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v45);
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x3BDu);
        goto LABEL_66;
      }
    }
  }
  v19 = *(CTransitionWindowSnapshot **)(a1 + 544);
  if ( v19 )
  {
    Brush = CTransitionWindowSnapshot::GetBrush(v19, &v48, &v42, (float *)(a1 + 504));
    v14 = Brush;
    if ( Brush >= 0 )
      goto LABEL_39;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Brush, 0x3C4u);
    goto LABEL_64;
  }
  if ( a7 && (v20 = *a7) != 0LL )
  {
    v42 = *a7;
    _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
  }
  else
  {
    v21 = CResource::Create(5u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v42);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x3CEu);
      goto LABEL_66;
    }
  }
  v47 = 0;
  v50 = 0uLL;
  if ( v43 )
  {
    v46 = 0;
    v22 = *((_DWORD *)v43 + 6);
    v50 = 0uLL;
    v47 = v22;
  }
  else
  {
    v50 = _xmm;
    v46 = 1;
  }
  v23 = 0LL;
  v24 = *(_QWORD *)(a1 + 48);
  v25 = *(CWindowData **)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) != 1 )
  {
    if ( *(_DWORD *)(a1 + 72) == 2 )
    {
      v23 = *(CWindowData **)(*((_QWORD *)v25 + 51) + 32LL);
      goto LABEL_24;
    }
    if ( *(_DWORD *)(a1 + 72) != 3 )
      goto LABEL_24;
    if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
    {
      v23 = *(CWindowData **)(*((_QWORD *)v25 + 52) + 80LL);
      goto LABEL_24;
    }
  }
  v23 = v25;
LABEL_24:
  if ( CWindowData::IsImmersiveWindow(v23) && *(_DWORD *)(a1 + 72) == 3 )
  {
    if ( *(_QWORD *)(a1 + 512) )
      v24 = *(_QWORD *)(a1 + 512);
    goto LABEL_31;
  }
  if ( v24 )
    goto LABEL_32;
  v26 = 0LL;
  v27 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) != 1 )
  {
    if ( *(_DWORD *)(a1 + 72) == 2 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(v27 + 408) + 32LL);
      goto LABEL_28;
    }
    if ( *(_DWORD *)(a1 + 72) != 3 )
      goto LABEL_28;
    if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(v27 + 416) + 80LL);
      goto LABEL_28;
    }
  }
  v26 = v27;
LABEL_28:
  v28 = *(_QWORD *)(v26 + 384);
  if ( !v28 )
  {
LABEL_100:
    v30 = 0;
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(a1 + 40) & 4) != 0 )
    v24 = *(_QWORD *)(v28 + 552);
  else
    v24 = *(_QWORD *)(v28 + 280);
LABEL_31:
  if ( !v24 )
    goto LABEL_100;
LABEL_32:
  v29 = *(_QWORD *)(v24 + 16);
  if ( !v29 )
    goto LABEL_100;
  v30 = *(_DWORD *)(v29 + 24);
LABEL_34:
  if ( v45 )
    v31 = *((_DWORD *)v45 + 6);
  else
    v31 = 0;
  v51[0] = 0LL;
  v51[1] = 0LL;
  v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, _QWORD *, int, int, int, int))(**((_QWORD **)v42 + 2)
                                                                                            + 952LL))(
          *((_QWORD *)v42 + 2),
          *((unsigned int *)v42 + 6),
          &v50,
          v51,
          v47,
          v31,
          v30,
          v46);
  v14 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x404u);
    goto LABEL_66;
  }
  v34 = CSecondaryWindowRepresentation::CreateBrushForCVI(v33, 2, (__int64)v42, (__int64)v44, 0LL, &v48);
  v14 = v34;
  if ( v34 >= 0 )
  {
    v8 = v49;
LABEL_39:
    if ( v8 )
    {
      if ( *v8 )
        CBaseObject::Release(*v8);
      v35 = v48;
      *v8 = v48;
      if ( v35 )
        _InterlockedIncrement((volatile signed __int32 *)v35 + 2);
    }
    if ( a3 )
    {
      if ( *a3 )
        CBaseObject::Release(*a3);
      v36 = v43;
      *a3 = v43;
      if ( v36 )
        _InterlockedIncrement((volatile signed __int32 *)v36 + 2);
    }
    if ( a4 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v37 = v44;
      *a4 = v44;
      if ( v37 )
        _InterlockedIncrement((volatile signed __int32 *)v37 + 2);
    }
    if ( a6 )
    {
      if ( *a6 )
        CBaseObject::Release(*a6);
      v38 = v45;
      *a6 = v45;
      if ( v38 )
        _InterlockedIncrement((volatile signed __int32 *)v38 + 2);
    }
    if ( a7 )
    {
      if ( *a7 )
        CBaseObject::Release(*a7);
      v39 = v42;
      *a7 = v42;
      if ( v39 )
        _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
    }
    goto LABEL_64;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x406u);
LABEL_64:
  if ( v48 )
    CBaseObject::Release(v48);
LABEL_66:
  if ( v43 )
    CBaseObject::Release(v43);
  if ( v44 )
    CBaseObject::Release(v44);
  if ( v45 )
    CBaseObject::Release(v45);
  if ( v42 )
    CBaseObject::Release(v42);
  return v14;
}
