/*
 * XREFs of TppCleanupGroupMemberRelease @ 0x18000B990
 * Callers:
 *     TpReleaseWait @ 0x1800078A0 (TpReleaseWait.c)
 *     TppWorkCallbackPrologRelease @ 0x180009D94 (TppWorkCallbackPrologRelease.c)
 *     TpReleaseTimer @ 0x18000A4C0 (TpReleaseTimer.c)
 *     TpReleaseWork @ 0x18000A880 (TpReleaseWork.c)
 *     TpReleaseAlpcCompletion @ 0x18006BDE0 (TpReleaseAlpcCompletion.c)
 *     TpReleaseIoCompletion @ 0x180079240 (TpReleaseIoCompletion.c)
 *     TpReleaseJobNotification @ 0x180081500 (TpReleaseJobNotification.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

bool __fastcall TppCleanupGroupMemberRelease(__int64 a1, __int64 a2)
{
  unsigned __int32 v2; // eax
  unsigned __int32 v3; // ett

  _m_prefetchw((const void *)(a1 + 160));
  v2 = *(_DWORD *)(a1 + 160);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 160), v2 | 0x10000, v2);
  }
  while ( v3 != v2 );
  if ( !(_DWORD)a2 || (v2 & 0x10000) == 0 )
    return (v2 & 0x30000) == 0;
  TppRaiseInvalidParameter(v2, a2);
  return 0;
}
