/*
 * XREFs of isleadbyte @ 0x1800875C8
 * Callers:
 *     ReadString @ 0x18008D0F4 (ReadString.c)
 *     _input_l @ 0x18008D440 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
