/*
 * XREFs of xxxWindowFromPoint @ 0x14008DE78
 * Callers:
 *     NtUserWindowFromPoint @ 0x14008DE30 (NtUserWindowFromPoint.c)
 * Callees:
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008B280 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?WindowFromPoint@Win32k@InputTraceLogging@@SAXAEBUtagPOINT@@PEAUtagWND@@@Z @ 0x14008E1A4 (-WindowFromPoint@Win32k@InputTraceLogging@@SAXAEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008E2E8 (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 */

struct tagWND *__fastcall xxxWindowFromPoint(struct tagPOINT a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  struct tagWND *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  ULONG_PTR v11; // r14
  __int64 *v12; // rax
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rcx
  ULONG_PTR *v16; // rax
  ULONG_PTR v17; // rcx
  ULONG_PTR *v18; // rdx
  ULONG_PTR v19; // rcx
  ULONG_PTR *v20; // rax
  ULONG_PTR v21; // rcx
  ULONG_PTR *v22; // rdx
  ULONG_PTR v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 UserSessionState; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct tagWND **v34; // r14
  ULONG_PTR v36[2]; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-10h] BYREF
  struct tagPOINT v38; // [rsp+80h] [rbp+20h] BYREF

  v38 = a1;
  v2 = (__int64 *)((__int64 (__fastcall *)(_QWORD))PsGetCurrentThreadWin32Thread)(a1);
  v4 = 0LL;
  if ( !v2 )
    return 0LL;
  v5 = *v2;
  if ( !v5 )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 496);
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(v6 + 24);
  if ( !v7 )
    return 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v3);
  if ( CurrentThreadWin32Thread )
    v9 = *CurrentThreadWin32Thread;
  else
    v9 = 0LL;
  BugCheckParameter3[0] = *(_QWORD *)(v9 + 448);
  *(_QWORD *)(v9 + 448) = BugCheckParameter3;
  BugCheckParameter3[1] = v7;
  HMLockObject(v7);
  if ( (unsigned int)IsWindowDesktopComposed(v7) )
  {
    v11 = *(_QWORD *)(v7 + 112);
    v12 = (__int64 *)PsGetCurrentThreadWin32Thread(v10);
    if ( v12 )
      v13 = *v12;
    else
      v13 = 0LL;
    v36[0] = *(_QWORD *)(v13 + 448);
    *(_QWORD *)(v13 + 448) = v36;
    v36[1] = v11;
    if ( v11 )
      HMLockObject(v11);
    v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxDCEWindowHitTest)(
            *(_QWORD *)(v7 + 112),
            0LL,
            0LL,
            0LL,
            a1,
            0LL,
            3);
    v16 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v15);
    if ( v16 )
      v17 = *v16;
    else
      v17 = 0LL;
    v18 = *(ULONG_PTR **)(v17 + 448);
    if ( v18 != v36 )
      KeBugCheckEx(0x164u, 0x3BuLL, v17, (ULONG_PTR)v36, 0LL);
    *(_QWORD *)(v17 + 448) = *v18;
    v19 = v18[1];
    if ( v19 )
      HMUnlockObject(v19);
  }
  else
  {
    v14 = xxxWindowHitTest2(v7, a1, 0LL, 1u);
  }
  v20 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v19);
  if ( v20 )
    v21 = *v20;
  else
    v21 = 0LL;
  v22 = *(ULONG_PTR **)(v21 + 448);
  if ( v22 != BugCheckParameter3 )
    KeBugCheckEx(0x164u, 0x3BuLL, v21, (ULONG_PTR)BugCheckParameter3, 0LL);
  *(_QWORD *)(v21 + 448) = *v22;
  v23 = v22[1];
  if ( v23 )
    HMUnlockObject(v23);
  PsGetCurrentThreadWin32Thread(v23);
  v27 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19904);
  if ( (unsigned __int64)(unsigned __int16)v14 < *(_QWORD *)(v27 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v27, v26);
    v31 = *(_DWORD *)(W32GetUserSessionState(v30, v29) + 19928) * (unsigned int)(unsigned __int16)v14
        + *(_QWORD *)(UserSessionState + 19920);
    v34 = (struct tagWND **)HMPkheFromPhe(v31);
    LOWORD(v14) = HIWORD(v14) & 0x7FFF;
    if ( ((HIWORD(v14) & 0x7FFF) == *(_WORD *)(v31 + 26)
       || (_WORD)v14 == 0x7FFF
       || !(_WORD)v14 && PsGetCurrentProcessWow64Process(v33, v32))
      && (*(_BYTE *)(v31 + 25) & 1) == 0
      && *(_BYTE *)(v31 + 24) == 1 )
    {
      v4 = *v34;
    }
  }
  InputTraceLogging::Win32k::WindowFromPoint(&v38, v4);
  return v4;
}
