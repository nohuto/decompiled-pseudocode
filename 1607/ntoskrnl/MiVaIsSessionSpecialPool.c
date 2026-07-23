/*
 * XREFs of MiVaIsSessionSpecialPool @ 0x1400E9150
 * Callers:
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MmIsSpecialPoolAddress @ 0x1400E90BC (MmIsSpecialPoolAddress.c)
 *     MmQuerySpecialPoolBlockType @ 0x1401EC48C (MmQuerySpecialPoolBlockType.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsSessionSpecialPool(unsigned __int64 a1)
{
  _BOOL8 result; // rax
  int v2; // ecx

  result = 0;
  if ( a1 >= qword_140326900 && a1 < qword_140326900 + 0x2000000000LL )
  {
    v2 = *(unsigned __int8 *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                            - 0x57FFFFFFFDALL) >> 4;
    if ( v2 == 7 || v2 == 13 )
      return 1;
  }
  return result;
}
