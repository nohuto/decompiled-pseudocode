/*
 * XREFs of ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001ED00
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001F330 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x18001063C (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180010724 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180011210 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x18001EB18 (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18001F0B8 (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180020D14 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002BD18 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x18002C378 (-DisconnectFromParent@CAtlasedImage@@QEAAXXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003D030 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     floor_0 @ 0x18004FF2A (floor_0.c)
 *     Template_qp @ 0x180074068 (Template_qp.c)
 */

__int64 __fastcall CButton::RedrawVisual(CButton *this)
{
  char v1; // al
  unsigned int v2; // ebp
  float v4; // xmm1_4
  float v5; // xmm0_4
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  unsigned int *v9; // rdi
  char v10; // si
  CAtlasedImage *v11; // rcx
  int v12; // eax
  __int64 v13; // rbp
  int v14; // ecx
  unsigned __int8 v15; // si
  unsigned __int8 v16; // al
  int v17; // r12d
  __int64 v18; // r14
  void (__fastcall *v19)(CVisual *__hidden, unsigned int); // r15
  CAtlasedImage *v20; // rbx
  int v21; // eax
  int v22; // esi
  int inserted; // eax
  __int64 v25; // rax
  float v26; // xmm5_4
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  char v30; // al
  float v31; // [rsp+60h] [rbp+8h] BYREF
  float v32; // [rsp+68h] [rbp+10h] BYREF

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
  }
  else
  {
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
      v7 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x18Fu);
        return v7;
      }
      CButton::UpdateAtlasPositionAndSize(this);
    }
    if ( v10 )
    {
      v25 = *((_QWORD *)this + 52);
      if ( !v25 || *(_BYTE *)(v25 + 72) )
      {
        *((_DWORD *)this + 102) = *((_DWORD *)this + 106);
      }
      else
      {
        CButton::ComputeFadeValues(this, &v31, &v32);
        v26 = v31;
        *((float *)this + 101) = v32;
        *((float *)this + 102) = v26;
      }
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 39), *((float *)this + 101));
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 40), *((float *)this + 102));
      v27 = CButton::DrawStateW((__int64)this, *((_QWORD *)this + 40), v2);
      v7 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x1A5u);
      }
      else
      {
        v28 = CButton::ActivateTimeline(this, (__int64 *)this + 52, 0.1599999964237213);
        v7 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x1A7u);
      }
    }
    else
    {
      if ( *((_QWORD *)this + 52) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          Template_qp(v11, &UdwmAnimation_Stop, 7LL);
        CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
        v29 = *((_QWORD *)this + 52);
        if ( v29 )
        {
          --*(_DWORD *)(v29 + 8);
          v30 = CDesktopManager::s_fTimelineDirty;
          if ( !*(_DWORD *)(v29 + 8) )
            v30 = 1;
          *((_QWORD *)this + 52) = 0LL;
          CDesktopManager::s_fTimelineDirty = v30;
        }
      }
      v12 = CButton::DrawStateW((__int64)this, *((_QWORD *)this + 40), 4u);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x1B4u);
      }
      else
      {
        v13 = *((_QWORD *)this + 39);
        v14 = (int)floor_0((float)(*((float *)this + 106) * 255.0) + 0.5);
        v15 = -1;
        if ( v14 > 255 )
        {
          v16 = -1;
        }
        else
        {
          v16 = 0;
          if ( v14 >= 0 )
            v16 = v14;
        }
        v17 = 16843009 * v16;
        if ( v17 != *(_DWORD *)(v13 + 68) )
        {
          *(_DWORD *)(v13 + 96) |= 2u;
          v18 = *(_QWORD *)(v13 + 80);
          if ( v18 )
          {
            v19 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v18 + 24LL);
            if ( v19 == CVisual::SetDirtyFlags )
              CVisual::SetDirtyFlags(*(CVisual **)(v13 + 80), 0x2000u);
            else
              v19(*(CVisual **)(v13 + 80), 0x2000u);
          }
          *(_DWORD *)(v13 + 68) = v17;
        }
        v20 = (CAtlasedImage *)*((_QWORD *)this + 40);
        v21 = (int)floor_0(0.5);
        if ( v21 <= 255 )
        {
          v15 = 0;
          if ( v21 >= 0 )
            v15 = v21;
        }
        v22 = 16843009 * v15;
        if ( v22 != *((_DWORD *)v20 + 17) )
        {
          CAtlasedImage::SetDirtyFlags(v20, 2u, 0x2000u);
          *((_DWORD *)v20 + 17) = v22;
        }
      }
    }
  }
  return v7;
}
