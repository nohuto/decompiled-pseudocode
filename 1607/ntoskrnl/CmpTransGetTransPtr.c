/*
 * XREFs of CmpTransGetTransPtr @ 0x140581CB8
 * Callers:
 *     CmpTransIsTransActive @ 0x1401B5060 (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
