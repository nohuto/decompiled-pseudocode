/*
 * XREFs of xxxWindowFromPoint @ 0x1C00E4128
 * Callers:
 *     NtUserWindowFromPoint @ 0x1C00E40F0 (NtUserWindowFromPoint.c)
 * Callees:
 *     ?xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0065580 (-xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     GetThreadDesktopWindow @ 0x1C007BD60 (GetThreadDesktopWindow.c)
 *     xxxWindowHitTest2 @ 0x1C00DF44C (xxxWindowHitTest2.c)
 */

__int64 __fastcall xxxWindowFromPoint(unsigned __int64 a1)
{
  __int64 ThreadDesktopWindow; // rbx
  __int64 v2; // rdx
  struct tagWND *v3; // rcx
  HWND v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-48h] BYREF
  int v12; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h]
  __int128 v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]

  ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
  v10[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v10;
  v10[1] = ThreadDesktopWindow;
  if ( ThreadDesktopWindow )
    ++*(_DWORD *)(ThreadDesktopWindow + 8);
  if ( (unsigned int)IsWindowDesktopComposed(ThreadDesktopWindow) )
  {
    v2 = *(_QWORD *)(ThreadDesktopWindow + 96);
    v11[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v11;
    v11[1] = v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 8);
    v3 = *(struct tagWND **)(ThreadDesktopWindow + 96);
    v12 = 0;
    v13 = 0LL;
    v16 = 0;
    v14 = 0LL;
    v15 = 5;
    v4 = xxxDCEWindowHitTestInternal(v3, (struct tagPOINT)a1, (struct DCE_WINDOW_HIT_TEST_ARGS *)&v12);
    ThreadUnlock1(v6, v5);
  }
  else
  {
    v4 = (HWND)xxxWindowHitTest2((struct tagWND *)ThreadDesktopWindow, a1, 0LL, 1);
  }
  ThreadUnlock1(v8, v7);
  return HMValidateHandleNoSecure((unsigned __int64)v4, 1);
}
