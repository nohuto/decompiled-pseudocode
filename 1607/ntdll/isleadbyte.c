/*
 * XREFs of isleadbyte @ 0x18009A148
 * Callers:
 *     ReadString @ 0x18009FCA4 (ReadString.c)
 *     _input_l @ 0x18009FFF0 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
