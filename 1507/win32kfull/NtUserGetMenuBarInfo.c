/*
 * XREFs of NtUserGetMenuBarInfo @ 0x1C00845A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     xxxGetMenuBarInfo @ 0x1C00856C0 (xxxGetMenuBarInfo.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
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
  EnterCrit(1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v18;
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
    MenuBarInfo = xxxGetMenuBarInfo(v10, a2, a3, v19);
    v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440);
    if ( (*(_BYTE *)(v14 + 224) & 1) == 0 )
    {
      v15 = *(_QWORD *)(v10 + 16);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(*(unsigned int *)(v15 + 576));
      if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v15 + 384)) )
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
