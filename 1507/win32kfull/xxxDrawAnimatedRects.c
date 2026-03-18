/*
 * XREFs of xxxDrawAnimatedRects @ 0x1C02274D4
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     NtUserDrawAnimatedRects @ 0x1C0219080 (NtUserDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C0227678 (xxxMinimizeHungWindow.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     GetThreadDesktopWindow @ 0x1C007BD60 (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226AF4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 */

__int64 __fastcall xxxDrawAnimatedRects(struct tagWND *a1, int a2, struct tagRECT *a3, struct tagRECT *a4)
{
  struct tagRECT v5; // xmm1
  __int64 v7; // rdi
  _DWORD *v8; // rbx
  __int64 DCEx; // rax
  int v10; // edx
  HDC v11; // r14
  int v12; // r8d
  int v13; // r9d
  int v14; // r10d
  __int64 ThreadDesktopWindow; // rbx
  __int64 v16; // rax
  __int128 v17; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v18; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v19; // [rsp+40h] [rbp-38h] BYREF

  v5 = *a4;
  v18 = *a3;
  v19 = v5;
  if ( a2 != 3 )
    return 1LL;
  v7 = 0LL;
  if ( !a1 || a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0LL;
  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    return 1LL;
  v8 = (_DWORD *)*((_QWORD *)a1 + 11);
  if ( !v8 )
    goto LABEL_13;
  if ( v8 == (_DWORD *)GetDesktopWindow(*((_QWORD *)a1 + 11)) )
    v8 = 0LL;
  if ( v8 )
  {
    DCEx = _GetDCEx(v8, 1LL, 65665LL);
    v10 = v8[28];
    v11 = (HDC)DCEx;
    v12 = v8[32];
    v13 = v8[29];
    v14 = v8[33];
    do
    {
      *(&v18.left + 2 * v7) += v12 - v10;
      *(&v18.top + 2 * v7++) += v14 - v13;
    }
    while ( v7 < 4 );
  }
  else
  {
LABEL_13:
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    v17 = *(_OWORD *)(ThreadDesktopWindow + 128);
    v16 = GreCreateRectRgnIndirect(&v17);
    if ( !v16 )
      v16 = 1LL;
    v11 = (HDC)_GetDCEx(ThreadDesktopWindow, v16, 1155LL);
  }
  xxxAnimateCaption(a1, v11, &v18, &v19);
  _ReleaseDC(v11);
  return 1LL;
}
