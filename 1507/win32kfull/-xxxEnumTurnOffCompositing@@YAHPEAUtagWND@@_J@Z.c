/*
 * XREFs of ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01E75D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 */

__int64 __fastcall xxxEnumTurnOffCompositing(struct tagWND *a1)
{
  if ( (*((_BYTE *)a1 + 51) & 2) != 0 )
    xxxSetWindowStyle(a1, -20, *((_DWORD *)a1 + 12) & 0x87F77FF);
  return 1LL;
}
