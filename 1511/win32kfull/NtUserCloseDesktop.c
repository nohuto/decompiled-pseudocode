/*
 * XREFs of NtUserCloseDesktop @ 0x1C00CEB10
 * Callers:
 *     <none>
 * Callees:
 *     _CloseDesktop @ 0x1C00CEB48 (_CloseDesktop.c)
 */

__int64 __fastcall NtUserCloseDesktop(HANDLE Handle)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  EnterCrit(0LL, 1LL);
  LODWORD(Handle) = (int)CloseDesktop(Handle) >= 0;
  UserSessionSwitchLeaveCrit(v3, v2);
  return (unsigned int)Handle;
}
