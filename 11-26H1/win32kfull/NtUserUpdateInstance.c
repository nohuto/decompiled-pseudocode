/*
 * XREFs of NtUserUpdateInstance @ 0x1402C0A20
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     xxxChangeMonitorFlags @ 0x14008574C (xxxChangeMonitorFlags.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserUpdateInstance(__int64 a1, volatile void *a2, unsigned int a3)
{
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v6 = 0;
  v7 = 0;
  EnterCrit(0LL, 0LL);
  ProbeForWrite(a2, 4uLL, 1u);
  v8 = HMValidateHandleNoRip(a1, 9);
  if ( v8 )
  {
    xxxChangeMonitorFlags(v8, a3);
    v7 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 66680);
  }
  else
  {
    v6 = 16390;
  }
  RtlWriteULongToUser(a2, v7);
  UserSessionSwitchLeaveCrit(v11);
  return v6;
}
