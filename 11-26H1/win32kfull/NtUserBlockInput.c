/*
 * XREFs of NtUserBlockInput @ 0x140236FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     _BlockInput @ 0x140237008 (_BlockInput.c)
 */

__int64 __fastcall NtUserBlockInput(unsigned int a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v5);
  v3 = BlockInput(a1);
  if ( v5[0] )
  {
    v2 = v6;
    --*(_DWORD *)(v6 + 28);
  }
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
