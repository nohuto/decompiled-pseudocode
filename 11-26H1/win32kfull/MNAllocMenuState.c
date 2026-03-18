/*
 * XREFs of MNAllocMenuState @ 0x140290298
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxMNStartMenuState @ 0x1402D09E8 (xxxMNStartMenuState.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MNSetupAnimationDC @ 0x1400CBBA0 (MNSetupAnimationDC.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

_QWORD *__fastcall MNAllocMenuState(_QWORD **a1)
{
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *result; // rax
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *DpiMetricsForCurrentThread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax

  v2 = PtiCurrent((__int64)a1);
  if ( (*(_DWORD *)(W32GetUserSessionState(v4, v3) + 66792) & 0x2000000) != 0 )
  {
    v8 = (_QWORD *)Win32AllocPoolWithQuotaZInit(144LL, 1953330005LL);
    if ( !v8 )
      return 0LL;
    v8[17] = 0LL;
    if ( !(unsigned int)MNSetupAnimationDC((__int64)v8, v7) )
    {
      Win32FreePool(v8);
      return 0LL;
    }
    GreSetDCOwnerEx(v8[17], 0LL, 0LL, 0LL);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    v13 = W32GetUserSessionState(v12, v11);
    v8 = (_QWORD *)(UserSessionState + 65880);
    *(_DWORD *)(v13 + 66792) |= 0x2000000u;
    GreSetDCOwnerEx(*(_QWORD *)(UserSessionState + 66016), 2147483650LL, 0LL, 1LL);
    DpiMetricsForCurrentThread = (__int64 *)GetDpiMetricsForCurrentThread(v15, v14, v16);
    GreSelectFont(*(Gre::Base **)(UserSessionState + 66016), *DpiMetricsForCurrentThread);
  }
  memset_0(v8, 0, 0x88uLL);
  v21 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 18928);
  if ( *((_QWORD *)v2 + 58) == v21 )
  {
    *((_DWORD *)v8 + 2) |= 0x2000000u;
    v22 = W32GetUserSessionState(v21, v20);
    ++*(_DWORD *)(v22 + 18896);
  }
  *v8 = **a1;
  v8[4] = v2;
  *(_DWORD *)**a1 |= 0x20000000u;
  v8[6] = *((_QWORD *)v2 + 80);
  result = v8;
  *((_QWORD *)v2 + 80) = v8;
  return result;
}
