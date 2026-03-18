/*
 * XREFs of UserPostWinLogonMessage @ 0x14029D240
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400C56B0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z @ 0x140265BBC (-UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserPostWinLogonMessage(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi

  v3 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63536) )
    return PostWinlogonMessage(v3, a2);
  else
    return 3221226025LL;
}
