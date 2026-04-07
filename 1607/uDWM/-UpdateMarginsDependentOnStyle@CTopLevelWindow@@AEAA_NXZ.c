/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180023210
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x1800066E4 (-GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180006764 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x1800080F8 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?GetSystemMetrics@CWindowData@@QEAAHH@Z @ 0x18001B4CC (-GetSystemMetrics@CWindowData@@QEAAHH@Z.c)
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x18003C9A0 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004F7C0 (IsOpenThemeDataPresent.c)
 *     ceil_0 @ 0x180050546 (ceil_0.c)
 *     floor_0 @ 0x18005056A (floor_0.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18007D324 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

_BOOL8 __fastcall CTopLevelWindow::UpdateMarginsDependentOnStyle(CTopLevelWindow *this)
{
  __int64 v1; // rbx
  int v2; // esi
  char v4; // r12
  LONG bottom; // ecx
  LONG v6; // r9d
  LONG top; // r8d
  LONG left; // edx
  bool v9; // bl
  const struct _MARGINS *v10; // rsi
  bool v11; // bl
  double v13; // xmm6_8
  int v14; // eax
  double v15; // xmm7_8
  int SystemMetrics; // eax
  int v17; // eax
  int SystemMetrics96; // eax
  int right; // esi
  CDesktopManager *v20; // r15
  double v21; // xmm0_8
  double v22; // xmm0_8
  int v23; // r14d
  double v24; // xmm0_8
  double v25; // xmm0_8
  int v26; // edx
  int v27; // esi
  int v28; // eax
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  int v32; // ecx
  struct CWindowData *v33; // rdx
  CProjectionBorderVisual *v34; // rcx
  char v35; // r12
  __int64 v36; // rcx
  int v37; // eax
  int v38; // eax
  __int64 v39; // r11
  int v40; // r8d
  int v41; // r10d
  int v42; // edx
  int v43; // r9d
  int v44; // ecx
  __m128i v45; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v46; // [rsp+48h] [rbp-29h] BYREF
  int v47[4]; // [rsp+58h] [rbp-19h]
  struct tagRECT v48; // [rsp+68h] [rbp-9h] BYREF

  v1 = *((_QWORD *)this + 93);
  v2 = *((_DWORD *)this + 152);
  v4 = 0;
  *(_OWORD *)v47 = 0LL;
  v45 = 0LL;
  *(_QWORD *)&v48.left = 0LL;
  *(_QWORD *)&v48.right = 0LL;
  if ( !(unsigned __int8)IsOpenThemeDataPresent()
    || (v2 & 6) == 0
    || *(_DWORD *)(v1 + 64) < CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    || *(_DWORD *)(v1 + 68) < dword_1800B7D64
    || *(_DWORD *)(v1 + 72) < dword_1800B7D68
    || *(_DWORD *)(v1 + 76) < dword_1800B7D6C
    || (*(_DWORD *)(v1 + 104) & 0x800000) != 0 )
  {
    goto LABEL_7;
  }
  v13 = DOUBLE_1_0;
  v14 = *(_DWORD *)(v1 + 304);
  v15 = DOUBLE_1_0;
  if ( v14 )
  {
    if ( v14 == 1 || *(_DWORD *)(v1 + 328) )
      v15 = (double)*(int *)(v1 + 308) / (double)*((int *)CDesktopManager::s_pDesktopManagerInstance + 361);
    SystemMetrics = GetSystemMetrics(92);
  }
  else
  {
    v15 = *(double *)(v1 + 296);
    SystemMetrics = GetSystemMetrics96(92LL);
  }
  if ( (int)((double)SystemMetrics * v15) > 0 )
  {
    *(_QWORD *)&v46.top = 0LL;
    v46.bottom = 0;
    if ( (*(_BYTE *)(v1 + 102) & 0xC0) == 0xC0 )
    {
      if ( *(char *)(v1 + 104) < 0 )
      {
        right = CWindowData::GetSystemMetrics((CWindowData *)v1, 51);
      }
      else
      {
        v17 = *(_DWORD *)(v1 + 304);
        if ( v17 )
        {
          if ( v17 == 1 || *(_DWORD *)(v1 + 328) )
            v13 = (double)*(int *)(v1 + 308) / (double)*((int *)CDesktopManager::s_pDesktopManagerInstance + 361);
          SystemMetrics96 = GetSystemMetrics(4);
        }
        else
        {
          v13 = *(double *)(v1 + 296);
          SystemMetrics96 = GetSystemMetrics96(4LL);
        }
        right = (int)((double)SystemMetrics96 * v13);
      }
    }
    else
    {
      right = v46.right;
    }
    v20 = CDesktopManager::s_pDesktopManagerInstance;
    v21 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 163);
    if ( v21 < 0.0 )
      v22 = ceil_0(v21 - 0.5);
    else
      v22 = floor_0(v21 + 0.5);
    v23 = (int)v22;
    v24 = *((double *)v20 + 164);
    if ( v24 < 0.0 )
      v25 = ceil_0(v24 - 0.5);
    else
      v25 = floor_0(v24 + 0.5);
    v26 = *(_DWORD *)(v1 + 64);
    v27 = v23 + right;
    v28 = (int)v25;
    if ( v26 <= (int)v25 )
      v29 = (int)v25;
    else
      v29 = *(_DWORD *)(v1 + 64);
    v30 = *(_DWORD *)(v1 + 68);
    left = v26 - v29;
    if ( v30 > v28 )
      v28 = *(_DWORD *)(v1 + 68);
    v31 = *(_DWORD *)(v1 + 72);
    top = v30 - v28;
    if ( v31 > v27 )
      v27 = *(_DWORD *)(v1 + 72);
    v32 = *(_DWORD *)(v1 + 76);
    v6 = v31 - v27;
    if ( v32 > v23 )
      v23 = *(_DWORD *)(v1 + 76);
    bottom = v32 - v23;
  }
  else
  {
LABEL_7:
    bottom = v48.bottom;
    v6 = v48.right;
    top = v48.top;
    left = v48.left;
  }
  v9 = SetMargin(
         (struct _MARGINS *)((char *)this + 644),
         left,
         top,
         v6,
         bottom,
         (const struct _MARGINS *)((char *)this + 628));
  if ( (*((_DWORD *)this + 152) & 0x200020) != 0 )
  {
    v36 = *((_QWORD *)this + 93);
    v48 = *(struct tagRECT *)(v36 + 48);
    v37 = *(_DWORD *)(v36 + 196) - *(_DWORD *)(v36 + 188);
    if ( v37 < 0 )
      v37 = 0;
    v48.right = v48.left + (int)((double)v37 * *(double *)(v36 + 288));
    v38 = *(_DWORD *)(v36 + 200) - *(_DWORD *)(v36 + 192);
    if ( v38 < 0 )
      v38 = 0;
    v48.bottom = v48.top + (int)((double)v38 * *(double *)(v36 + 296));
    if ( !CTopLevelWindow::GetMonitorRect((CTopLevelWindow *)(unsigned int)v48.bottom, &v48, &v46) )
      v46 = v48;
    v39 = *((_QWORD *)this + 93);
    v40 = v46.left - v48.left;
    if ( v46.left - v48.left < 0 )
    {
      v40 = 0;
      v45.m128i_i32[0] = 0;
    }
    else
    {
      v45.m128i_i32[0] = v46.left - v48.left;
    }
    v41 = v48.right - v46.right;
    if ( v48.right - v46.right < 0 )
    {
      v41 = 0;
      v45.m128i_i32[1] = 0;
    }
    else
    {
      v45.m128i_i32[1] = v48.right - v46.right;
    }
    v42 = v46.top - v48.top;
    if ( v46.top - v48.top < 0 )
      v42 = 0;
    v43 = v48.bottom - v46.bottom;
    v45.m128i_i32[2] = v42;
    if ( v48.bottom - v46.bottom < 0 )
    {
      v43 = 0;
      v45.m128i_i32[3] = 0;
    }
    else
    {
      v45.m128i_i32[3] = v48.bottom - v46.bottom;
    }
    v44 = *(_DWORD *)(v39 + 96);
    if ( v40 > v44 - *((_DWORD *)this + 161) )
      v45.m128i_i32[0] = 0;
    if ( v41 > v44 - *((_DWORD *)this + 162) )
      v45.m128i_i32[1] = 0;
    if ( v42 > v44 - *((_DWORD *)this + 163) )
      v45.m128i_i32[2] = 0;
    if ( v43 > v44 - *((_DWORD *)this + 164) )
      v45.m128i_i32[3] = 0;
    if ( (*((_DWORD *)this + 152) & 0x200020) != 0 )
    {
      v4 = 1;
      *(__m128i *)v47 = _mm_load_si128(&v45);
      *(_OWORD *)(v39 + 272) = *(_OWORD *)v47;
    }
  }
  v10 = (const struct _MARGINS *)((char *)this + 660);
  v11 = SetMargin((struct _MARGINS *)((char *)this + 660), v47[0], v47[1], v47[2], v47[3], 0LL) || v9;
  if ( v4 || (*((_BYTE *)this + 264) & 4) != 0 )
  {
    v35 = *((_BYTE *)this + 264) ^ (*((_BYTE *)this + 264) ^ (4 * v4)) & 4;
    *((_BYTE *)this + 264) = v35;
    if ( (v35 & 4) == 0 )
      v10 = 0LL;
    CAtlasedRectsVisual::SetClipMargins(*((CAtlasedRectsVisual **)this + 37), v10);
    CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
  }
  if ( v11 )
  {
    v33 = (struct CWindowData *)*((_QWORD *)this + 93);
    v34 = (CProjectionBorderVisual *)*((_QWORD *)v33 + 50);
    if ( v34 )
      CProjectionBorderVisual::UpdateRectFromWindow(v34, v33);
  }
  return v11;
}
