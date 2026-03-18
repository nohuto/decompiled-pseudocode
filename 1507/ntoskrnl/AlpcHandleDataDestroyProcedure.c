/*
 * XREFs of AlpcHandleDataDestroyProcedure @ 0x1404D4248
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObpDecrementHandleCount @ 0x1404D3564 (ObpDecrementHandleCount.c)
 */

__int64 __fastcall AlpcHandleDataDestroyProcedure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    ObpDecrementHandleCount(*(_KPROCESS **)(a1 + 8), v4 - 48, a3, a4);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 24), 0x7544624Fu);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x7544624Fu);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return 0LL;
}
