/*
 * XREFs of MiVaIsSessionSpecialPool @ 0x1400EB2E0
 * Callers:
 *     MiProtectPool @ 0x1400EA400 (MiProtectPool.c)
 *     MmIsSpecialPoolAddress @ 0x1400EB24C (MmIsSpecialPoolAddress.c)
 *     MmQuerySpecialPoolBlockType @ 0x1401EC660 (MmQuerySpecialPoolBlockType.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsSessionSpecialPool(unsigned __int64 a1)
{
  _BOOL8 result; // rax
  int v2; // ecx

  result = 0;
  if ( a1 >= qword_1403268C0 && a1 < qword_1403268C0 + 0x2000000000LL )
  {
    v2 = *(unsigned __int8 *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                            - 0x57FFFFFFFDALL) >> 4;
    if ( v2 == 7 || v2 == 13 )
      return 1;
  }
  return result;
}
