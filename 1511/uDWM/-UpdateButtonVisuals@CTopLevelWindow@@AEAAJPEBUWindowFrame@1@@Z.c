/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800287A4
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180028AC0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x180010898 (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x18001F3A0 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800263EC (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x1800264F4 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180028688 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18002A634 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003C128 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18004440C (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(CTopLevelWindow *this, struct CBitmapSource **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *CurrentDefaultColorizationFlags; // rax
  __int64 WindowColorizationColor; // rax
  float v11; // xmm6_4
  char v12; // dl
  struct CBitmapSource **v13; // rbp
  CButton *v14; // rcx
  int v15; // eax
  const struct CBitmapSourceArray *v16; // r8
  const struct CBitmapSourceArray *v17; // rdx
  int v18; // eax
  CButton *v19; // rcx
  const struct CBitmapSourceArray *v20; // r8
  int v21; // eax
  CButton *v22; // rcx
  const struct CBitmapSourceArray *v23; // rdx
  int v24; // eax
  CButton *v25; // rcx
  int v27; // ebp
  __int64 v28; // r9
  int v29; // r10d
  int v30; // r8d
  int v31; // eax
  __int64 v32; // rdx
  CVisual *v33; // rcx
  int v34; // eax
  const struct CBitmapSourceArray *v35; // r8
  const struct CBitmapSourceArray *v36; // rdx
  int v37; // eax
  CButton *v38; // rcx
  const struct CBitmapSourceArray *v39; // r8
  int v40; // eax
  CButton *v41; // rcx
  const struct CBitmapSourceArray *v42; // rdx
  int v43; // eax
  CVisual *v44; // rcx
  CButton *v45; // rcx
  int v46; // eax
  int v47; // [rsp+60h] [rbp+18h] BYREF

  v4 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x93Du);
    return v5;
  }
  v6 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 2);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x93Eu);
    return v5;
  }
  v7 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 3);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x93Fu);
    return v5;
  }
  v8 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 0);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x940u);
    return v5;
  }
  if ( *((_DWORD *)this + 176) == -1 )
  {
    v27 = *(_DWORD *)(*((_QWORD *)this + 93) + 308LL);
    if ( v27 >= 192 )
      *((_DWORD *)this + 176) = 3;
    else
      *((_DWORD *)this + 176) = v27 >= MulDiv(96, 3, 2) ? 2 : v27 >= MulDiv(96, 5, 4);
    v28 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames;
    v29 = *(_DWORD *)(*((_QWORD *)this + 93) + 680LL);
    v30 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 128LL) + 72LL)
        + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 128LL) + 76LL);
    if ( v30
       + *(_DWORD *)(**(_QWORD **)(320LL * *((int *)this + 176) + *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 208)
                   + 28LL) > v29 )
    {
      *((_DWORD *)this + 176) = 0;
      do
      {
        v32 = *((int *)this + 176);
        if ( v30 + *(_DWORD *)(**(_QWORD **)(320 * v32 + v28 + 528) + 28LL) > v29 )
          break;
        *((_DWORD *)this + 176) = v32 + 1;
      }
      while ( (unsigned __int64)((int)v32 + 1) < 3 );
    }
  }
  if ( a2 )
  {
    CurrentDefaultColorizationFlags = CTopLevelWindow::GetCurrentDefaultColorizationFlags((__int64)this, &v47);
    WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(
                                (__int64)this,
                                *(_BYTE *)CurrentDefaultColorizationFlags | 8u);
    if ( BYTE2(WindowColorizationColor)
       + 5 * BYTE1(WindowColorizationColor)
       + 2 * (unsigned __int8)WindowColorizationColor <= 1024
      && !CDesktopManager::IsHighContrastMode() )
    {
      IsPPIEdition();
    }
    v11 = FLOAT_1_0;
    if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
      v11 = FLOAT_0_40000001;
    v13 = &a2[40 * *((int *)this + 176) + 26];
    v14 = (CButton *)*((_QWORD *)this + 64);
    if ( v12 )
    {
      if ( v14 )
      {
        v15 = *((_DWORD *)this + 152);
        v16 = (const struct CBitmapSourceArray *)(v13 + 16);
        if ( (v15 & 0x40000) == 0 )
          v16 = (const struct CBitmapSourceArray *)(v13 + 12);
        v17 = (const struct CBitmapSourceArray *)a2;
        if ( (v15 & 0x800) == 0 )
          v17 = (const struct CBitmapSourceArray *)(a2 + 4);
        v18 = CButton::SetVisualStates(v14, v17, v16, a2[25], v11);
        v5 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x990u);
          return v5;
        }
      }
      v19 = (CButton *)*((_QWORD *)this + 65);
      if ( v19 )
      {
        v20 = (const struct CBitmapSourceArray *)(v13 + 16);
        if ( (*((_BYTE *)this + 608) & 0x20) == 0 )
          v20 = (const struct CBitmapSourceArray *)(v13 + 8);
        v21 = CButton::SetVisualStates(v19, (const struct CBitmapSourceArray *)a2, v20, a2[25], v11);
        v5 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x99Cu);
          return v5;
        }
      }
      v22 = (CButton *)*((_QWORD *)this + 66);
      if ( v22 )
      {
        v23 = (const struct CBitmapSourceArray *)(a2 + 20);
        if ( (*((_DWORD *)this + 152) & 0xB00) != 0 )
          v23 = (const struct CBitmapSourceArray *)(a2 + 16);
        v24 = CButton::SetVisualStates(v22, v23, (const struct CBitmapSourceArray *)v13, a2[24], v11);
        v5 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x9A9u);
          return v5;
        }
        if ( (*(_BYTE *)(*((_QWORD *)this + 93) + 568LL) & 0x40) != 0 )
        {
          v33 = (CVisual *)*((_QWORD *)this + 66);
          *((_BYTE *)v33 + 304) |= 0x10u;
          CVisual::SetDirtyFlags(v33, 0x8000);
        }
      }
      v25 = (CButton *)*((_QWORD *)this + 63);
      if ( !v25 )
        return v5;
      v31 = CButton::SetVisualStates(
              v25,
              (const struct CBitmapSourceArray *)(a2 + 4),
              (const struct CBitmapSourceArray *)(v13 + 4),
              a2[25],
              v11);
      v5 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v31, 0x9B8u);
        return v5;
      }
    }
    else
    {
      if ( v14 )
      {
        v34 = *((_DWORD *)this + 152);
        v35 = (const struct CBitmapSourceArray *)(v13 + 36);
        if ( (v34 & 0x40000) == 0 )
          v35 = (const struct CBitmapSourceArray *)(v13 + 32);
        v36 = (const struct CBitmapSourceArray *)(a2 + 8);
        if ( (v34 & 0x800) == 0 )
          v36 = (const struct CBitmapSourceArray *)(a2 + 12);
        v37 = CButton::SetVisualStates(v14, v36, v35, a2[25], v11);
        v5 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v37, 0x9CAu);
          return v5;
        }
      }
      v38 = (CButton *)*((_QWORD *)this + 65);
      if ( v38 )
      {
        v39 = (const struct CBitmapSourceArray *)(v13 + 36);
        if ( (*((_BYTE *)this + 608) & 0x20) == 0 )
          v39 = (const struct CBitmapSourceArray *)(v13 + 28);
        v40 = CButton::SetVisualStates(v38, (const struct CBitmapSourceArray *)(a2 + 8), v39, a2[25], v11);
        v5 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v40, 0x9D6u);
          return v5;
        }
      }
      v41 = (CButton *)*((_QWORD *)this + 66);
      if ( v41 )
      {
        v42 = (const struct CBitmapSourceArray *)(a2 + 20);
        if ( (*((_DWORD *)this + 152) & 0xB00) != 0 )
          v42 = (const struct CBitmapSourceArray *)(a2 + 16);
        v43 = CButton::SetVisualStates(v41, v42, (const struct CBitmapSourceArray *)(v13 + 20), a2[24], v11);
        v5 = v43;
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v43, 0x9E3u);
          return v5;
        }
        if ( (*(_BYTE *)(*((_QWORD *)this + 93) + 568LL) & 0x40) != 0 )
        {
          v44 = (CVisual *)*((_QWORD *)this + 66);
          *((_BYTE *)v44 + 304) |= 0x10u;
          CVisual::SetDirtyFlags(v44, 0x8000);
        }
      }
      v45 = (CButton *)*((_QWORD *)this + 63);
      if ( !v45 )
        return v5;
      v46 = CButton::SetVisualStates(
              v45,
              (const struct CBitmapSourceArray *)(a2 + 12),
              (const struct CBitmapSourceArray *)(v13 + 24),
              a2[25],
              v11);
      v5 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v46, 0x9F2u);
        return v5;
      }
    }
    CButton::SetReverseRTLMirror(*((CButton **)this + 63), (*(_BYTE *)(*((_QWORD *)this + 93) + 336LL) & 8) != 0);
  }
  return v5;
}
