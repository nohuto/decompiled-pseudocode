/*
 * XREFs of xxxWindowFromPoint @ 0x1C006D6BC
 * Callers:
 *     NtUserWindowFromPoint @ 0x1C006D680 (NtUserWindowFromPoint.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C007A4F0 (xxxDCEWindowHitTestIndirect.c)
 *     GetThreadDesktopWindow @ 0x1C01066F8 (GetThreadDesktopWindow.c)
 *     xxxWindowHitTest2 @ 0x1C011807C (xxxWindowHitTest2.c)
 */

__int64 xxxWindowFromPoint()
{
  __int64 ThreadDesktopWindow; // rbx
  __int64 v1; // rdx
  struct tagWND *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-1h] BYREF
  int v12; // [rsp+50h] [rbp+17h]
  __int64 v13; // [rsp+58h] [rbp+1Fh]
  __int128 v14; // [rsp+60h] [rbp+27h]
  int v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+74h] [rbp+3Bh]
  __int64 v17; // [rsp+78h] [rbp+3Fh]
  int v18; // [rsp+80h] [rbp+47h]

  ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
  v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v10;
  v10[1] = ThreadDesktopWindow;
  if ( ThreadDesktopWindow )
    ++*(_DWORD *)(ThreadDesktopWindow + 8);
  if ( (unsigned int)IsWindowDesktopComposed(ThreadDesktopWindow) )
  {
    v1 = *(_QWORD *)(ThreadDesktopWindow + 96);
    v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v11;
    v11[1] = v1;
    if ( v1 )
      ++*(_DWORD *)(v1 + 8);
    v2 = *(struct tagWND **)(ThreadDesktopWindow + 96);
    v12 = 0;
    v13 = 0LL;
    v16 = 0;
    v17 = 0LL;
    v18 = 0;
    v14 = 0LL;
    v15 = 5;
    v3 = xxxDCEWindowHitTestIndirect(v2);
    ThreadUnlock1(v5, v4);
  }
  else
  {
    v3 = xxxWindowHitTest2((struct tagWND *)ThreadDesktopWindow);
  }
  ThreadUnlock1(v7, v6);
  LOBYTE(v8) = 1;
  return HMValidateHandleNoSecure(v3, v8);
}
