/*
 * XREFs of ?ValidateState@@YAHK@Z @ 0x1C01523C4
 * Callers:
 *     SetWindowState @ 0x1C0152310 (SetWindowState.c)
 *     ClearWindowState @ 0x1C0152370 (ClearWindowState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateState(__int16 a1)
{
  return HIBYTE(a1) <= 0xFu && ((unsigned __int8)a1 & byte_1C02EDEE0[HIBYTE(a1)]) == (_BYTE)a1;
}
