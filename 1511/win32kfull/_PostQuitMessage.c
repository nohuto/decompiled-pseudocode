/*
 * XREFs of _PostQuitMessage @ 0x1C009F3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PostQuitMessage(unsigned int a1)
{
  return IPostQuitMessage(gptiCurrent, a1);
}
