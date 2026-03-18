/*
 * XREFs of NtUserGetMenuBarInfo @ 0x1C0074460
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxGetMenuBarInfo @ 0x1C00740E0 (xxxGetMenuBarInfo.c)
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, int a2, int a3, unsigned __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  _BYTE *v11; // rdx
  unsigned int MenuBarInfo; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v18[4]; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v19[3]; // [rsp+60h] [rbp-68h] BYREF

  memset(v19, 0, sizeof(v19));
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v18;
    v18[1] = v10;
    ++*(_DWORD *)(v10 + 8);
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (_BYTE *)a4;
    if ( a4 >= W32UserProbeAddress )
      v11 = (_BYTE *)W32UserProbeAddress;
    *v11 = *v11;
    v11[47] = v11[47];
    LODWORD(v19[0]) = *(_DWORD *)a4;
    MenuBarInfo = xxxGetMenuBarInfo(v10, a2, a3, (__int64)v19);
    v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
    if ( (*(_BYTE *)(v14 + 224) & 1) == 0 )
    {
      v15 = *(_QWORD *)(v10 + 16);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(*(unsigned int *)(v15 + 568));
      if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v15 + 376)) )
        TransformRectBetweenCoordinateSpaces((char *)v19 + 4, (char *)v19 + 4, 0LL, v10);
    }
    if ( MenuBarInfo )
    {
      DWORD1(v19[1]) = 0;
      HIDWORD(v19[2]) = 0;
      *(_OWORD *)a4 = v19[0];
      *(_OWORD *)(a4 + 16) = v19[1];
      *(_OWORD *)(a4 + 32) = v19[2];
    }
    ThreadUnlock1(v14, v13);
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return MenuBarInfo;
}
