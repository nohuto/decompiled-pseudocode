/*
 * XREFs of UserKillTimer @ 0x1C0231530
 * Callers:
 *     ?vDisableTimers@@YAXK@Z @ 0x1C012B9C0 (-vDisableTimers@@YAXK@Z.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C009A5A8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 */

__int64 __fastcall UserKillTimer(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  v1 = gidSynchronizeTimer;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v5);
  result = FindTimer(0LL, v1, 4u, 1, 0LL);
  if ( !(_DWORD)v5 )
    return UserSessionSwitchLeaveCrit(v4, v3);
  return result;
}
