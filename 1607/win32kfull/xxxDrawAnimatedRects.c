/*
 * XREFs of xxxDrawAnimatedRects @ 0x1C02274D4
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     NtUserDrawAnimatedRects @ 0x1C0211BC0 (NtUserDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C0227630 (xxxMinimizeHungWindow.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     GetThreadDesktopWindow @ 0x1C01066F8 (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226BB8 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 */

__int64 __fastcall xxxDrawAnimatedRects(struct tagWND *a1, int a2, struct tagRECT *a3, struct tagRECT *a4)
{
  struct tagRECT v5; // xmm1
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rbx
  __int64 DCEx; // rax
  int v13; // edx
  HDC v14; // r14
  int v15; // r8d
  int v16; // r9d
  int v17; // r10d
  __int64 ThreadDesktopWindow; // rbx
  __int64 v19; // rax
  __int128 v20; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v21; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v22; // [rsp+40h] [rbp-38h] BYREF

  v5 = *a4;
  v21 = *a3;
  v22 = v5;
  if ( a2 != 3 )
    return 1LL;
  v7 = 0LL;
  if ( !a1 || a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0LL;
  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    return 1LL;
  v11 = (_DWORD *)*((_QWORD *)a1 + 11);
  if ( !v11 )
    goto LABEL_13;
  if ( v11 == (_DWORD *)GetDesktopWindow(*((_QWORD *)a1 + 11)) )
    v11 = 0LL;
  if ( v11 )
  {
    DCEx = _GetDCEx(v11, 1LL, 65665LL);
    v13 = v11[28];
    v14 = (HDC)DCEx;
    v15 = v11[32];
    v16 = v11[29];
    v17 = v11[33];
    do
    {
      *(&v21.left + 2 * v7) += v15 - v13;
      *(&v21.top + 2 * v7++) += v17 - v16;
    }
    while ( v7 < 4 );
  }
  else
  {
LABEL_13:
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL, v8, v9, v10);
    v20 = *(_OWORD *)(ThreadDesktopWindow + 128);
    v19 = GreCreateRectRgnIndirect(&v20);
    if ( !v19 )
      v19 = 1LL;
    v14 = (HDC)_GetDCEx(ThreadDesktopWindow, v19, 1155LL);
  }
  xxxAnimateCaption(a1, v14, &v21, &v22);
  _ReleaseDC(v14);
  return 1LL;
}
