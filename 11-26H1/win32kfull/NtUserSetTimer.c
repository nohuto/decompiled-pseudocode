/*
 * XREFs of NtUserSetTimer @ 0x140021060
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetTimer(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned int v13; // ebp
  _QWORD *CurrentProcessWin32Process; // rax
  char v16[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck(v16);
  v9 = 0LL;
  if ( a1 )
  {
    v11 = ValidateHwnd(a1);
    if ( !v11 )
      goto LABEL_17;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = 10;
  if ( a3 >= 0xA )
    v12 = a3;
  v13 = a5;
  if ( v12 > 0x7FFFFFFF )
    v12 = 0x7FFFFFFF;
  if ( a5 == 2147483637 )
  {
    v13 = 0x7FFFFFFF - v12;
  }
  else if ( a5 != -1 && (v12 + a5 < v12 || v12 + a5 > 0x7FFFFFFF) )
  {
    UserSetLastError(87LL);
    goto LABEL_17;
  }
  if ( !v11 )
    goto LABEL_16;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(0x7FFFFFFFLL);
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    CurrentProcessWin32Process = 0LL;
  if ( CurrentProcessWin32Process != *(_QWORD **)(*(_QWORD *)(v11 + 16) + 456LL) )
    UserSetLastError(5LL);
  else
LABEL_16:
    v9 = InternalSetTimer(v11, a2, v12, a4, v13, 0);
LABEL_17:
  if ( v16[0] )
    --*(_DWORD *)(v17 + 28);
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
