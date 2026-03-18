/*
 * XREFs of WakeRITForShutdown @ 0x14025DD60
 * Callers:
 *     NtUserWakeRITForShutdown @ 0x1402C1090 (NtUserWakeRITForShutdown.c)
 * Callees:
 *     WakeRIT @ 0x140133F68 (WakeRIT.c)
 */

__int64 __fastcall WakeRITForShutdown(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx

  v1 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v2) != v1 || !*(_QWORD *)(W32GetUserSessionState(v4, v3) + 18728) )
    return 3221225473LL;
  UserSessionState = W32GetUserSessionState(v6, v5);
  *(_DWORD *)(UserSessionState + 68928) |= 0x2000000u;
  WakeRIT(2LL, v8);
  ShutdownImWorker();
  return 0LL;
}
