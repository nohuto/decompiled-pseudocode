/*
 * XREFs of NtUserGetDCEx @ 0x1C00F4550
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 DCEx; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rdi
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx

  DCEx = 0LL;
  v7 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2) || (a3 & 0xFFDAF800) != 0 )
  {
    v13 = 87;
LABEL_18:
    UserSetLastError(v13);
    goto LABEL_8;
  }
  if ( a1 )
  {
    v10 = (__int64 *)ValidateHwnd(a1);
    if ( !v10 )
      goto LABEL_8;
    goto LABEL_5;
  }
  v10 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 16LL);
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) & 0x20000000) != 0 )
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 376) + 728LL)
                    + 24LL) & 1;
  else
    v12 = 0;
  if ( v12 )
  {
    v14 = 0LL;
    if ( v10 )
      v14 = *v10;
    if ( !ValidateHwnd(v14) )
    {
      v13 = 5;
      goto LABEL_18;
    }
  }
LABEL_5:
  if ( !a2 || (v7 = GreLockRegion(a2)) != 0 )
    DCEx = _GetDCEx(v10, a2, a3);
  GreUnlockRegion(v7);
LABEL_8:
  UserSessionSwitchLeaveCrit(v9, v8);
  return DCEx;
}
