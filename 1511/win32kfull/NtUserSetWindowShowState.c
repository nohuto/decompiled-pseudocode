/*
 * XREFs of NtUserSetWindowShowState @ 0x1C0220D90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     xxxSetWindowShowState @ 0x1C0224100 (xxxSetWindowShowState.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, __int128 *a4)
{
  __int64 v5; // r15
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rsi
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int128 *v18; // rdx
  int v19; // eax
  __int64 v20; // r8
  int v21; // edx
  int *v22; // r8
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v28[3]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v29; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v30[2]; // [rsp+68h] [rbp-30h] BYREF

  v5 = a2;
  EnterCrit(0LL, 1LL);
  v7 = 0;
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  v11 = v8;
  if ( v8 && (((*(_WORD *)(v8 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v28;
    v28[1] = v8;
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
          v13 = 5023;
          goto LABEL_5;
        }
        if ( a3 )
        {
          v13 = 1004;
          goto LABEL_5;
        }
        if ( (unsigned int)v5 <= 5 )
        {
          v18 = a4;
          if ( !a4 )
            goto LABEL_34;
          if ( (unsigned __int64)a4 >= W32UserProbeAddress )
            v18 = (__int128 *)W32UserProbeAddress;
          v29 = *v18;
          a4 = &v29;
          v19 = MonitorFlagsFromDpiAwareness(*(unsigned int *)(v12 + 344));
          v20 = MonitorFromWindow(v11, v19 | 2u);
          if ( v20 )
          {
            v21 = *(_DWORD *)(v12 + 344);
            if ( v21 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
              v22 = (int *)(v21 == 1
                         && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 408LL) + 8LL) + 244LL) & 1) != 0
                          ? v20 + 108
                          : v20 + 76);
            else
              v22 = (int *)(v20 + 92);
            if ( (unsigned int)IntersectRect(v30, (int *)&v29, v22) )
            {
              v23 = v30[0] - v29;
              if ( v30[0] == (_QWORD)v29 )
                v23 = v30[1] - *((_QWORD *)&v29 + 1);
              if ( !v23 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) != 0
                  || (v24 = *(_QWORD *)(v11 + 16),
                      (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL),
                       (unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v24 + 376)))
                   || (unsigned int)TransformRectBetweenCoordinateSpaces(&v29, &v29, v11, v12)) )
                {
LABEL_34:
                  LOBYTE(v18) = byte_1C02EACB8[v5];
                  v7 = xxxSetWindowShowState(v11, v18, a4);
                  goto LABEL_35;
                }
              }
            }
          }
        }
      }
      v13 = 87;
    }
    else
    {
      v13 = 5;
    }
LABEL_5:
    UserSetLastError(v13);
LABEL_35:
    ThreadUnlock1(v15, v14);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v7;
}
