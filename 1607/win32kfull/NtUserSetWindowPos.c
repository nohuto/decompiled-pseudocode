/*
 * XREFs of NtUserSetWindowPos @ 0x1C00A62F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ConstrainWindowSize @ 0x1C006F944 (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1C006F974 (ConstrainWindowPos.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00A64D8 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C02109F8 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, HWND a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rsi
  unsigned int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagWND *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v30; // rcx
  struct tagWND *v31; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v32[3]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v33[4]; // [rsp+60h] [rbp-20h] BYREF
  int v34; // [rsp+C0h] [rbp+40h] BYREF
  int v35; // [rsp+C8h] [rbp+48h] BYREF

  v35 = a4;
  v34 = a3;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v9;
  if ( v9 )
  {
    v11 = (*(_WORD *)(v9 + 66) & 0x3FFFu) - 669;
    if ( (v11 & 0xFFFFFFFD) != 0 )
    {
      v14 = a7;
      v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v32;
      v32[1] = v9;
      ++*(_DWORD *)(v9 + 8);
      if ( (v14 & 0xFFFC9800) != 0 )
      {
        v30 = 1004LL;
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v31) )
        {
LABEL_19:
          ThreadUnlock1(v16, v15);
          goto LABEL_20;
        }
        if ( *(char *)(v13 + 44) >= 0 )
        {
          if ( (v14 & 2) == 0 )
            ConstrainWindowPos(&v34, &v35);
          if ( (v14 & 1) == 0 )
            ConstrainWindowSize(&a5, &a6);
          v19 = v31;
          if ( (unsigned __int64)v31 <= 1 || (unsigned __int64)v31 + 2 <= 1 )
            v19 = 0LL;
          if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v17, v18) + 432)
                         + 224LL) & 1) == 0 )
          {
            v24 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 432);
            if ( (*(_BYTE *)(v24 + 224) & 0x20) == 0
              && (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25, v26) & 0xF) != (*(_DWORD *)(v13 + 352) & 0xF) )
            {
              TransformSWPCoords((struct tagWND *)v13, &v34, &v35, &a5, &a6, v14);
            }
          }
          v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v33;
          v33[1] = v19;
          if ( v19 )
            ++*((_DWORD *)v19 + 2);
          v12 = xxxSetWindowPosAndBand((struct tagWND *)v13, a5, a6, v14, 0);
          ThreadUnlock1(v28, v27);
          goto LABEL_19;
        }
        v30 = 87LL;
      }
      UserSetLastError(v30);
      goto LABEL_19;
    }
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}
