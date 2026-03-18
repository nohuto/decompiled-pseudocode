/*
 * XREFs of ZwLoadKeyEx @ 0x140152580
 * Callers:
 *     PiDrvDbLoadHive @ 0x1404BDEE0 (PiDrvDbLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKeyEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
