/*
 * XREFs of GreIsCurrentProcessSystemCritical @ 0x1400571F0
 * Callers:
 *     W32pThreadCallout @ 0x1400570B0 (W32pThreadCallout.c)
 *     W32pProcessCallout @ 0x1401F2240 (W32pProcessCallout.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsCurrentProcessSystemCritical(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct W32_PUSH_LOCK *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rcx
  BOOL v15; // esi

  if ( !*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 104) )
    return 0LL;
  v7 = *(_QWORD *)(W32GetSessionState(v4, v3, v5) + 104);
  if ( !*(_DWORD *)(v7 + 80) )
    return 0LL;
  v9 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(v7, v6, v8) + 96) + 24240LL);
  GreAcquirePushLockShared(v9);
  v13 = *(_QWORD *)(W32GetSessionState(v11, v10, v12) + 96);
  v15 = *(_QWORD *)(v13 + 24176) == PsGetCurrentProcess(v14);
  if ( v9 )
    GreReleasePushLockShared(v9);
  return v15;
}
