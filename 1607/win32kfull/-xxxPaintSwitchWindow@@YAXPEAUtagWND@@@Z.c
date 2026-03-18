/*
 * XREFs of ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F8078
 * Callers:
 *     xxxSwitchWndProc @ 0x1C01F9680 (xxxSwitchWndProc.c)
 * Callees:
 *     DrawEdge @ 0x1C006E2BC (DrawEdge.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     _GetAsyncKeyState @ 0x1C00A98E8 (_GetAsyncKeyState.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     _GetClientRect @ 0x1C010B47C (_GetClientRect.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F6C9C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F77B4 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F7C6C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall xxxPaintSwitchWindow(struct tagWND *a1)
{
  struct tagSwitchWndInfo *v2; // rdi
  __int64 v3; // rdx
  HDC DCEx; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ecx
  LONG v24; // eax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct tagSwitchWndInfo *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct tagSwitchWndInfo *v34; // rbx
  int v35; // [rsp+20h] [rbp-58h]
  RECT v36; // [rsp+50h] [rbp-28h] BYREF

  if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
  {
    v2 = Getpswi(a1);
    if ( v2 )
    {
      DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
      if ( !*((_DWORD *)v2 + 27) )
        goto LABEL_6;
      if ( (GetKeyState(0x12u, v3, v5, v6) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v2 + 27) )
      {
LABEL_6:
        if ( (GetAsyncKeyState(0x12u) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      GetClientRect((__int64)a1, (__int64)v2 + 92);
      FillRect(DCEx, (LPCRECT)((char *)v2 + 92), *(HBRUSH *)(gpsi + 5208LL));
      v9 = -*(_DWORD *)(GetDPIMetrics(v8, v7) + 76);
      v12 = *(_DWORD *)(GetDPIMetrics(v11, v10) + 72);
      *((_DWORD *)v2 + 24) -= v9;
      *((_DWORD *)v2 + 26) += v9;
      v13 = (unsigned int)(-2 * v12);
      *((_DWORD *)v2 + 23) -= v13;
      *((_DWORD *)v2 + 25) += v13;
      *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 26) - *(_DWORD *)(GetDPIMetrics(v13, v14) + 76);
      if ( !*((_DWORD *)v2 + 27) )
        goto LABEL_10;
      if ( (GetKeyState(0x12u, v15, v16, v17) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v2 + 27) )
      {
LABEL_10:
        if ( (GetAsyncKeyState(0x12u) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      v20 = *(int *)(GetDPIMetrics(v19, v18) + 76) >> 1;
      v23 = *(int *)(GetDPIMetrics(v22, v21) + 72) >> 1;
      v24 = *((_DWORD *)v2 + 23) - v23;
      v36.right = *((_DWORD *)v2 + 25) + v23;
      v25 = *((_DWORD *)v2 + 26);
      v36.left = v24;
      v26 = *((_DWORD *)v2 + 24);
      v36.bottom = v20 + v25;
      v36.top = v26 - v20;
      DrawEdge(DCEx, &v36, 0xAu, 0xFu);
      if ( *((_DWORD *)v2 + 27) )
      {
        if ( (GetKeyState(0x12u, v27, v28, v29) & 0x8000u) == 0LL )
          goto LABEL_21;
        if ( *((_DWORD *)v2 + 27) )
        {
LABEL_15:
          xxxPaintIconsInSwitchWindow(a1, v2, DCEx, *((_DWORD *)v2 + 13), v35, *((_DWORD *)v2 + 11), 0, 0, 0LL);
          v30 = Getpswi(a1);
          v34 = v30;
          if ( v30
            && (!*((_DWORD *)v30 + 27) || (GetKeyState(0x12u, v31, v32, v33) & 0x8000u) != 0LL)
            && (*((_DWORD *)v34 + 27) || (GetAsyncKeyState(0x12u) & 0x8000u) != 0LL) )
          {
            xxxDrawSwitchWndHilite(v34, DCEx, *((_DWORD *)v34 + 17), *((_DWORD *)v34 + 18), 1);
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
