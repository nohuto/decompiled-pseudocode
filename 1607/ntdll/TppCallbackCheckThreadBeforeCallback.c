/*
 * XREFs of TppCallbackCheckThreadBeforeCallback @ 0x18003A430
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x18003B5E0 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     TppCheckForTransactions @ 0x1800FE4C4 (TppCheckForTransactions.c)
 */

void __fastcall TppCallbackCheckThreadBeforeCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  void *v6; // r9

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 128);
    *(_GUID *)(a1 + 232) = NtCurrentTeb()->ActivityId;
    if ( v3 )
    {
      if ( (*(_BYTE *)(v3 + 436) & 1) == 0 )
      {
        *(_DWORD *)(a1 + 104) |= 8u;
        v4 = *(unsigned int *)(a1 + 104);
        if ( NtCurrentTeb()->IsImpersonating )
        {
          v4 = (unsigned int)v4 | 4;
          *(_DWORD *)(a1 + 104) = v4;
        }
        if ( (unsigned __int8)TppCheckForTransactions(v4, a2, a1) )
          *(_DWORD *)(v5 + 104) |= 0x10u;
        if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
          *(_DWORD *)(v5 + 104) |= 0x20u;
        if ( NtCurrentTeb()->PreferredLanguages != v6 )
          *(_DWORD *)(v5 + 104) |= 0x40u;
        if ( NtCurrentTeb()->SavedPriorityState != v6 )
          *(_DWORD *)(v5 + 104) |= 0x80u;
      }
    }
  }
}
