/*
 * XREFs of __iscsym @ 0x180097080
 * Callers:
 *     <none>
 * Callees:
 *     __pctype_func @ 0x18009CE70 (__pctype_func.c)
 */

int __cdecl _iscsym(int C)
{
  char v1; // di

  v1 = C;
  return (_pctype_func()[(unsigned __int8)C] & 0x107) != 0 || v1 == 95;
}
