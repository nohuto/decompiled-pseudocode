/*
 * XREFs of xxxActiveWindowTracking @ 0x1C01E27EC
 * Callers:
 *     xxxMouseActivate @ 0x1C0040CEC (xxxMouseActivate.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0064790 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     IsForegroundLocked @ 0x1C0045658 (IsForegroundLocked.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     GetActiveTrackPwnd @ 0x1C01E1EC4 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxActiveWindowTracking(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 ActiveTrackPwnd; // rax
  struct tagWND *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // eax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 392LL);
  v17 = v6;
  v7 = *(_DWORD *)(v6 + 332);
  if ( (v7 & 0x200000) == 0 )
    return 0LL;
  *(_DWORD *)(v6 + 332) = v7 & 0xFFDFFFFF;
  if ( (unsigned int)IsForegroundLocked() )
    return 0LL;
  ActiveTrackPwnd = GetActiveTrackPwnd(a1, &v17);
  v10 = (struct tagWND *)ActiveTrackPwnd;
  if ( !ActiveTrackPwnd )
    return 0LL;
  if ( a1 != ActiveTrackPwnd )
  {
    v16[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v16;
    v16[1] = ActiveTrackPwnd;
    ++*(_DWORD *)(ActiveTrackPwnd + 8);
  }
  v11 = xxxSendMessage((struct tagWND *)ActiveTrackPwnd, 0x21u, *(_QWORD *)ActiveTrackPwnd, a3 | (a2 << 16));
  v14 = v11;
  if ( v11 <= 0 )
    goto LABEL_10;
  if ( v11 <= 2 )
  {
    if ( v17 == gpqForeground )
      v15 = xxxActivateThisWindow(v10, 0, ((unsigned __int8)~(_BYTE)gpdwCPUserPreferencesMask >> 3) & 8, 0);
    else
      v15 = xxxSetForegroundWindow2(v10, 0LL, ((unsigned __int8)~(_BYTE)gpdwCPUserPreferencesMask >> 4) & 4 | 2u, 0);
    if ( v15 && v14 != 2 )
      goto LABEL_11;
    goto LABEL_19;
  }
  if ( v11 == 4 )
  {
LABEL_19:
    v14 = 1;
    goto LABEL_11;
  }
LABEL_10:
  v14 = 0;
LABEL_11:
  if ( (struct tagWND *)a1 != v10 )
    ThreadUnlock1(v13, v12);
  return v14;
}
