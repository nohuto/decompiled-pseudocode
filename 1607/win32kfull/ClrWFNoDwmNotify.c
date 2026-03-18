/*
 * XREFs of ClrWFNoDwmNotify @ 0x1C01CE62C
 * Callers:
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall ClrWFNoDwmNotify(_DWORD *a1, unsigned __int16 a2)
{
  return SetOrClrWF(0, a1, a2, 0);
}
