/*
 * XREFs of CpEnableFifo @ 0x14023DB04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall CpEnableFifo(_WORD *a1, unsigned __int8 a2)
{
  return WRITE_UCHAR(*a1 + 2 * CpRegisterWidth, a2);
}
