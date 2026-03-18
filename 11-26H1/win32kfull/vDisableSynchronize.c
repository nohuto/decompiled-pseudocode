/*
 * XREFs of vDisableSynchronize @ 0x140236500
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FAF8 (--$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ?vDisableTimers@@YAXK@Z @ 0x1402365DC (-vDisableTimers@@YAXK@Z.c)
 */

char __fastcall vDisableSynchronize(__int64 a1)
{
  int v2; // esi
  Gre::Base *v3; // rcx
  int v4; // edi
  signed __int32 IsUserCritSecInShared; // eax
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  signed __int32 v10; // ett

  v2 = 0;
  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v4 = 0;
    IsUserCritSecInShared = UserIsUserCritSecInShared();
    v2 = IsUserCritSecInShared;
  }
  else
  {
    v4 = 1;
    v6 = Gre::Base::Globals(v3);
    LOBYTE(IsUserCritSecInShared) = GrepIsLockOwnedByCurrentThread<1,Gre::Base::SESSION_GLOBALS>(v6);
    if ( (_BYTE)IsUserCritSecInShared )
    {
      v2 = 1;
      v4 = 0;
    }
    else
    {
      LOBYTE(IsUserCritSecInShared) = UserEnterUserCritSec(v8, v7, v9);
    }
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x800) != 0 )
  {
    if ( v2 )
      GrepQueueApc(vDisableSynchronizeNKAPC, (void *)*(unsigned int *)(a1 + 2112), 0LL);
    else
      vDisableTimers(*(_DWORD *)(a1 + 2112));
    _m_prefetchw((const void *)(a1 + 40));
    do
    {
      v10 = *(_DWORD *)(a1 + 40);
      IsUserCritSecInShared = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v10 & 0xFFFFF7FF, v10);
    }
    while ( v10 != IsUserCritSecInShared );
  }
  if ( v4 )
    LOBYTE(IsUserCritSecInShared) = UserLeaveUserCritSec();
  return IsUserCritSecInShared;
}
