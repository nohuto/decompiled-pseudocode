/*
 * XREFs of KiConnectSwInterrupt @ 0x1407842BC
 * Callers:
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiConnectSwInterrupt(ULONG_PTR a1, unsigned int a2)
{
  return HvlConnectSwInterrupt(a1, (unsigned __int64)a2 << 6);
}
