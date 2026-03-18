/*
 * XREFs of NtUserGetPriorityClipboardFormat @ 0x1C0214630
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetPriorityClipboardFormat @ 0x1C01E677C (_GetPriorityClipboardFormat.c)
 */

__int64 __fastcall NtUserGetPriorityClipboardFormat(unsigned __int64 a1, int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int PriorityClipboardFormat; // [rsp+20h] [rbp-28h]

  v2 = a2;
  EnterSharedCrit(0LL, 1LL);
  if ( v2 > 0x3FFFFFFFFFFFFFFFLL )
    ExRaiseAccessViolation();
  v6 = 4 * v2;
  if ( 4 * v2 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0x3FFFFFFFFFFFFFFFLL) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v6 + a1 > W32UserProbeAddress || v6 + a1 < a1 )
      *W32UserProbeAddress = 0;
  }
  PriorityClipboardFormat = GetPriorityClipboardFormat(a1, (unsigned int)v2, v4, v5);
  UserSessionSwitchLeaveCrit(v8, v7);
  return PriorityClipboardFormat;
}
