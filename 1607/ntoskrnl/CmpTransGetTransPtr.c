/*
 * XREFs of CmpTransGetTransPtr @ 0x140581808
 * Callers:
 *     CmpTransIsTransActive @ 0x1401B517C (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
