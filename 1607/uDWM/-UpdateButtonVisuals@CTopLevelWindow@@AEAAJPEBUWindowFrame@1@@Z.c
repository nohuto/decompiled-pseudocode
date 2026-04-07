/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800259A8
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180025DA0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x180007278 (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x18001C1A0 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180023750 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x1800237D0 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x18002588C (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180027560 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180039420 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180045B84 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(CTopLevelWindow *this, struct CBitmapSource **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  __int64 v10; // r8
  int v11; // r9d
  int v12; // edx
  _DWORD *CurrentDefaultColorizationFlags; // rax
  __int64 WindowColorizationColor; // rax
  float v15; // xmm6_4
  char v16; // dl
  struct CBitmapSource **v17; // rbp
  CButton *v18; // rcx
  int v19; // eax
  const struct CBitmapSourceArray *v20; // r8
  const struct CBitmapSourceArray *v21; // rdx
  int v22; // eax
  CButton *v23; // rcx
  const struct CBitmapSourceArray *v24; // r8
  int v25; // eax
  CButton *v26; // rcx
  const struct CBitmapSourceArray *v27; // rdx
  int v28; // eax
  CButton *v29; // rcx
  int v31; // eax
  CVisual *v32; // rcx
  int v33; // eax
  const struct CBitmapSourceArray *v34; // r8
  const struct CBitmapSourceArray *v35; // rdx
  int v36; // eax
  CButton *v37; // rcx
  const struct CBitmapSourceArray *v38; // r8
  int v39; // eax
  CButton *v40; // rcx
  const struct CBitmapSourceArray *v41; // rdx
  int v42; // eax
  CVisual *v43; // rcx
  CButton *v44; // rcx
  int v45; // eax
  int v46; // [rsp+60h] [rbp+18h] BYREF

  v4 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x7C3u);
    return v5;
  }
  v6 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 2);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x7C4u);
    return v5;
  }
  v7 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 3);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x7C5u);
    return v5;
  }
  v8 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 0);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x7C6u);
    return v5;
  }
  if ( *((_DWORD *)this + 176) == -1 )
  {
    v9 = *(_DWORD *)(*((_QWORD *)this + 93) + 308LL);
    if ( v9 >= 192 )
      *((_DWORD *)this + 176) = 3;
    else
      *((_DWORD *)this + 176) = v9 >= MulDiv(96, 3, 2) ? 2 : v9 >= MulDiv(96, 5, 4);
    v10 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames;
    v11 = *(_DWORD *)(*((_QWORD *)this + 93) + 688LL);
    v12 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 72LL)
        + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 76LL);
    if ( v12
       + *(_DWORD *)(**(_QWORD **)(320LL * *((int *)this + 176) + *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 216)
                   + 28LL) > v11 )
    {
      *((_DWORD *)this + 176) = 0;
      do
      {
        if ( v12 + *(_DWORD *)(**(_QWORD **)(320LL * (*((_DWORD *)this + 176) + 1) + v10 + 216) + 28LL) > v11 )
          break;
        ++*((_DWORD *)this + 176);
      }
      while ( (unsigned __int64)*((int *)this + 176) < 3 );
    }
  }
  if ( a2 )
  {
    CurrentDefaultColorizationFlags = CTopLevelWindow::GetCurrentDefaultColorizationFlags((__int64)this, &v46);
    WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(
                                (__int64)this,
                                *CurrentDefaultColorizationFlags | 8u);
    if ( BYTE2(WindowColorizationColor)
       + 5 * BYTE1(WindowColorizationColor)
       + 2 * (unsigned __int8)WindowColorizationColor <= 1024
      && !CDesktopManager::IsHighContrastMode() )
    {
      IsPPIEdition();
    }
    v15 = FLOAT_1_0;
    if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
      v15 = FLOAT_0_40000001;
    v17 = &a2[40 * *((int *)this + 176) + 27];
    v18 = (CButton *)*((_QWORD *)this + 64);
    if ( v16 )
    {
      if ( v18 )
      {
        v19 = *((_DWORD *)this + 152);
        v20 = (const struct CBitmapSourceArray *)(v17 + 16);
        if ( (v19 & 0x40000) == 0 )
          v20 = (const struct CBitmapSourceArray *)(v17 + 12);
        v21 = (const struct CBitmapSourceArray *)(a2 + 1);
        if ( (v19 & 0x800) == 0 )
          v21 = (const struct CBitmapSourceArray *)(a2 + 5);
        v22 = CButton::SetVisualStates(v18, v21, v20, a2[26], v15);
        v5 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x814u);
          return v5;
        }
      }
      v23 = (CButton *)*((_QWORD *)this + 65);
      if ( v23 )
      {
        v24 = (const struct CBitmapSourceArray *)(v17 + 16);
        if ( (*((_BYTE *)this + 608) & 0x20) == 0 )
          v24 = (const struct CBitmapSourceArray *)(v17 + 8);
        v25 = CButton::SetVisualStates(v23, (const struct CBitmapSourceArray *)(a2 + 1), v24, a2[26], v15);
        v5 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x820u);
          return v5;
        }
      }
      v26 = (CButton *)*((_QWORD *)this + 66);
      if ( v26 )
      {
        v27 = (const struct CBitmapSourceArray *)(a2 + 21);
        if ( (*((_DWORD *)this + 152) & 0xB00) != 0 )
          v27 = (const struct CBitmapSourceArray *)(a2 + 17);
        v28 = CButton::SetVisualStates(v26, v27, (const struct CBitmapSourceArray *)v17, a2[25], v15);
        v5 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x82Du);
          return v5;
        }
        if ( (*(_BYTE *)(*((_QWORD *)this + 93) + 576LL) & 0x40) != 0 )
        {
          v32 = (CVisual *)*((_QWORD *)this + 66);
          *((_BYTE *)v32 + 304) |= 0x10u;
          CVisual::SetDirtyFlags(v32, 0x8000);
        }
      }
      v29 = (CButton *)*((_QWORD *)this + 63);
      if ( !v29 )
        return v5;
      v31 = CButton::SetVisualStates(
              v29,
              (const struct CBitmapSourceArray *)(a2 + 5),
              (const struct CBitmapSourceArray *)(v17 + 4),
              a2[26],
              v15);
      v5 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x83Cu);
        return v5;
      }
    }
    else
    {
      if ( v18 )
      {
        v33 = *((_DWORD *)this + 152);
        v34 = (const struct CBitmapSourceArray *)(v17 + 36);
        if ( (v33 & 0x40000) == 0 )
          v34 = (const struct CBitmapSourceArray *)(v17 + 32);
        v35 = (const struct CBitmapSourceArray *)(a2 + 9);
        if ( (v33 & 0x800) == 0 )
          v35 = (const struct CBitmapSourceArray *)(a2 + 13);
        v36 = CButton::SetVisualStates(v18, v35, v34, a2[26], v15);
        v5 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x84Eu);
          return v5;
        }
      }
      v37 = (CButton *)*((_QWORD *)this + 65);
      if ( v37 )
      {
        v38 = (const struct CBitmapSourceArray *)(v17 + 36);
        if ( (*((_BYTE *)this + 608) & 0x20) == 0 )
          v38 = (const struct CBitmapSourceArray *)(v17 + 28);
        v39 = CButton::SetVisualStates(v37, (const struct CBitmapSourceArray *)(a2 + 9), v38, a2[26], v15);
        v5 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x85Au);
          return v5;
        }
      }
      v40 = (CButton *)*((_QWORD *)this + 66);
      if ( v40 )
      {
        v41 = (const struct CBitmapSourceArray *)(a2 + 21);
        if ( (*((_DWORD *)this + 152) & 0xB00) != 0 )
          v41 = (const struct CBitmapSourceArray *)(a2 + 17);
        v42 = CButton::SetVisualStates(v40, v41, (const struct CBitmapSourceArray *)(v17 + 20), a2[25], v15);
        v5 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x867u);
          return v5;
        }
        if ( (*(_BYTE *)(*((_QWORD *)this + 93) + 576LL) & 0x40) != 0 )
        {
          v43 = (CVisual *)*((_QWORD *)this + 66);
          *((_BYTE *)v43 + 304) |= 0x10u;
          CVisual::SetDirtyFlags(v43, 0x8000);
        }
      }
      v44 = (CButton *)*((_QWORD *)this + 63);
      if ( !v44 )
        return v5;
      v45 = CButton::SetVisualStates(
              v44,
              (const struct CBitmapSourceArray *)(a2 + 13),
              (const struct CBitmapSourceArray *)(v17 + 24),
              a2[26],
              v15);
      v5 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x876u);
        return v5;
      }
    }
    CButton::SetReverseRTLMirror(*((CButton **)this + 63), (*(_BYTE *)(*((_QWORD *)this + 93) + 336LL) & 8) != 0);
  }
  return v5;
}
