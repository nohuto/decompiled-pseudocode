/*
 * XREFs of xxxProcessAsyncSendMessage @ 0x140036C10
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1402F0A94 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxProcessAsyncSendMessage(__int64 a1, unsigned int a2, __int64 a3, __int128 **a4)
{
  __int128 *v4; // rdi
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  struct tagWND **v19; // r14
  struct tagWND *v20; // rsi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  ULONG_PTR *v24; // rax
  ULONG_PTR v25; // rcx
  ULONG_PTR *v26; // rdx
  __int64 v27; // rbx
  unsigned __int16 v28; // r14
  __int128 v29; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v31[264]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *a4;
  v29 = 0LL;
  v8 = a1;
  PsGetCurrentThreadWin32Thread(a1);
  result = W32GetUserSessionState(v10, v9);
  v13 = *(_QWORD *)(result + 19904);
  if ( (unsigned __int64)(unsigned __int16)v8 < *(_QWORD *)(v13 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v13, v12);
    v17 = *(_DWORD *)(W32GetUserSessionState(v16, v15) + 19928) * (unsigned int)(unsigned __int16)v8
        + *(_QWORD *)(UserSessionState + 19920);
    v19 = (struct tagWND **)HMPkheFromPhe(v17);
    result = 0x7FFFLL;
    LOWORD(v8) = HIWORD(v8) & 0x7FFF;
    if ( ((HIWORD(v8) & 0x7FFF) == *(_WORD *)(v17 + 26)
       || (_WORD)v8 == 0x7FFF
       || !(_WORD)v8 && (result = PsGetCurrentProcessWow64Process()) != 0)
      && (*(_BYTE *)(v17 + 25) & 1) == 0
      && *(_BYTE *)(v17 + 24) == 1 )
    {
      v20 = *v19;
      if ( *v19 )
      {
        CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v18);
        if ( CurrentThreadWin32Thread )
          v22 = *CurrentThreadWin32Thread;
        else
          v22 = 0LL;
        BugCheckParameter3[0] = *(_QWORD *)(v22 + 448);
        *(_QWORD *)(v22 + 448) = BugCheckParameter3;
        BugCheckParameter3[1] = (ULONG_PTR)v20;
        HMLockObject(v20);
        if ( a2 == 26 || a2 == 27 )
        {
          if ( v4 )
          {
            v27 = -1LL;
            if ( v4 == (__int128 *)-1LL )
            {
              v31[0] = 0;
              *((_QWORD *)&v29 + 1) = v31;
              do
                ++v27;
              while ( v31[v27] );
              LODWORD(v29) = 2 * v27;
              v4 = &v29;
              DWORD1(v29) = (2 * v27 + 2) & 0x7FFFFFFF;
            }
            else
            {
              v28 = (unsigned __int16)v4;
              if ( (unsigned int)UserGetAtomName((unsigned __int16)v4, v31, 260LL) )
              {
                *((_QWORD *)&v29 + 1) = v31;
                do
                  ++v27;
                while ( v31[v27] );
                LODWORD(v29) = 2 * v27;
                v4 = &v29;
                DWORD1(v29) = (2 * v27 + 2) & 0x7FFFFFFF;
              }
              else
              {
                v4 = 0LL;
              }
              UserDeleteAtom(v28);
            }
          }
          *a4 = 0LL;
        }
        else if ( a2 == 834 )
        {
          xxxEndGetWidnowTrackInfoAsync(v20);
          goto LABEL_12;
        }
        xxxSendMessage(v20, a2, a3, v4);
LABEL_12:
        v24 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v23);
        if ( v24 )
          v25 = *v24;
        else
          v25 = 0LL;
        v26 = *(ULONG_PTR **)(v25 + 448);
        if ( v26 != BugCheckParameter3 )
          KeBugCheckEx(0x164u, 0x3BuLL, v25, (ULONG_PTR)BugCheckParameter3, 0LL);
        *(_QWORD *)(v25 + 448) = *v26;
        return HMUnlockObject(v26[1]);
      }
    }
  }
  return result;
}
