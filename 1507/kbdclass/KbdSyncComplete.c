/*
 * XREFs of KbdSyncComplete @ 0x1C00028B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KbdSyncComplete(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
