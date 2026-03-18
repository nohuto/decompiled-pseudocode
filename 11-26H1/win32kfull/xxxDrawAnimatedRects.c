/*
 * XREFs of xxxDrawAnimatedRects @ 0x1402F0AF8
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxMinimizeHungWindow @ 0x140292240 (xxxMinimizeHungWindow.c)
 *     NtUserDrawAnimatedRects @ 0x1402B1320 (NtUserDrawAnimatedRects.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x140009BD0 (GetThreadDesktopWindow.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402F0420 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxDrawAnimatedRects(struct tagWND *a1, int a2, struct tagRECT *a3, struct tagRECT *a4)
{
  struct tagRECT v5; // xmm1
  struct tagRECT v6; // xmm0
  __int64 v7; // rdi
  __int64 DesktopWindow; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rcx
  Gre::Base *DCEx; // r14
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  int v18; // r10d
  __int64 ThreadDesktopWindow; // rbx
  __int64 v20; // rax
  struct tagRECT v22; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v23; // [rsp+30h] [rbp-48h] BYREF
  __int128 v24; // [rsp+40h] [rbp-38h] BYREF

  v5 = *a3;
  v24 = 0LL;
  v6 = *a4;
  v22 = v5;
  v23 = v6;
  if ( a2 != 3 )
    return 1LL;
  v7 = 0LL;
  if ( !a1 )
    return 0LL;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v9 == DesktopWindow )
    return 0LL;
  if ( (unsigned int)IsToplevelWindowDesktopComposed(v9) )
    return 1LL;
  v10 = *((_QWORD *)a1 + 13);
  if ( !v10 || v10 == GetDesktopWindow(*((_QWORD *)a1 + 13)) )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    v24 = *(_OWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 104LL);
    v20 = GreCreateRectRgnIndirect(&v24);
    if ( !v20 )
      v20 = 1LL;
    DCEx = (Gre::Base *)_GetDCEx(ThreadDesktopWindow, v20, 1155LL);
  }
  else
  {
    v12 = _GetDCEx(v11, 1LL, 65665LL);
    v13 = *(_DWORD **)(v10 + 40);
    DCEx = (Gre::Base *)v12;
    v15 = v13[22];
    v16 = v13[26];
    v17 = v13[23];
    v18 = v13[27];
    do
    {
      *(&v22.left + 2 * v7) += v16 - v15;
      *(&v22.top + 2 * v7++) += v18 - v17;
    }
    while ( v7 < 4 );
  }
  xxxAnimateCaption(a1, DCEx, &v22, &v23);
  _ReleaseDC(DCEx);
  return 1LL;
}
