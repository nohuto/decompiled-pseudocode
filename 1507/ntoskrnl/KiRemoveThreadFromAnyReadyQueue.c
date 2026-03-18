/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x1400D34E0
 * Callers:
 *     KiSetAffinityThread @ 0x1400434D0 (KiSetAffinityThread.c)
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D2D38 (KiProcessPendingForegroundBoosts.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140133514 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x14020739C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     <none>
 */

int __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
  {
    LODWORD(v7) = KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 1488), a3, a4);
  }
  else
  {
    v5 = a3 + 216;
    v6 = *(_QWORD **)(a3 + 216);
    v7 = *(_QWORD **)(a3 + 224);
    if ( *(int *)(a3 + 536) >= 0 )
    {
      if ( v6[1] != v5 || *v7 != v5 )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      if ( v7 == v6 )
      {
        LODWORD(v7) = *(_DWORD *)(a1 + 22680) ^ (1 << a4);
        *(_DWORD *)(a1 + 22680) = (_DWORD)v7;
      }
    }
    else
    {
      if ( v6[1] != v5 || *v7 != v5 )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      if ( v7 == v6 )
      {
        LODWORD(v7) = *(_DWORD *)(a2 + 8) ^ (1 << a4);
        *(_DWORD *)(a2 + 8) = (_DWORD)v7;
      }
    }
  }
  return (int)v7;
}
