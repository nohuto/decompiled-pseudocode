/*
 * XREFs of ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001BB64
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001C130 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x1800070A8 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180007174 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180008B24 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x18001B990 (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18001BF0C (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x18001DB20 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002B678 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x18002BC00 (-DisconnectFromParent@CAtlasedImage@@QEAAXXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003DC64 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18005056A (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_qp @ 0x180075F2C (Template_qp.c)
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
  int v17; // r14d
  CVisual *v18; // rcx
  void (__fastcall *v19)(CVisual *__hidden, unsigned int); // rax
  CAtlasedImage *v20; // rbx
  int v21; // eax
  int v22; // esi
  int inserted; // eax
  __int64 v25; // rax
  float v26; // xmm5_4
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  bool v30; // zf
  char v31; // al
  float v32; // [rsp+50h] [rbp+8h] BYREF
  float v33; // [rsp+58h] [rbp+10h] BYREF

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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x124u);
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x13Bu);
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
        CButton::ComputeFadeValues(this, &v32, &v33);
        v26 = v32;
        *((float *)this + 101) = v33;
        *((float *)this + 102) = v26;
      }
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 39), *((float *)this + 101));
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 40), *((float *)this + 102));
      v27 = CButton::DrawStateW((__int64)this, *((_QWORD *)this + 40), v2);
      v7 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x151u);
      }
      else
      {
        v28 = CButton::ActivateTimeline(this, (__int64 *)this + 52, 0.1599999964237213);
        v7 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x153u);
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
          v30 = (*(_DWORD *)(v29 + 8))-- == 1;
          v31 = CDesktopManager::s_fTimelineDirty;
          if ( v30 )
            v31 = 1;
          *((_QWORD *)this + 52) = 0LL;
          CDesktopManager::s_fTimelineDirty = v31;
        }
      }
      v12 = CButton::DrawStateW((__int64)this, *((_QWORD *)this + 40), 4u);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x15Eu);
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
          v18 = *(CVisual **)(v13 + 80);
          if ( v18 )
          {
            v19 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v18 + 24LL);
            if ( v19 == CVisual::SetDirtyFlags )
              CVisual::SetDirtyFlags(v18, 0x2000u);
            else
              v19(v18, 0x2000u);
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
