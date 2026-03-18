/*
 * XREFs of Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000F9E0
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_MapTransfers @ 0x1C00022F8 (Bulk_MapTransfers.c)
 *     TR_AttemptStateChange @ 0x1C0028AA4 (TR_AttemptStateChange.c)
 */

__int64 __fastcall Bulk_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 result; // rax

  v3 = TR_AttemptStateChange(a2, 2LL, 3LL);
  v4 = a2;
  if ( v3 != 2 )
  {
    _InterlockedExchange((volatile __int32 *)(a2 + 292), 1);
    result = TR_AttemptStateChange(a2, 2LL, 3LL);
    if ( (_DWORD)result != 2 )
      return result;
    v4 = a2;
  }
  return Bulk_MapTransfers(v4);
}
