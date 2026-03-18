/*
 * XREFs of AlpcHandleDataDestroyProcedure @ 0x1404B0400
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObpDecrementHandleCount @ 0x140470084 (ObpDecrementHandleCount.c)
 */

__int64 __fastcall AlpcHandleDataDestroyProcedure(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    ObpDecrementHandleCount(*(_KPROCESS **)(a1 + 8), v1 - 48);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 24), 0x7544624Fu);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x7544624Fu);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return 0LL;
}
