/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1C01137B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     xxxGetComboBoxInfo @ 0x1C011397C (xxxGetComboBoxInfo.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _BYTE *v7; // rdx
  unsigned int ComboBoxInfo; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v14[5]; // [rsp+48h] [rbp-90h] BYREF
  _OWORD v15[4]; // [rsp+70h] [rbp-68h] BYREF

  memset(v15, 0, sizeof(v15));
  EnterCrit(1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v14;
    v14[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    if ( ((PsGetCurrentProcessWow64Process(gptiCurrent) != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (_BYTE *)a2;
    if ( a2 >= W32UserProbeAddress )
      v7 = (_BYTE *)W32UserProbeAddress;
    *v7 = *v7;
    v7[63] = v7[63];
    LODWORD(v15[0]) = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v6, v15);
    v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440);
    if ( (*(_BYTE *)(v10 + 224) & 1) == 0 )
    {
      v11 = *(_QWORD *)(v6 + 16);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(*(unsigned int *)(v11 + 576));
      if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v11 + 384)) )
      {
        TransformRectBetweenCoordinateSpaces((char *)&v15[1] + 4, (char *)&v15[1] + 4, 0LL, v6);
        TransformRectBetweenCoordinateSpaces((char *)v15 + 4, (char *)v15 + 4, 0LL, v6);
      }
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = v15[0];
      *(_OWORD *)(a2 + 16) = v15[1];
      *(_OWORD *)(a2 + 32) = v15[2];
      *(_OWORD *)(a2 + 48) = v15[3];
    }
    ThreadUnlock1(v10, v9);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return ComboBoxInfo;
}
