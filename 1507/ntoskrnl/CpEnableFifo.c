/*
 * XREFs of CpEnableFifo @ 0x140271F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall CpEnableFifo(__int16 a1, unsigned __int8 a2)
{
  return WRITE_UCHAR(a1 + 2 * CpRegisterWidth, a2);
}
