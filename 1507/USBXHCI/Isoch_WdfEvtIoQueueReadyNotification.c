/*
 * XREFs of Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0028670
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x1C00200A0 (TR_AttemptStateChange.c)
 *     Isoch_MapTransfers @ 0x1C00250A4 (Isoch_MapTransfers.c)
 */

__int64 __fastcall Isoch_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 result; // rax

  v3 = TR_AttemptStateChange(a2, 2, 3);
  v4 = a2;
  if ( v3 != 2 )
  {
    _InterlockedExchange((volatile __int32 *)(a2 + 296), 1);
    result = TR_AttemptStateChange(a2, 2, 3);
    if ( (_DWORD)result != 2 )
      return result;
    v4 = a2;
  }
  return Isoch_MapTransfers(v4);
}
