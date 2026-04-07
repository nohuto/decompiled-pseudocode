/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180020970
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x180005F40 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     ?GetSystemMetrics@CWindowData@@QEAAHH@Z @ 0x18001906C (-GetSystemMetrics@CWindowData@@QEAAHH@Z.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18001AD74 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x18001EBB8 (-GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18001EFBC (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180048B60 (IsOpenThemeDataPresent.c)
 *     ceil_0 @ 0x180049866 (ceil_0.c)
 *     floor_0 @ 0x18004988A (floor_0.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateMarginsDependentOnStyle(CTopLevelWindow *this)
{
  __int64 v1; // rbx
  int v2; // esi
  char v4; // r12
  double v5; // xmm6_8
  int v6; // eax
  double v7; // xmm7_8
  int SystemMetrics; // eax
  int v9; // esi
  int v10; // eax
  int SystemMetrics96; // eax
  CDesktopManager *v12; // r15
  double v13; // xmm0_8
  double v14; // xmm0_8
  int v15; // r14d
  double v16; // xmm0_8
  double v17; // xmm0_8
  int v18; // edx
  int v19; // esi
  int v20; // eax
  int v21; // ecx
  int v22; // r8d
  LONG left; // edx
  int v24; // r9d
  LONG top; // r8d
  int v26; // ecx
  LONG right; // r9d
  LONG bottom; // ecx
  char v29; // bl
  char v30; // al
  const struct _MARGINS *v31; // rcx
  unsigned __int8 v32; // bl
  char v34; // r12
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // r10d
  int v39; // r9d
  int v40; // edx
  int v41; // r8d
  int v42; // ecx
  int v43; // [rsp+38h] [rbp-39h]
  int v44; // [rsp+3Ch] [rbp-35h]
  int v45; // [rsp+40h] [rbp-31h]
  int v46; // [rsp+44h] [rbp-2Dh]
  struct tagRECT v47; // [rsp+58h] [rbp-19h] BYREF
  struct tagRECT v48; // [rsp+68h] [rbp-9h] BYREF

  v1 = *((_QWORD *)this + 93);
  v2 = *((_DWORD *)this + 152);
  v4 = 0;
  *(_QWORD *)&v48.left = 0LL;
  *(_QWORD *)&v48.right = 0LL;
  if ( !(unsigned __int8)IsOpenThemeDataPresent()
    || (v2 & 6) == 0
    || *(_DWORD *)(v1 + 64) < CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    || *(_DWORD *)(v1 + 68) < dword_1800BC52C
    || *(_DWORD *)(v1 + 72) < dword_1800BC530
    || *(_DWORD *)(v1 + 76) < dword_1800BC534
    || (*(_DWORD *)(v1 + 104) & 0x800000) != 0 )
  {
    goto LABEL_40;
  }
  v5 = DOUBLE_1_0;
  v6 = *(_DWORD *)(v1 + 288);
  v7 = DOUBLE_1_0;
  if ( v6 )
  {
    if ( v6 == 1 || *(_DWORD *)(v1 + 312) )
      v7 = (double)*(int *)(v1 + 292) / (double)*((int *)CDesktopManager::s_pDesktopManagerInstance + 365);
    SystemMetrics = GetSystemMetrics(92);
  }
  else
  {
    v7 = *(double *)(v1 + 280);
    SystemMetrics = GetSystemMetrics96(92LL);
  }
  if ( (int)((double)SystemMetrics * v7) > 0 )
  {
    v9 = 0;
    if ( (*(_BYTE *)(v1 + 102) & 0xC0) == 0xC0 )
    {
      if ( *(char *)(v1 + 104) < 0 )
      {
        v9 = CWindowData::GetSystemMetrics((CWindowData *)v1, 51);
      }
      else
      {
        v10 = *(_DWORD *)(v1 + 288);
        if ( v10 )
        {
          if ( v10 == 1 || *(_DWORD *)(v1 + 312) )
            v5 = (double)*(int *)(v1 + 292) / (double)*((int *)CDesktopManager::s_pDesktopManagerInstance + 365);
          SystemMetrics96 = GetSystemMetrics(4);
        }
        else
        {
          v5 = *(double *)(v1 + 280);
          SystemMetrics96 = GetSystemMetrics96(4LL);
        }
        v9 = (int)((double)SystemMetrics96 * v5);
      }
    }
    v12 = CDesktopManager::s_pDesktopManagerInstance;
    v13 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 165);
    if ( v13 < 0.0 )
      v14 = ceil_0(v13 - 0.5);
    else
      v14 = floor_0(v13 + 0.5);
    v15 = (int)v14;
    v16 = *((double *)v12 + 166);
    if ( v16 < 0.0 )
      v17 = ceil_0(v16 - 0.5);
    else
      v17 = floor_0(v16 + 0.5);
    v18 = *(_DWORD *)(v1 + 64);
    v19 = v15 + v9;
    v20 = (int)v17;
    if ( v18 <= (int)v17 )
      v21 = (int)v17;
    else
      v21 = *(_DWORD *)(v1 + 64);
    v22 = *(_DWORD *)(v1 + 68);
    left = v18 - v21;
    if ( v22 > v20 )
      v20 = *(_DWORD *)(v1 + 68);
    v24 = *(_DWORD *)(v1 + 72);
    top = v22 - v20;
    if ( v24 > v19 )
      v19 = *(_DWORD *)(v1 + 72);
    v26 = *(_DWORD *)(v1 + 76);
    right = v24 - v19;
    if ( v26 > v15 )
      v15 = *(_DWORD *)(v1 + 76);
    bottom = v26 - v15;
  }
  else
  {
LABEL_40:
    bottom = v48.bottom;
    right = v48.right;
    top = v48.top;
    left = v48.left;
  }
  v29 = SetMargin(
          (struct _MARGINS *)((char *)this + 644),
          left,
          top,
          right,
          bottom,
          (const struct _MARGINS *)((char *)this + 628));
  if ( (*((_DWORD *)this + 152) & 0x400020) == 0 )
    goto LABEL_36;
  v35 = *((_QWORD *)this + 93);
  v48 = *(struct tagRECT *)(v35 + 48);
  v36 = *(_DWORD *)(v35 + 196) - *(_DWORD *)(v35 + 188);
  if ( v36 < 0 )
    v36 = 0;
  v48.right = v48.left + (int)((double)v36 * *(double *)(v35 + 272));
  v37 = *(_DWORD *)(v35 + 200) - *(_DWORD *)(v35 + 192);
  if ( v37 < 0 )
    v37 = 0;
  v48.bottom = v48.top + (int)((double)v37 * *(double *)(v35 + 280));
  if ( !CTopLevelWindow::GetMonitorRect((CTopLevelWindow *)(unsigned int)v48.bottom, &v48, &v47) )
    v47 = v48;
  v38 = v47.left - v48.left;
  if ( v47.left - v48.left < 0 )
  {
    v38 = 0;
    v43 = 0;
  }
  else
  {
    v43 = v47.left - v48.left;
  }
  v39 = v48.right - v47.right;
  if ( v48.right - v47.right < 0 )
  {
    v39 = 0;
    v44 = 0;
  }
  else
  {
    v44 = v48.right - v47.right;
  }
  v40 = v47.top - v48.top;
  if ( v47.top - v48.top < 0 )
    v40 = 0;
  v41 = v48.bottom - v47.bottom;
  v45 = v40;
  if ( v48.bottom - v47.bottom < 0 )
  {
    v41 = 0;
    v46 = 0;
  }
  else
  {
    v46 = v48.bottom - v47.bottom;
  }
  v42 = *(_DWORD *)(*((_QWORD *)this + 93) + 96LL);
  if ( v38 > v42 - *((_DWORD *)this + 161) )
    v43 = 0;
  if ( v39 > v42 - *((_DWORD *)this + 162) )
    v44 = 0;
  if ( v40 > v42 - *((_DWORD *)this + 163) )
    v45 = 0;
  if ( v41 > v42 - *((_DWORD *)this + 164) )
    v46 = 0;
  if ( (*((_BYTE *)this + 608) & 0x20) != 0 )
  {
    v4 = 1;
    v30 = SetMargin((struct _MARGINS *)((char *)this + 660), v43, v44, v45, v46, 0LL);
  }
  else
  {
LABEL_36:
    v30 = SetMargin((struct _MARGINS *)((char *)this + 660), 0, 0, 0, 0, 0LL);
  }
  v32 = v30 | v29;
  if ( v4 || (*((_BYTE *)this + 264) & 4) != 0 )
  {
    v34 = *((_BYTE *)this + 264) ^ (*((_BYTE *)this + 264) ^ (4 * v4)) & 4;
    *((_BYTE *)this + 264) = v34;
    if ( (v34 & 4) == 0 )
      v31 = 0LL;
    CAtlasedRectsVisual::SetClipMargins(*((CAtlasedRectsVisual **)this + 37), v31);
    CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
  }
  return v32;
}
