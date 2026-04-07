/*
 * XREFs of ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180017D50
 * Callers:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180017558 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180017ED4 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x180024000 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 */

char __fastcall CSecondaryWindowRepresentation::s_CalculateWindowMetrics(
        __int64 a1,
        __int16 a2,
        char a3,
        int *a4,
        struct tagRECT *a5)
{
  __int64 v5; // rbx
  int v9; // eax
  int v10; // eax
  struct tagRECT v11; // xmm0
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct tagRECT v17; // [rsp+20h] [rbp-10h] BYREF
  char v18; // [rsp+58h] [rbp+28h]

  v18 = a2;
  v5 = *(_QWORD *)(a1 + 384);
  if ( v5 )
  {
    if ( (a2 & 0x100) == 0 )
    {
      if ( CDesktopManager::AdjustDesktopWindowSize(*(HWND *)(a1 + 40), &v17) )
      {
        v16 = v17.right - v17.left;
        if ( v17.right - v17.left < 0 )
          v16 = 0;
        *a4 = v16;
        v15 = v17.bottom - v17.top;
        if ( v17.bottom - v17.top < 0 )
          v15 = 0;
        goto LABEL_22;
      }
      LOBYTE(a2) = v18;
    }
    v9 = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48);
    if ( v9 < 0 )
      v9 = 0;
    *a4 = v9;
    v10 = *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 52);
    if ( v10 < 0 )
      v10 = 0;
    a4[1] = v10;
    if ( (a2 & 4) == 0 )
    {
      if ( (a2 & 0x80u) == 0 )
      {
        v17 = 0LL;
        CTopLevelWindow::GetOutsideMargins((CTopLevelWindow *)v5, (struct _MARGINS *)&v17);
        *a5 = v17;
        return 1;
      }
      v17 = *(struct tagRECT *)(v5 + 644);
      v17.left = _mm_cvtsi128_si32((__m128i)v17) - *(_DWORD *)(v5 + 676);
      v17.top -= *(_DWORD *)(v5 + 680);
      v17.right -= *(_DWORD *)(v5 + 684);
      v17.bottom -= *(_DWORD *)(v5 + 688);
      v11 = v17;
LABEL_12:
      *a5 = v11;
      return 1;
    }
    if ( a3 )
    {
      v11 = *(struct tagRECT *)(a1 + 64);
      goto LABEL_12;
    }
    v13 = *(_DWORD *)(a1 + 196) - *(_DWORD *)(a1 + 188);
    if ( v13 < 0 )
      v13 = 0;
    v14 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192);
    if ( v14 < 0 )
      v14 = 0;
    v15 = v14 - *(_DWORD *)(a1 + 248) - *(_DWORD *)(a1 + 244);
    *a4 = v13 - *(_DWORD *)(a1 + 240) - *(_DWORD *)(a1 + 236);
LABEL_22:
    v11 = (struct tagRECT)xmmword_1800A6790;
    a4[1] = v15;
    goto LABEL_12;
  }
  return 0;
}
