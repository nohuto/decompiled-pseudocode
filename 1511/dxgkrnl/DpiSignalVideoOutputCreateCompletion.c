/*
 * XREFs of DpiSignalVideoOutputCreateCompletion @ 0x1C0027F48
 * Callers:
 *     DpiPdoIsChildConnected @ 0x1C00AA280 (DpiPdoIsChildConnected.c)
 *     DpiPdoAddPdo @ 0x1C00E2A50 (DpiPdoAddPdo.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DpiSignalVideoOutputCreateCompletion(__int64 a1)
{
  __int64 v1; // rcx
  LONG result; // eax

  v1 = *(_QWORD *)(a1 + 64);
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2336), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(v1 + 2344), 0, 0);
  return result;
}
