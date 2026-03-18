/*
 * XREFs of UserKillTimer @ 0x1C02390C0
 * Callers:
 *     ?vDisableTimers@@YAXK@Z @ 0x1C00FEB40 (-vDisableTimers@@YAXK@Z.c)
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C007F108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
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
