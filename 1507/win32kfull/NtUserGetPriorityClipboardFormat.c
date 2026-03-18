/*
 * XREFs of NtUserGetPriorityClipboardFormat @ 0x1C021B9B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetPriorityClipboardFormat @ 0x1C01F0ADC (_GetPriorityClipboardFormat.c)
 */

__int64 __fastcall NtUserGetPriorityClipboardFormat(unsigned int *a1, int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int PriorityClipboardFormat; // [rsp+20h] [rbp-28h]

  v2 = a2;
  EnterSharedCrit(1LL);
  if ( v2 > 0x3FFFFFFFFFFFFFFFLL )
    ExRaiseAccessViolation();
  v4 = v2;
  if ( 4 * v2 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0x3FFFFFFFFFFFFFFFLL) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & (unsigned __int64)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a1[v4] > W32UserProbeAddress || &a1[v4] < a1 )
      *W32UserProbeAddress = 0;
  }
  PriorityClipboardFormat = GetPriorityClipboardFormat(a1, v2);
  UserSessionSwitchLeaveCrit(v6, v5);
  return PriorityClipboardFormat;
}
