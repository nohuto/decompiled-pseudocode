/*
 * XREFs of PpPagePathAssign @ 0x1406028A8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpPagePathAssign(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 1u);
}
