/*
 * XREFs of NdisMIdleNotificationComplete @ 0x1C006B0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisMIdleNotificationComplete(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return NdisMIdleNotificationCompleteEx(a1, 0);
}
