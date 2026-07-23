/*
 * XREFs of TppCleanupGroupMemberRelease @ 0x18003B9C0
 * Callers:
 *     TpReleaseTimer @ 0x18003A480 (TpReleaseTimer.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFC0 (TppWorkCallbackPrologRelease.c)
 *     TpReleaseWork @ 0x18003BA20 (TpReleaseWork.c)
 *     TpReleaseWait @ 0x180064580 (TpReleaseWait.c)
 *     TpReleaseAlpcCompletion @ 0x1800654B0 (TpReleaseAlpcCompletion.c)
 *     TpReleaseIoCompletion @ 0x1800785E0 (TpReleaseIoCompletion.c)
 *     TpReleaseJobNotification @ 0x1800843B0 (TpReleaseJobNotification.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

bool __fastcall TppCleanupGroupMemberRelease(__int64 a1, __int64 a2)
{
  unsigned __int32 v2; // eax
  __int64 v3; // r8
  unsigned __int32 v4; // ett

  _m_prefetchw((const void *)(a1 + 168));
  v2 = *(_DWORD *)(a1 + 168);
  do
  {
    v3 = v2 | 0x10000;
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), v3, v2);
  }
  while ( v4 != v2 );
  if ( !(_DWORD)a2 || (v2 & 0x10000) == 0 )
    return (v2 & 0x30000) == 0;
  TppRaiseInvalidParameter(v2, a2, v3, 0x10000LL);
  return 0;
}
