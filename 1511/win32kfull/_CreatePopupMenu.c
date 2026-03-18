/*
 * XREFs of _CreatePopupMenu @ 0x1C0112160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagMENU *__fastcall CreatePopupMenu(__int64 a1, __int64 a2, __int64 a3)
{
  return InternalCreateMenu(1, a2, a3);
}
