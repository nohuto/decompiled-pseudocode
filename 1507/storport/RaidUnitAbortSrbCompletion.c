/*
 * XREFs of RaidUnitAbortSrbCompletion @ 0x1C0032600
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaidAdapterRequestComplete @ 0x1C00221D8 (RaidAdapterRequestComplete.c)
 *     RaidUnitRequestTimeout @ 0x1C0033284 (RaidUnitRequestTimeout.c)
 */

__int64 __fastcall RaidUnitAbortSrbCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  int v10; // ecx
  void *v11; // rcx

  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) - 32LL) + 64LL);
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v6 = *(__int64 **)(a3 + 64);
  else
    v6 = *(__int64 **)(a3 + 24);
  v7 = *v6;
  if ( *(_BYTE *)(v7 + 2) == 40 )
    v8 = *(_QWORD *)(v7 + 96);
  else
    v8 = *(_QWORD *)(v7 + 48);
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), 0, 1);
  if ( v9 == 1 )
  {
    if ( *(int *)(a2 + 48) < 0 )
    {
      LOBYTE(v9) = *(_BYTE *)(a3 + 3);
      if ( (unsigned __int8)v9 > 0xEu || (v10 = 18944, !_bittest(&v10, v9)) )
        RaidUnitRequestTimeout(v5);
    }
  }
  else
  {
    RaidAdapterRequestComplete(*(_QWORD *)(v5 + 24), v8);
  }
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v11 = *(void **)(a3 + 64);
  else
    v11 = *(void **)(a3 + 24);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x72536152u);
  ExFreePoolWithTag((PVOID)a3, 0x72536152u);
  RaUnitReleaseRemoveLock(v5);
  return 0LL;
}
