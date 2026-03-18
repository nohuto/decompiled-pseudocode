/*
 * XREFs of ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01FFE60
 * Callers:
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01FF10C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01FF988 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01FFBA8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200060 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

__int64 __fastcall xxxMoveSwitchWndHilite(struct tagWND *a1, struct tagSwitchWndInfo *a2, int a3)
{
  int v3; // ebx
  int v4; // r12d
  int v5; // ebp
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  HDC DCEx; // r14
  struct tagSwitchWndInfo *v18; // rax
  struct tagSwitchWndInfo *v19; // rcx
  __int64 v21; // rdi
  struct tagSwitchWndInfo *v22; // rax
  int v23; // [rsp+20h] [rbp-48h]

  v3 = *((_DWORD *)a2 + 17);
  v4 = 0;
  v5 = *((_DWORD *)a2 + 18);
  if ( !a3 )
  {
    if ( v5 == *((_DWORD *)a2 + 15) - 1 )
    {
      v12 = *((_DWORD *)a2 + 16);
      v13 = 1;
    }
    else
    {
      v12 = *((_DWORD *)a2 + 14);
      v13 = 0;
    }
    if ( v3 >= v12 - 1 )
    {
      if ( v13 )
      {
        if ( *((_DWORD *)a2 + 12) )
        {
          v4 = 1;
          v14 = *((_DWORD *)a2 + 13) + *((_DWORD *)a2 + 14);
          v15 = *((_DWORD *)a2 + 10);
          if ( v14 >= v15 )
            v14 -= v15;
          *((_DWORD *)a2 + 13) = v14;
          v11 = 0;
          goto LABEL_25;
        }
        v11 = 0;
        v5 = 0;
        goto LABEL_24;
      }
      v11 = 0;
      ++v5;
    }
    else
    {
      v11 = v3 + 1;
    }
LABEL_25:
    v16 = 1;
    goto LABEL_27;
  }
  if ( v3 > 0 )
  {
LABEL_11:
    v11 = v3 - 1;
    goto LABEL_24;
  }
  if ( v5 > 0 )
  {
    v3 = *((_DWORD *)a2 + 14);
LABEL_10:
    --v5;
    goto LABEL_11;
  }
  if ( !*((_DWORD *)a2 + 12) )
  {
    v5 = *((_DWORD *)a2 + 15);
    v3 = *((_DWORD *)a2 + 16);
    goto LABEL_10;
  }
  v4 = 1;
  v9 = *((_DWORD *)a2 + 14);
  v10 = *((_DWORD *)a2 + 13) - v9;
  if ( v10 < 0 )
    v10 += *((_DWORD *)a2 + 10);
  *((_DWORD *)a2 + 13) = v10;
  v11 = v9 - 1;
LABEL_24:
  if ( !a3 )
    goto LABEL_25;
  v16 = 0;
LABEL_27:
  *((_QWORD *)a2 + 4) = NextPrevPhwnd(a2, *((HWND **)a2 + 4), v16);
  DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
  xxxDrawSwitchWndHilite(a2, DCEx, *((_DWORD *)a2 + 17), *((_DWORD *)a2 + 18), 0);
  v18 = Getpswi(a1);
  v19 = v18;
  if ( v18 )
  {
    *((_DWORD *)v18 + 18) = v5;
    *((_DWORD *)v18 + 17) = v11;
    v21 = **((_QWORD **)v18 + 4);
    if ( v4 )
    {
      xxxPaintIconsInSwitchWindow(a1, v18, DCEx, *((_DWORD *)v18 + 13), v23, 0, 1, a3 == 0, 0LL);
      v19 = Getpswi(a1);
    }
    if ( v19 )
    {
      xxxDrawSwitchWndHilite(v19, DCEx, v11, v5, 1);
      _ReleaseDC(DCEx);
      v22 = Getpswi(a1);
      if ( v22 )
        xxxWindowEvent(0x8005u, (__int64 *)a1, -4, v11 + v5 * *((_DWORD *)v22 + 14) + 1, 1);
    }
    else
    {
      _ReleaseDC(DCEx);
    }
    return v21;
  }
  else
  {
    _ReleaseDC(DCEx);
    return 0LL;
  }
}
