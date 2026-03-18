/*
 * XREFs of ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x14024C0C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 */

__int64 __fastcall xxxEnumTurnOffCompositing(struct tagWND *a1)
{
  __int64 v1; // r8

  v1 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v1 + 27) & 2) != 0 )
    xxxSetWindowStyle(a1, -20, *(_DWORD *)(v1 + 24) & 0x87F77FF);
  return 1LL;
}
