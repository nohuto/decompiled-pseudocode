/*
 * XREFs of NtUserRegisterHotKey @ 0x1401A23E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x1401A24FC (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 */

_BOOL8 __fastcall NtUserRegisterHotKey(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // rax
  __int64 v12; // rcx
  _BOOL8 v13; // rbx
  int v15; // ecx
  struct tagTHREADINFO *v16; // rax
  _BYTE v17[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
  v9 = PtiCurrent(v8);
  if ( (unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v9 + 57)) )
    goto LABEL_10;
  if ( (a3 & 0xFFFF95F0) != 0 )
  {
    v15 = 1004;
    goto LABEL_11;
  }
  if ( (a3 & 0x800) != 0 )
  {
    v16 = PtiCurrent(v10);
    if ( (unsigned int)IAMThreadAccessGranted(v16) )
    {
      if ( a4 )
        goto LABEL_4;
      v15 = 87;
LABEL_11:
      UserSetLastError(v15);
      goto LABEL_12;
    }
LABEL_10:
    v15 = 5;
    goto LABEL_11;
  }
LABEL_4:
  if ( !a1 )
  {
    v11 = 0LL;
    goto LABEL_6;
  }
  v11 = (struct tagWND *)ValidateHwnd(a1);
  if ( v11 )
  {
LABEL_6:
    v13 = _RegisterHotKey(v11, 0LL, a2, a3, a4, 0LL);
    goto LABEL_7;
  }
LABEL_12:
  v13 = 0LL;
LABEL_7:
  if ( v17[0] )
  {
    v12 = v18;
    --*(_DWORD *)(v18 + 28);
  }
  UserSessionSwitchLeaveCrit(v12);
  return v13;
}
