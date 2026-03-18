/*
 * XREFs of NtUserSetTaskmanWindow @ 0x14024F380
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     _SetTaskmanWindow @ 0x14025AB90 (_SetTaskmanWindow.c)
 */

__int64 __fastcall NtUserSetTaskmanWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v6);
  if ( a1 )
  {
    v2 = ValidateHwnd(a1);
    if ( !v2 )
    {
      v4 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    v2 = 0LL;
  }
  v4 = SetTaskmanWindow(v2);
LABEL_4:
  if ( v6[0] )
  {
    v3 = v7;
    --*(_DWORD *)(v7 + 28);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
