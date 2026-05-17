/*
 * XREFs of TppCleanupGroupMemberRelease @ 0x18003D61C
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x18003C414 (TppWorkCallbackPrologRelease.c)
 *     TpReleaseWork @ 0x18003CA20 (TpReleaseWork.c)
 *     TpReleaseTimer @ 0x18003ED60 (TpReleaseTimer.c)
 *     TpReleaseIoCompletion @ 0x1800729E0 (TpReleaseIoCompletion.c)
 *     TpReleaseJobNotification @ 0x18007A660 (TpReleaseJobNotification.c)
 *     TpReleaseAlpcCompletion @ 0x18007ABC0 (TpReleaseAlpcCompletion.c)
 *     TpReleaseWait @ 0x18007D2D0 (TpReleaseWait.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

bool __fastcall TppCleanupGroupMemberRelease(__int64 a1, __int64 a2)
{
  unsigned __int32 v2; // eax
  __int64 v3; // r8
  unsigned __int32 v4; // ett

  _m_prefetchw((const void *)(a1 + 160));
  v2 = *(_DWORD *)(a1 + 160);
  do
  {
    v3 = v2 | 0x10000;
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 160), v3, v2);
  }
  while ( v4 != v2 );
  if ( !(_DWORD)a2 || (v2 & 0x10000) == 0 )
    return (v2 & 0x30000) == 0;
  TppRaiseInvalidParameter(v2, a2, v3);
  return 0;
}
