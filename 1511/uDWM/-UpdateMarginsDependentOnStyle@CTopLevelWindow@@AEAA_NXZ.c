/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180025F00
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x18000F758 (-GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18000F7D8 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x1800122D8 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?GetSystemMetrics@CWindowData@@QEAAHH@Z @ 0x18001E920 (-GetSystemMetrics@CWindowData@@QEAAHH@Z.c)
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x18003A820 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004F1C0 (IsOpenThemeDataPresent.c)
 *     ceil_0 @ 0x18004FF06 (ceil_0.c)
 *     floor_0 @ 0x18004FF2A (floor_0.c)
 */

_BOOL8 __fastcall CTopLevelWindow::UpdateMarginsDependentOnStyle(CTopLevelWindow *this)
{
  int v1; // esi
  __int64 v2; // rbx
  char v4; // r15
  LONG bottom; // ecx
  LONG right; // r9d
  LONG top; // r8d
  LONG left; // edx
  bool v9; // bl
  const struct _MARGINS *v10; // rsi
  bool v11; // bl
  double v13; // xmm6_8
  int v14; // eax
  double v15; // xmm7_8
  int SystemMetrics; // eax
  int v17; // esi
  int v18; // eax
  int SystemMetrics96; // eax
  CDesktopManager *v20; // r12
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
  char v33; // r15
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  __int64 v38; // r11
  int v39; // r9d
  int v40; // r8d
  int v41; // edx
  int v42; // r10d
  int v43; // eax
  __m128i v44; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v45; // [rsp+48h] [rbp-29h] BYREF
  int v46[4]; // [rsp+58h] [rbp-19h]
  struct tagRECT v47; // [rsp+68h] [rbp-9h] BYREF

  v1 = *((_DWORD *)this + 152);
  v2 = *((_QWORD *)this + 93);
  *(_OWORD *)v46 = 0LL;
  v44 = 0LL;
  v4 = 0;
  *(_QWORD *)&v47.left = 0LL;
  *(_QWORD *)&v47.right = 0LL;
  if ( !(unsigned __int8)IsOpenThemeDataPresent()
    || (v1 & 6) == 0
    || *(_DWORD *)(v2 + 64) < CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    || *(_DWORD *)(v2 + 68) < dword_1800BE5EC
    || *(_DWORD *)(v2 + 72) < dword_1800BE5F0
    || *(_DWORD *)(v2 + 76) < dword_1800BE5F4
    || (*(_DWORD *)(v2 + 104) & 0x800000) != 0 )
  {
    goto LABEL_7;
  }
  v13 = DOUBLE_1_0;
  v14 = *(_DWORD *)(v2 + 304);
  v15 = DOUBLE_1_0;
  if ( v14 )
  {
    if ( v14 == 1 || *(_DWORD *)(v2 + 328) )
      v15 = (double)*(int *)(v2 + 308) / (double)*((int *)CDesktopManager::s_pDesktopManagerInstance + 365);
    SystemMetrics = GetSystemMetrics(92);
  }
  else
  {
    v15 = *(double *)(v2 + 296);
    SystemMetrics = GetSystemMetrics96(92LL);
  }
  if ( (int)((double)SystemMetrics * v15) > 0 )
  {
    v17 = 0;
    if ( (*(_BYTE *)(v2 + 102) & 0xC0) == 0xC0 )
    {
      if ( *(char *)(v2 + 104) < 0 )
      {
        v17 = CWindowData::GetSystemMetrics((CWindowData *)v2, 51);
      }
      else
      {
        v18 = *(_DWORD *)(v2 + 304);
        if ( v18 )
        {
          if ( v18 == 1 || *(_DWORD *)(v2 + 328) )
            v13 = (double)*(int *)(v2 + 308) / (double)*((int *)CDesktopManager::s_pDesktopManagerInstance + 365);
          SystemMetrics96 = GetSystemMetrics(4);
        }
        else
        {
          v13 = *(double *)(v2 + 296);
          SystemMetrics96 = GetSystemMetrics96(4LL);
        }
        v17 = (int)((double)SystemMetrics96 * v13);
      }
    }
    v20 = CDesktopManager::s_pDesktopManagerInstance;
    v21 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 165);
    if ( v21 < 0.0 )
      v22 = ceil_0(v21 - 0.5);
    else
      v22 = floor_0(v21 + 0.5);
    v23 = (int)v22;
    v24 = *((double *)v20 + 166);
    if ( v24 < 0.0 )
      v25 = ceil_0(v24 - 0.5);
    else
      v25 = floor_0(v24 + 0.5);
    v26 = *(_DWORD *)(v2 + 64);
    v27 = v23 + v17;
    v28 = (int)v25;
    if ( v26 <= (int)v25 )
      v29 = (int)v25;
    else
      v29 = *(_DWORD *)(v2 + 64);
    v30 = *(_DWORD *)(v2 + 68);
    left = v26 - v29;
    if ( v30 > v28 )
      v28 = *(_DWORD *)(v2 + 68);
    v31 = *(_DWORD *)(v2 + 72);
    top = v30 - v28;
    if ( v31 > v27 )
      v27 = *(_DWORD *)(v2 + 72);
    v32 = *(_DWORD *)(v2 + 76);
    right = v31 - v27;
    if ( v32 > v23 )
      v23 = *(_DWORD *)(v2 + 76);
    bottom = v32 - v23;
  }
  else
  {
LABEL_7:
    bottom = v47.bottom;
    right = v47.right;
    top = v47.top;
    left = v47.left;
  }
  v9 = SetMargin(
         (struct _MARGINS *)((char *)this + 644),
         left,
         top,
         right,
         bottom,
         (const struct _MARGINS *)((char *)this + 628));
  if ( (*((_DWORD *)this + 152) & 0x400020) != 0 )
  {
    v34 = *((_QWORD *)this + 93);
    v47 = *(struct tagRECT *)(v34 + 48);
    v35 = *(_DWORD *)(v34 + 196) - *(_DWORD *)(v34 + 188);
    if ( v35 < 0 )
      v35 = 0;
    v47.right = v47.left + (int)((double)v35 * *(double *)(v34 + 288));
    v36 = *(_DWORD *)(v34 + 200) - *(_DWORD *)(v34 + 192);
    if ( v36 < 0 )
      v36 = 0;
    v47.bottom = v47.top + (int)((double)v36 * *(double *)(v34 + 296));
    if ( !CTopLevelWindow::GetMonitorRect((CTopLevelWindow *)(unsigned int)v47.bottom, &v47, &v45) )
      v45 = v47;
    v37 = v45.left - v47.left;
    v38 = *((_QWORD *)this + 93);
    if ( v45.left - v47.left < 0 )
      v37 = 0;
    v39 = v47.right - v45.right;
    v44.m128i_i32[0] = v37;
    if ( v47.right - v45.right < 0 )
      v39 = 0;
    v40 = v45.top - v47.top;
    v41 = *(_DWORD *)(v38 + 96);
    if ( v45.top - v47.top < 0 )
      v40 = 0;
    *(__int64 *)((char *)v44.m128i_i64 + 4) = __PAIR64__(v40, v39);
    v42 = v47.bottom - v45.bottom;
    if ( v47.bottom - v45.bottom < 0 )
      v42 = 0;
    v43 = v41 - *((_DWORD *)this + 161);
    v44.m128i_i32[3] = v42;
    if ( v37 > v43 )
      v44.m128i_i32[0] = 0;
    if ( v39 > v41 - *((_DWORD *)this + 162) )
      v44.m128i_i32[1] = 0;
    if ( v40 > v41 - *((_DWORD *)this + 163) )
      v44.m128i_i32[2] = 0;
    if ( v42 > v41 - *((_DWORD *)this + 164) )
      v44.m128i_i32[3] = 0;
    if ( (*((_BYTE *)this + 608) & 0x20) != 0 )
    {
      v4 = 1;
      *(__m128i *)v46 = _mm_load_si128(&v44);
      *(_OWORD *)(v38 + 272) = *(_OWORD *)v46;
    }
  }
  v10 = (const struct _MARGINS *)((char *)this + 660);
  v11 = SetMargin((struct _MARGINS *)((char *)this + 660), v46[0], v46[1], v46[2], v46[3], 0LL) || v9;
  if ( v4 || (*((_BYTE *)this + 264) & 4) != 0 )
  {
    v33 = *((_BYTE *)this + 264) ^ (*((_BYTE *)this + 264) ^ (4 * v4)) & 4;
    *((_BYTE *)this + 264) = v33;
    if ( (v33 & 4) == 0 )
      v10 = 0LL;
    CAtlasedRectsVisual::SetClipMargins(*((CAtlasedRectsVisual **)this + 37), v10);
    CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
  }
  return v11;
}
