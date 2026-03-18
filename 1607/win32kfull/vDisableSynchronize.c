/*
 * XREFs of vDisableSynchronize @ 0x1C012B920
 * Callers:
 *     <none>
 * Callees:
 *     ?vDisableTimers@@YAXK@Z @ 0x1C012B9C0 (-vDisableTimers@@YAXK@Z.c)
 */

__int64 __fastcall vDisableSynchronize(__int64 a1)
{
  int v2; // esi
  int v3; // edi
  __int64 result; // rax
  signed __int32 v5; // ett
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v2 = 0;
  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v3 = 0;
    result = UserIsUserCritSecInShared();
    v2 = result;
  }
  else
  {
    v3 = 1;
    result = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange);
    if ( (_DWORD)result )
    {
      v2 = 1;
      v3 = 0;
    }
    else
    {
      result = UserEnterUserCritSec(v7, v6, v8);
    }
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x800) != 0 )
  {
    if ( v2 )
      UserPostNKAPC(
        KeGetCurrentThread(),
        vDisableSynchronizeNKAPCBegin,
        vDisableSynchronizeNKAPCBegin,
        vDisableSynchronizeNKAPC,
        *(unsigned int *)(a1 + 2152));
    else
      vDisableTimers(*(_DWORD *)(a1 + 2152));
    _m_prefetchw((const void *)(a1 + 56));
    do
    {
      v5 = *(_DWORD *)(a1 + 56);
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), v5 & 0xFFFFF7FF, v5);
    }
    while ( v5 != (_DWORD)result );
  }
  if ( v3 )
    return UserLeaveUserCritSec();
  return result;
}
