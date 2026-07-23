/*
 * XREFs of PopPepStartComponentIdleStateChangeActivity @ 0x1401317F0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxUpdateComponentAccountingEnhanced @ 0x140130D78 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140130DD8 (PopPepUpdateIdleStateRefCount.c)
 *     PopPluginNotifyIdleState @ 0x1402043F4 (PopPluginNotifyIdleState.c)
 */

char __fastcall PopPepStartComponentIdleStateChangeActivity(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r14
  __int64 v7; // rdi
  __int64 v9; // rbx

  v3 = 0;
  if ( !a2 )
    return v3;
  v7 = *(_QWORD *)(a2 + 64);
  if ( !*(_DWORD *)(v7 + 12) )
  {
    *(_DWORD *)(a2 + 180) = *(_DWORD *)(a2 + 176);
    *(_DWORD *)(a2 + 176) = *(_DWORD *)(v7 + 8);
    if ( *(_BYTE *)(a1 + 124) )
    {
      *(_DWORD *)(v7 + 12) = 1;
LABEL_10:
      v9 = *(unsigned int *)(a2 + 176);
      PopPepUpdateIdleStateRefCount(
        *(_DWORD *)(*(_QWORD *)(a2 + 192) + 24LL * *(unsigned int *)(a2 + 180) + 16),
        *(_DWORD *)(*(_QWORD *)(a2 + 192) + 24 * v9 + 16),
        1);
      PopFxUpdateComponentAccountingEnhanced(*(_QWORD *)(a1 + 32), *(_DWORD *)(a2 + 8), v9, 0);
      if ( (unsigned __int8)PopPluginNotifyIdleState(
                              *(_QWORD *)(a1 + 32),
                              *(unsigned int *)(a2 + 8),
                              *(unsigned int *)(a2 + 176),
                              0LL) == 1 )
        *(_DWORD *)(v7 + 12) = 2;
      goto LABEL_6;
    }
    *(_DWORD *)(v7 + 12) = 2;
  }
  if ( *(_DWORD *)(v7 + 12) == 1 )
    goto LABEL_10;
LABEL_6:
  if ( *(_DWORD *)(v7 + 12) == 2 )
  {
    *(_DWORD *)a3 = 1;
    v3 = 1;
    *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a2 + 176);
    *(_DWORD *)(v7 + 12) = 3;
  }
  return v3;
}
