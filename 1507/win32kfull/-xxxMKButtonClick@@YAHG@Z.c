/*
 * XREFs of ?xxxMKButtonClick@@YAHG@Z @ 0x1C01EE2D0
 * Callers:
 *     ?xxxMKButtonDoubleClick@@YAHG@Z @ 0x1C01EE310 (-xxxMKButtonDoubleClick@@YAHG@Z.c)
 * Callees:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01EE330 (-xxxMKButtonSetState@@YAHG@Z.c)
 */

__int64 __fastcall xxxMKButtonClick()
{
  if ( (gdwPUDFlags & 0x2000) == 0 )
  {
    xxxMKButtonSetState(1u);
    xxxMKButtonSetState(0);
    xxxMKButtonSetState(1u);
  }
  return 0LL;
}
