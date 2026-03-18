/*
 * XREFs of DpiSignalVideoOutputCreateCompletion @ 0x1C002A998
 * Callers:
 *     DpiPdoIsChildConnected @ 0x1C00C2C38 (DpiPdoIsChildConnected.c)
 *     DpiPdoAddPdo @ 0x1C00EF39C (DpiPdoAddPdo.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DpiSignalVideoOutputCreateCompletion(__int64 a1)
{
  __int64 v1; // rcx
  LONG result; // eax

  v1 = *(_QWORD *)(a1 + 64);
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 3480), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(v1 + 3488), 0, 0);
  return result;
}
