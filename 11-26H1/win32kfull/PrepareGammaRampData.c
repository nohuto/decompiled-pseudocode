/*
 * XREFs of PrepareGammaRampData @ 0x14023C4E0
 * Callers:
 *     xxxSwitchDesktopWithFade @ 0x1401B2760 (xxxSwitchDesktopWithFade.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 */

__int64 __fastcall PrepareGammaRampData(unsigned int *a1, unsigned int **a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  struct tagTHREADINFO *v7; // rax
  __int64 DCEx; // rax
  __int64 v9; // rdi
  unsigned int DeviceCaps; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // rcx
  unsigned int *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // ecx
  unsigned int v29; // eax
  _QWORD *i; // r9
  __int64 DisplayDC; // rax
  __int64 v32; // rcx

  v6 = 0;
  v7 = PtiCurrent((__int64)a1);
  DCEx = _GetDCEx(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 61) + 8LL) + 24LL), 0LL, 8388611LL);
  v9 = DCEx;
  if ( !DCEx )
    return 3221225495LL;
  DeviceCaps = GreGetDeviceCaps(DCEx, 116LL);
  *a1 = DeviceCaps;
  if ( DeviceCaps < 0x3C )
    *a1 = 60;
  _ReleaseDC(v9);
  GreLockVisRgn(v12, v11, v13);
  v16 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 56968) + 104LL);
  while ( v16 )
  {
    v27 = *(_QWORD *)(v16 + 40);
    v16 = *(_QWORD *)(v16 + 56);
    v28 = *(_DWORD *)(v27 + 24);
    v29 = v6 + 1;
    if ( (v28 & 1) == 0 )
      v29 = v6;
    v6 = v29;
  }
  v17 = 1544LL * v6;
  if ( v17 > 0xFFFFFFFF || (v20 = (unsigned int)(v17 + 1544), (unsigned int)v20 < 0x608) )
  {
    _ReleaseDC(v9);
    GreUnlockVisRgn(v18);
    return 3221225621LL;
  }
  v21 = (unsigned int *)Win32AllocPoolZInit(v20, 1835231559LL);
  v24 = v21;
  if ( !v21 )
  {
    _ReleaseDC(v9);
    GreUnlockVisRgn(v32);
    return 3221225495LL;
  }
  *v21 = v6;
  if ( !IsRemoteConnection(v23, v22) )
  {
    v26 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 56968);
    for ( i = *(_QWORD **)(v26 + 104); i; i = (_QWORD *)i[7] )
    {
      v26 = *(unsigned int *)(i[5] + 24LL);
      if ( (v26 & 1) != 0 )
      {
        DisplayDC = GreCreateDisplayDC(i[10], 0LL);
        if ( DisplayDC )
          GreDeleteDC(DisplayDC);
        break;
      }
    }
  }
  *a3 = 0;
  *a2 = v24;
  GreUnlockVisRgn(v26);
  return 0LL;
}
