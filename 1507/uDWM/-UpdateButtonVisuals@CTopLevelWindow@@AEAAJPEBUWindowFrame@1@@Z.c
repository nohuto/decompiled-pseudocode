/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180023058
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023350 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x18001A7C0 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180022F3C (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180024AFC (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(CTopLevelWindow *this, struct CBitmapSource **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  float v9; // xmm6_4
  struct CBitmapSource **v10; // rbp
  CButton *v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // r8
  const struct CBitmapSourceArray *v14; // rdx
  int v15; // eax
  CButton *v16; // rcx
  unsigned __int64 v17; // r8
  int v18; // eax
  CButton *v19; // rcx
  const struct CBitmapSourceArray *v20; // rdx
  int v21; // eax
  CButton *v22; // rcx
  int v24; // ebp
  __int64 v25; // r9
  int v26; // r10d
  int v27; // r8d
  CVisual *v28; // rcx
  int v29; // eax
  CVisual *v30; // rcx
  bool v31; // r8
  __int64 v32; // rdx

  v4 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x921u);
  }
  else
  {
    v6 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 2);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x922u);
    }
    else
    {
      v7 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 3);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x923u);
      }
      else
      {
        v8 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 0);
        v5 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x924u);
        }
        else
        {
          if ( *((_DWORD *)this + 176) == -1 )
          {
            v24 = *(_DWORD *)(*((_QWORD *)this + 93) + 292LL);
            if ( v24 >= 192 )
              *((_DWORD *)this + 176) = 3;
            else
              *((_DWORD *)this + 176) = v24 >= MulDiv(96, 3, 2) ? 2 : v24 >= MulDiv(96, 5, 4);
            v25 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames;
            v26 = *(_DWORD *)(*((_QWORD *)this + 93) + 672LL);
            v27 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 64LL) + 72LL)
                + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 64LL) + 76LL);
            if ( v27
               + *(_DWORD *)(**(_QWORD **)(160LL * *((int *)this + 176)
                                         + *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames
                                         + 144)
                           + 28LL) > v26 )
            {
              *((_DWORD *)this + 176) = 0;
              do
              {
                v32 = *((int *)this + 176);
                if ( v27 + *(_DWORD *)(**(_QWORD **)(160 * v32 + v25 + 304) + 28LL) > v26 )
                  break;
                *((_DWORD *)this + 176) = v32 + 1;
              }
              while ( (unsigned __int64)((int)v32 + 1) < 3 );
            }
          }
          if ( a2 )
          {
            v9 = FLOAT_1_0;
            if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
              v9 = FLOAT_0_40000001;
            v10 = &a2[20 * *((int *)this + 176) + 18];
            v11 = (CButton *)*((_QWORD *)this + 64);
            if ( !v11 )
              goto LABEL_15;
            v12 = *((_DWORD *)this + 152);
            v13 = (unsigned __int64)(v10 + 16);
            if ( (v12 & 0x40000) == 0 )
              v13 = (unsigned __int64)(v10 + 12);
            v14 = (const struct CBitmapSourceArray *)a2;
            if ( (v12 & 0x800) == 0 )
              v14 = (const struct CBitmapSourceArray *)(a2 + 4);
            v15 = CButton::SetVisualStates(v11, v14, v13, a2[17], v9);
            v5 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x96Eu);
            }
            else
            {
LABEL_15:
              v16 = (CButton *)*((_QWORD *)this + 65);
              if ( !v16 )
                goto LABEL_19;
              v17 = (unsigned __int64)(v10 + 16);
              if ( (*((_BYTE *)this + 608) & 0x20) == 0 )
                v17 = (unsigned __int64)(v10 + 8);
              v18 = CButton::SetVisualStates(v16, (const struct CBitmapSourceArray *)a2, v17, a2[17], v9);
              v5 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x97Au);
              }
              else
              {
LABEL_19:
                v19 = (CButton *)*((_QWORD *)this + 66);
                if ( v19 )
                {
                  v20 = (const struct CBitmapSourceArray *)(a2 + 12);
                  if ( (*((_DWORD *)this + 152) & 0xB00) != 0 )
                    v20 = (const struct CBitmapSourceArray *)(a2 + 8);
                  v21 = CButton::SetVisualStates(v19, v20, (unsigned __int64)v10, a2[16], v9);
                  v5 = v21;
                  if ( v21 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x987u);
                    return v5;
                  }
                  if ( (*(_BYTE *)(*((_QWORD *)this + 93) + 552LL) & 0x40) != 0 )
                  {
                    v28 = (CVisual *)*((_QWORD *)this + 66);
                    *((_BYTE *)v28 + 304) |= 0x10u;
                    CVisual::SetDirtyFlags(v28, 0x8000);
                  }
                }
                v22 = (CButton *)*((_QWORD *)this + 63);
                if ( v22 )
                {
                  v29 = CButton::SetVisualStates(
                          v22,
                          (const struct CBitmapSourceArray *)(a2 + 4),
                          (unsigned __int64)(v10 + 4),
                          a2[17],
                          v9);
                  v5 = v29;
                  if ( v29 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x996u);
                  }
                  else
                  {
                    v30 = (CVisual *)*((_QWORD *)this + 63);
                    v31 = (*(_BYTE *)(*((_QWORD *)this + 93) + 320LL) & 8) != 0;
                    if ( ((*((_BYTE *)v30 + 304) & 0x20) != 0) != v31 )
                    {
                      *((_BYTE *)v30 + 304) ^= (*((_BYTE *)v30 + 304) ^ (32 * v31)) & 0x20;
                      CVisual::SetDirtyFlags(v30, 0x8000);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v5;
}
