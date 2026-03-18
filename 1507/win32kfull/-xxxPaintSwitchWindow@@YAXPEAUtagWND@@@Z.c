/*
 * XREFs of ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C02009B0
 * Callers:
 *     xxxSwitchWndProc @ 0x1C0201FD0 (xxxSwitchWndProc.c)
 * Callees:
 *     _GetAsyncKeyState @ 0x1C00411FC (_GetAsyncKeyState.c)
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     DrawEdge @ 0x1C0094D78 (DrawEdge.c)
 *     _GetClientRect @ 0x1C00E5834 (_GetClientRect.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01FF10C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01FFBA8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200060 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall xxxPaintSwitchWindow(struct tagWND *a1)
{
  struct tagSwitchWndInfo *v2; // rdi
  HDC DCEx; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // ecx
  LONG v23; // eax
  int v24; // ecx
  int v25; // eax
  struct tagSwitchWndInfo *v26; // rax
  struct tagSwitchWndInfo *v27; // rbx
  int v28; // [rsp+20h] [rbp-58h]
  RECT v29; // [rsp+50h] [rbp-28h] BYREF

  if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
  {
    v2 = Getpswi(a1);
    if ( v2 )
    {
      DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
      if ( !*((_DWORD *)v2 + 27) )
        goto LABEL_6;
      if ( (GetKeyState(0x12u) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v2 + 27) )
      {
LABEL_6:
        if ( (GetAsyncKeyState(0x12u) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      GetClientRect((__int64)a1, (__int64)v2 + 92);
      FillRect(DCEx, (LPCRECT)((char *)v2 + 92), *(HBRUSH *)(gpsi + 3816LL));
      v7 = -*(_DWORD *)(GetDPIMetrics(v5, v4, v6) + 76);
      v11 = *(_DWORD *)(GetDPIMetrics(v9, v8, v10) + 72);
      *((_DWORD *)v2 + 24) -= v7;
      *((_DWORD *)v2 + 26) += v7;
      v12 = (unsigned int)(-2 * v11);
      *((_DWORD *)v2 + 23) -= v12;
      *((_DWORD *)v2 + 25) += v12;
      *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 26) - *(_DWORD *)(GetDPIMetrics(v12, v13, v14) + 76);
      if ( !*((_DWORD *)v2 + 27) )
        goto LABEL_10;
      if ( (GetKeyState(0x12u) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v2 + 27) )
      {
LABEL_10:
        if ( (GetAsyncKeyState(0x12u) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      v18 = *(int *)(GetDPIMetrics(v16, v15, v17) + 76) >> 1;
      v22 = *(int *)(GetDPIMetrics(v20, v19, v21) + 72) >> 1;
      v23 = *((_DWORD *)v2 + 23) - v22;
      v29.right = *((_DWORD *)v2 + 25) + v22;
      v24 = *((_DWORD *)v2 + 26);
      v29.left = v23;
      v25 = *((_DWORD *)v2 + 24);
      v29.bottom = v18 + v24;
      v29.top = v25 - v18;
      DrawEdge(DCEx, &v29, 0xAu, 0xFu);
      if ( *((_DWORD *)v2 + 27) )
      {
        if ( (GetKeyState(0x12u) & 0x8000u) == 0LL )
          goto LABEL_21;
        if ( *((_DWORD *)v2 + 27) )
        {
LABEL_15:
          xxxPaintIconsInSwitchWindow(a1, v2, DCEx, *((_DWORD *)v2 + 13), v28, *((_DWORD *)v2 + 11), 0, 0, 0LL);
          v26 = Getpswi(a1);
          v27 = v26;
          if ( v26
            && (!*((_DWORD *)v26 + 27) || (GetKeyState(0x12u) & 0x8000u) != 0LL)
            && (*((_DWORD *)v27 + 27) || (GetAsyncKeyState(0x12u) & 0x8000u) != 0LL) )
          {
            xxxDrawSwitchWndHilite(v27, DCEx, *((_DWORD *)v27 + 17), *((_DWORD *)v27 + 18), 1);
          }
          goto LABEL_21;
        }
      }
      if ( (GetAsyncKeyState(0x12u) & 0x8000u) != 0LL )
        goto LABEL_15;
LABEL_21:
      _ReleaseDC(DCEx);
    }
  }
}
