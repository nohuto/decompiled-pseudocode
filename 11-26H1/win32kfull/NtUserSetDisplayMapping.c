/*
 * XREFs of NtUserSetDisplayMapping @ 0x1402BC950
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _SetDisplayMapping @ 0x1402A953C (_SetDisplayMapping.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetDisplayMapping(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rax
  const struct tagUIPI_INFO *v6; // r8
  __int64 v7; // rcx
  int v8; // ebx
  struct tagTHREADINFO *v9; // rax
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // edx
  __int64 v16; // rsi
  _BYTE v17[16]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v18[4]; // [rsp+30h] [rbp-28h] BYREF

  v18[0] = 0x2000;
  v18[1] = -1;
  v18[2] = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
  v5 = PtiCurrent(v4);
  v8 = 0;
  if ( !UIPrivilegeIsolation::CheckAccess(
          (UIPrivilegeIsolation *)(*((_QWORD *)v5 + 57) + 864LL),
          (const struct tagUIPI_INFO *)v18,
          v6) )
  {
    v9 = PtiCurrent(v7);
    EtwTraceUIPISystemError(*((_QWORD *)v9 + 57), 0LL, 10LL);
LABEL_3:
    v10 = 5;
LABEL_4:
    UserSetLastError(v10);
    goto LABEL_5;
  }
  v13 = HMValidateHandleWithDescriptor(a1, 0x13u);
  v14 = v13;
  if ( !v13 || (*(_DWORD *)(v13 + 184) & 0x80u) == 0 )
  {
    UserSetLastError(6);
    v10 = 6;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v13 + 168) & 0x2000) != 0 )
  {
    UserSetLastError(5);
    goto LABEL_3;
  }
  v15 = *(_DWORD *)(*(_QWORD *)(v13 + 456) + 24LL);
  if ( v15 == 6 || v15 == 7 )
    goto LABEL_3;
  v16 = ValidateHmonitor(a2);
  if ( v16 )
  {
    v8 = 1;
    if ( ValidateHmonitorNoRip(*(_QWORD *)(v14 + 1336)) != v16 )
      v8 = SetDisplayMapping(*(_QWORD *)(v14 + 456), v16);
    *(_DWORD *)(v14 + 1344) = 1;
  }
LABEL_5:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17);
  UserSessionSwitchLeaveCrit(v11);
  return v8;
}
