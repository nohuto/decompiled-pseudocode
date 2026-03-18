/*
 * XREFs of vEnableSynchronize @ 0x1402346F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetTimer @ 0x1402F02D0 (UserSetTimer.c)
 */

void __fastcall vEnableSynchronize(__int64 a1)
{
  int v1; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // bp
  __int64 v7; // rbx
  signed __int32 v8; // ett

  v1 = *(_DWORD *)(a1 + 2112);
  if ( (v1 & 0xC0) != 0 )
  {
    if ( (unsigned int)UserIsUserCritSecIn() )
    {
      v6 = 0;
    }
    else
    {
      v6 = 1;
      UserEnterUserCritSec(v4, v3, v5);
    }
    v7 = *(_QWORD *)(W32GetSessionState(v4, v3) + 96);
    if ( (v1 & 0x80u) != 0 && (*(_QWORD *)(v7 + 4720))++ == -1LL )
      *(_QWORD *)(v7 + 4720) = UserSetTimer();
    if ( (v1 & 0x40) != 0 )
      ++*(_DWORD *)(v7 + 4712);
    _m_prefetchw((const void *)(a1 + 40));
    do
      v8 = *(_DWORD *)(a1 + 40);
    while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v8 | 0x800, v8) );
    if ( v6 )
      UserLeaveUserCritSec();
  }
}
