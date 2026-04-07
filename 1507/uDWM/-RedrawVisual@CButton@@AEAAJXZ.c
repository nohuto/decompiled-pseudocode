/*
 * XREFs of ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001A070
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001A750 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x1800038DC (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x1800039C4 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180003B70 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18001281C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180019E28 (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18001A4D4 (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x18001B704 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180028D08 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x180029368 (-DisconnectFromParent@CAtlasedImage@@QEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     floor_0 @ 0x18004988A (floor_0.c)
 *     Template_qp @ 0x18006C038 (Template_qp.c)
 */

__int64 __fastcall CButton::RedrawVisual(CButton *this)
{
  char v1; // al
  unsigned int v2; // ebp
  float v4; // xmm1_4
  float v5; // xmm0_4
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int *v9; // rbx
  char v10; // di
  CAtlasedImage *v11; // rcx
  __int64 v12; // rdi
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CVisual *v15; // rbx
  void (__fastcall *v16)(CVisual *__hidden, unsigned int); // rbp
  CBaseObject *v17; // rcx
  char v18; // al
  __int64 v19; // rdi
  int v20; // ecx
  unsigned __int8 v21; // bl
  unsigned __int8 v22; // al
  int v23; // ebp
  CVisual *v24; // r14
  void (__fastcall *v25)(CVisual *__hidden, unsigned int); // r15
  CAtlasedImage *v26; // rdi
  int v27; // eax
  int v28; // ebx
  __int64 result; // rax
  int inserted; // eax
  unsigned int v31; // ebx
  __int64 v32; // rax
  float v33; // xmm5_4
  int v34; // eax
  unsigned int v35; // edi
  __int64 v36; // rax
  float v38; // [rsp+80h] [rbp+8h] BYREF
  float v39; // [rsp+88h] [rbp+10h] BYREF

  v1 = *((_BYTE *)this + 304);
  v2 = *((_DWORD *)this + 100);
  if ( (v1 & 1) != 0 )
  {
    if ( (v1 & 2) != 0 )
      *((_DWORD *)this + 100) = ((v1 & 4) != 0) + 1;
    else
      *((_DWORD *)this + 100) = 0;
  }
  else
  {
    *((_DWORD *)this + 100) = 3;
  }
  v4 = *((float *)this + 106);
  if ( *((_DWORD *)this + 100) == 1 )
    v5 = FLOAT_1_0;
  else
    v5 = *((float *)this + 107);
  *((float *)this + 106) = v5;
  if ( v4 != v5 )
    CVisual::SetDirtyFlags(this, 0x8000u);
  v6 = CButton::DrawStateW((__int64)this, *((_QWORD *)this + 39), *((_DWORD *)this + 100));
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x176u);
    return v7;
  }
  v8 = *((_DWORD *)this + 100);
  if ( (v8 || v2 != 1) && (v8 != 1 || v2) )
  {
    v9 = (unsigned int *)*((_QWORD *)this + 3);
    v10 = 0;
  }
  else
  {
    v10 = 1;
    v9 = (unsigned int *)this;
  }
  v11 = (CAtlasedImage *)*((_QWORD *)this + 39);
  if ( v9 != *((unsigned int **)v11 + 10) )
  {
    CAtlasedImage::DisconnectFromParent(v11);
    inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex(
                 (CAtlasedRectsVisual *)v9,
                 *((struct CAtlasedImage **)this + 39),
                 v9[72]);
    v31 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x18Fu);
      return v31;
    }
    CButton::UpdateAtlasPositionAndSize(this);
  }
  if ( !v10 )
  {
    if ( *((_QWORD *)this + 52) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_qp(v11, &UdwmAnimation_Stop, 7LL);
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
      v36 = *((_QWORD *)this + 52);
      if ( v36 )
      {
        if ( (*(_DWORD *)(v36 + 8))-- == 1 )
          CDesktopManager::s_fTimelineDirty = 1;
        *((_QWORD *)this + 52) = 0LL;
      }
    }
    v12 = *((_QWORD *)this + 40);
    v13 = *(CBaseObject **)(v12 + 72);
    if ( v13 )
    {
      CBaseObject::Release(v13);
      *(_QWORD *)(v12 + 72) = 0LL;
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v12, 1u, 0x2000u);
    }
    v14 = *(CBaseObject **)(v12 + 144);
    if ( v14
      || *(_DWORD *)(v12 + 152) != 1
      || (int)((double)*((int *)this + 108) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 166)) != *(_DWORD *)(v12 + 156) )
    {
      *(_DWORD *)(v12 + 152) = 1;
      if ( v14 )
        CBaseObject::Release(v14);
      *(_DWORD *)(v12 + 96) |= 1u;
      v15 = *(CVisual **)(v12 + 80);
      *(_QWORD *)(v12 + 144) = 0LL;
      if ( v15 )
      {
        v16 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v15 + 24LL);
        if ( v16 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v15, 0x2000u);
        else
          v16(v15, 0x2000u);
      }
    }
    v17 = *(CBaseObject **)(v12 + 136);
    if ( v17 )
    {
      CBaseObject::Release(v17);
      *(_QWORD *)(v12 + 136) = 0LL;
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v12, 1u, 0x2000u);
    }
    v18 = (*((_BYTE *)this + 304) & 0x20) != 0;
    if ( *(_BYTE *)(v12 + 160) != v18 )
    {
      *(_BYTE *)(v12 + 160) = v18;
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 80) + 24LL))(*(_QWORD *)(v12 + 80), 0x2000LL);
    }
    v19 = *((_QWORD *)this + 39);
    v20 = (int)floor_0((float)(*((float *)this + 106) * 255.0) + 0.5);
    v21 = -1;
    if ( v20 > 255 )
    {
      v22 = -1;
    }
    else
    {
      v22 = 0;
      if ( v20 >= 0 )
        v22 = v20;
    }
    v23 = 16843009 * v22;
    if ( v23 != *(_DWORD *)(v19 + 68) )
    {
      *(_DWORD *)(v19 + 96) |= 2u;
      v24 = *(CVisual **)(v19 + 80);
      if ( v24 )
      {
        v25 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v24 + 24LL);
        if ( v25 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v24, 0x2000u);
        else
          v25(v24, 0x2000u);
      }
      *(_DWORD *)(v19 + 68) = v23;
    }
    v26 = (CAtlasedImage *)*((_QWORD *)this + 40);
    v27 = (int)floor_0(0.5);
    if ( v27 <= 255 )
    {
      v21 = 0;
      if ( v27 >= 0 )
        v21 = v27;
    }
    v28 = 16843009 * v21;
    if ( v28 != *((_DWORD *)v26 + 17) )
    {
      CAtlasedImage::SetDirtyFlags(v26, 2u, 0x2000u);
      *((_DWORD *)v26 + 17) = v28;
    }
    return 0LL;
  }
  v32 = *((_QWORD *)this + 52);
  if ( !v32 || *(_BYTE *)(v32 + 72) )
  {
    *((_DWORD *)this + 102) = *((_DWORD *)this + 106);
  }
  else
  {
    CButton::ComputeFadeValues(this, &v38, &v39);
    v33 = v38;
    *((float *)this + 101) = v39;
    *((float *)this + 102) = v33;
  }
  CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 39), *((float *)this + 101));
  CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 40), *((float *)this + 102));
  v34 = CButton::DrawStateW((__int64)this, *((_QWORD *)this + 40), v2);
  v35 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v34, 0x1A5u);
    return v35;
  }
  result = CButton::ActivateTimeline(this, (__int64 *)this + 52, 0.1599999964237213);
  v31 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, result, 0x1A7u);
    return v31;
  }
  return result;
}
