/*
 * XREFs of _lambda_49ba710cdad7805a04ef9893981131b8_::operator() @ 0x140287E9C
 * Callers:
 *     ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x140287E1C (-DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ.c)
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 */

__int64 __fastcall lambda_49ba710cdad7805a04ef9893981131b8_::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  result = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(result + 16296) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    FindTimer(0LL, *(_QWORD *)(UserSessionState + 16296), 4u, 1, 0LL);
    result = W32GetUserSessionState(v7, v6);
    *(_QWORD *)(result + 16296) = 0LL;
  }
  return result;
}
