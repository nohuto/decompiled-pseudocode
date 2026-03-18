/*
 * XREFs of NtUserMessageCall @ 0x140024160
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserMessageCall(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  char v9; // si
  __int64 v13; // rcx
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  ULONG_PTR *v21; // rax
  ULONG_PTR v22; // r8
  ULONG_PTR *v23; // rcx
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  char v29; // bp
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-38h] BYREF
  __int64 v34; // [rsp+48h] [rbp-30h]

  v7 = 0LL;
  v8 = a2;
  v9 = 0;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    UserSetLastError(87);
    return 0LL;
  }
  if ( a6 == 672 || a6 == 694 )
    return 0LL;
  if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) != 0 || (unsigned int)(a6 - 695) > 1 )
  {
    if ( a6 == 689 && a2 - 992 > 8 )
      goto LABEL_7;
  }
  else
  {
    v7 = -1LL;
  }
  v9 = 1;
LABEL_7:
  if ( !v9 )
  {
    EnterSharedCrit(0LL, 1LL);
    goto LABEL_9;
  }
  while ( 1 )
  {
    EnterCrit(0LL, 1LL);
LABEL_9:
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v13);
    v17 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
    if ( v7 == -1 )
      break;
    v18 = ValidateHwnd(a1);
    v7 = v18;
    if ( !v18 )
    {
      UserSessionSwitchLeaveCrit(v16);
      return 0LL;
    }
    if ( *(_QWORD *)(v18 + 16) == v17 )
    {
      v16 = *(_QWORD *)(v18 + 40);
      if ( (*(_BYTE *)(v16 + 18) & 4) == 0 )
        break;
    }
    if ( v9 )
      break;
    v9 = 1;
    UserSessionSwitchLeaveCrit(v16);
  }
  v34 = 0LL;
  BugCheckParameter3 = -1LL;
  if ( v7 != -1 )
  {
    BugCheckParameter3 = *(_QWORD *)(v17 + 448);
    *(_QWORD *)(v17 + 448) = &BugCheckParameter3;
    v34 = v7;
    HMLockObject(v7);
  }
  if ( v9 )
  {
    if ( (unsigned int)v8 >= 0x400 )
    {
      UserSessionState = W32GetUserSessionState(v16, v15);
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(UserSessionState
                                                                                  + 8LL * (((_BYTE)a6 + 6) & 0x1F)
                                                                                  + 70904))(
              v7,
              (unsigned int)v8,
              a3,
              a4,
              a5);
    }
    else
    {
      _mm_lfence();
      v20 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, bool))gapfnMessageCall[(unsigned __int8)MessageTable[v8]])(
              v7,
              (unsigned int)v8,
              a3,
              a4,
              a5,
              a6,
              a7 != 0);
    }
  }
  else
  {
    v25 = (__int64 *)PsGetCurrentThreadWin32Thread(v16);
    if ( v25 )
      v28 = *v25;
    else
      v28 = 0LL;
    if ( *(_BYTE *)(v28 + 1708) == 1 )
    {
      v29 = 1;
      *(_BYTE *)(v28 + 1708) = 0;
    }
    else
    {
      v29 = 0;
    }
    if ( (unsigned int)v8 < 0x400 )
    {
      _mm_lfence();
      v31 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, bool))gapfnMessageCall[(unsigned __int8)MessageTable[v8]])(
              v7,
              (unsigned int)v8,
              a3,
              a4,
              a5,
              a6,
              a7 != 0);
    }
    else
    {
      v30 = W32GetUserSessionState(v27, v26);
      v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(v30
                                                                                  + 8LL * (((_BYTE)a6 + 6) & 0x1F)
                                                                                  + 70904))(
              v7,
              (unsigned int)v8,
              a3,
              a4,
              a5);
    }
    v20 = v31;
    if ( v29 )
      *(_BYTE *)(v28 + 1708) = 1;
  }
  if ( BugCheckParameter3 != -1LL )
  {
    v21 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v19);
    if ( v21 )
      v22 = *v21;
    else
      v22 = 0LL;
    v23 = *(ULONG_PTR **)(v22 + 448);
    if ( v23 != &BugCheckParameter3 )
      KeBugCheckEx(0x164u, 0x3BuLL, v22, (ULONG_PTR)&BugCheckParameter3, 0LL);
    *(_QWORD *)(v22 + 448) = *v23;
    HMUnlockObject(v23[1]);
  }
  UserSessionSwitchLeaveCrit(v19);
  return v20;
}
