/*
 * XREFs of NtUserSetActivationFilter @ 0x1401A1510
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsIAMThread @ 0x140059A4C (IsIAMThread.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     _SetActivationFilter @ 0x1401C0798 (_SetActivationFilter.c)
 */

__int64 __fastcall NtUserSetActivationFilter(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rax
  int v6; // ecx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  _BYTE v12[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
  v5 = PtiCurrent(v4);
  if ( !(unsigned int)IAMThreadAccessGranted(v5) )
  {
    v6 = 5;
LABEL_3:
    v7 = 0;
    UserSetLastError(v6);
    goto LABEL_4;
  }
  v10 = ValidateHwnd(a1);
  if ( !v10 || !IsIAMThread(*(_QWORD *)(v10 + 16)) )
  {
    v6 = 87;
    goto LABEL_3;
  }
  v7 = SetActivationFilter(v11, a2);
LABEL_4:
  if ( v12[0] )
    --*(_DWORD *)(v13 + 28);
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
