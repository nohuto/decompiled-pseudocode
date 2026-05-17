/*
 * XREFs of isleadbyte @ 0x180098D88
 * Callers:
 *     ReadString @ 0x18009E894 (ReadString.c)
 *     _input_l @ 0x18009EBE0 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
