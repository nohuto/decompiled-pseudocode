/*
 * XREFs of NtUserSetWindowShowState @ 0x1C021ACF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxSetWindowShowState @ 0x1C0224CB4 (xxxSetWindowShowState.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, __int128 *a4)
{
  __int64 v5; // r15
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int128 *v18; // rdx
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rax
  int *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD v35[3]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v36; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v37[2]; // [rsp+68h] [rbp-30h] BYREF

  v5 = a2;
  EnterCrit(0LL, 1LL);
  v7 = 0;
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  v11 = v8;
  if ( v8 && (((*(_WORD *)(v8 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v35[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v35;
    v35[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    v12 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 320LL);
    if ( v12
      && IAMThreadAccessGranted(gptiCurrent)
      && *(_QWORD *)(v16 + 376) == *(_QWORD *)(*(_QWORD *)(v12 + 16) + 376LL) )
    {
      v17 = *(_QWORD *)(v11 + 16);
      if ( v17 != v16 )
      {
        if ( *(_QWORD *)(v17 + 592) )
        {
          v13 = 5023LL;
          goto LABEL_5;
        }
        if ( a3 )
        {
          v13 = 1004LL;
          goto LABEL_5;
        }
        if ( (unsigned int)v5 <= 5 )
        {
          v18 = a4;
          if ( !a4 )
            goto LABEL_36;
          if ( (unsigned __int64)a4 >= W32UserProbeAddress )
            v18 = (__int128 *)W32UserProbeAddress;
          v36 = *v18;
          a4 = &v36;
          v19 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v12 + 352));
          v20 = MonitorFromWindow(v11, v19 | 2u);
          if ( v20 )
          {
            if ( (*(_DWORD *)(v12 + 352) & 0xF) == 0
              && (v21 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 408LL)) != 0
              && (*(_DWORD *)(*(_QWORD *)(v21 + 8) + 244LL) & 1) != 0 )
            {
              v22 = (int *)(v20 + 92);
            }
            else if ( (*(_DWORD *)(v12 + 352) & 0xF) == 1
                   && (v23 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 408LL)) != 0
                   && (*(_DWORD *)(*(_QWORD *)(v23 + 8) + 244LL) & 1) != 0 )
            {
              v22 = (int *)(v20 + 108);
            }
            else
            {
              v22 = (int *)(v20 + 76);
            }
            if ( (unsigned int)IntersectRect(v37, (int *)&v36, v22) )
            {
              v27 = v37[0] - v36;
              if ( v37[0] == (_QWORD)v36 )
                v27 = v37[1] - *((_QWORD *)&v36 + 1);
              if ( !v27 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 432)
                               + 224LL) & 1) != 0
                  || (v30 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v18, v28, v29)
                                      + 432),
                      (*(_BYTE *)(v30 + 224) & 0x20) != 0)
                  || (W32GetCurrentThreadDpiAwarenessContext(v30, (__int64)v18, v31, v32) & 0xF) == (*(_DWORD *)(v11 + 352) & 0xF)
                  || (unsigned int)TransformRectBetweenCoordinateSpaces(&v36, &v36, v11, v12) )
                {
LABEL_36:
                  LOBYTE(v18) = byte_1C02F0378[v5];
                  v7 = xxxSetWindowShowState(v11, v18, a4);
                  goto LABEL_37;
                }
              }
            }
          }
        }
      }
      v13 = 87LL;
    }
    else
    {
      v13 = 5LL;
    }
LABEL_5:
    UserSetLastError(v13);
LABEL_37:
    ThreadUnlock1(v15, v14);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v7;
}
