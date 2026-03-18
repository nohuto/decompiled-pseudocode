/*
 * XREFs of UserSetTimer @ 0x1402F02D0
 * Callers:
 *     vEnableSynchronize @ 0x1402346F0 (vEnableSynchronize.c)
 *     GreStartTimers @ 0x14025C594 (GreStartTimers.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1401D1848 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     SetRITTimer @ 0x1401F74F0 (SetRITTimer.c)
 */

__int64 __fastcall UserSetTimer(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
  if ( *(_QWORD *)(W32GetUserSessionState(v2, v1) + 57568) )
    v6 = SetRITTimer(0LL, 0x32u, (__int64)GreSynchronizeTimer, 0);
  else
    v6 = 0LL;
  if ( !(_BYTE)v8 )
    UserSessionSwitchLeaveCritWithNonPaged(v4, v3, v5);
  return v6;
}
