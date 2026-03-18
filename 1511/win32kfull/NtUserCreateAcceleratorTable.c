/*
 * XREFs of NtUserCreateAcceleratorTable @ 0x1C0100690
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _CreateAcceleratorTable @ 0x1C0100760 (_CreateAcceleratorTable.c)
 */

__int64 __fastcall NtUserCreateAcceleratorTable(unsigned __int64 Src, int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 *AcceleratorTable; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = a2;
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(v2 - 1) > 0x7FFE )
  {
    v5 = 0LL;
    UserSetLastError(87);
  }
  else
  {
    if ( v2 > 0x2AAAAAAAAAAAAAAALL )
      ExRaiseAccessViolation();
    v4 = 6 * v2;
    v5 = 0LL;
    if ( 6 * v2 )
    {
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0x2AAAAAAAAAAAAAAALL) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v4 + Src > W32UserProbeAddress || v4 + Src < Src )
        *W32UserProbeAddress = 0;
    }
    AcceleratorTable = (__int64 *)CreateAcceleratorTable((void *)Src, (unsigned int)(6 * v2));
    if ( AcceleratorTable )
      v5 = *AcceleratorTable;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v5;
}
