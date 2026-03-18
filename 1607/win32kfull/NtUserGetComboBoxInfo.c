/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1C0146100
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxGetComboBoxInfo @ 0x1C01462D4 (xxxGetComboBoxInfo.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _BYTE *v7; // rdx
  int ComboBoxInfo; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  char CurrentThreadDpiAwarenessContext; // al
  _QWORD v20[4]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v21[8]; // [rsp+70h] [rbp-58h] BYREF

  memset(v21, 0, sizeof(v21));
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v20;
    v20[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    if ( ((PsGetCurrentProcessWow64Process(gptiCurrent) != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (_BYTE *)a2;
    if ( a2 >= W32UserProbeAddress )
      v7 = (_BYTE *)W32UserProbeAddress;
    *v7 = *v7;
    v7[63] = v7[63];
    LODWORD(v21[0]) = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo((struct tagWND *)v6, (__int64)v21);
    v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11) + 432);
    if ( (*(_BYTE *)(v13 + 224) & 1) == 0 )
    {
      v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15) + 432);
      if ( (*(_BYTE *)(v13 + 224) & 0x20) == 0 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13, v12, v16, v17);
        v13 = *(_DWORD *)(v6 + 352) & 0xF;
        if ( (CurrentThreadDpiAwarenessContext & 0xF) != (_DWORD)v13 )
        {
          TransformRectBetweenCoordinateSpaces((char *)&v21[2] + 4, (char *)&v21[2] + 4, 0LL, v6);
          TransformRectBetweenCoordinateSpaces((char *)v21 + 4, (char *)v21 + 4, 0LL, v6);
        }
      }
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = *(_OWORD *)v21;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)&v21[2];
      *(_OWORD *)(a2 + 32) = *(_OWORD *)&v21[4];
      *(_OWORD *)(a2 + 48) = *(_OWORD *)&v21[6];
    }
    ThreadUnlock1(v13, v12);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return ComboBoxInfo;
}
