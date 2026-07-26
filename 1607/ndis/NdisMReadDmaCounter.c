/*
 * XREFs of NdisMReadDmaCounter @ 0x1C005F4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisMReadDmaCounter(NDIS_HANDLE MiniportDmaHandle)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(*((_QWORD *)MiniportDmaHandle + 4) + 8LL) + 80LL))();
}
