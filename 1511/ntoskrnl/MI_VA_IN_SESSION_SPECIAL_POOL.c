/*
 * XREFs of MI_VA_IN_SESSION_SPECIAL_POOL @ 0x140079580
 * Callers:
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MmIsSpecialPoolAddress @ 0x140079508 (MmIsSpecialPoolAddress.c)
 *     MmQuerySpecialPoolBlockType @ 0x1401DB89C (MmQuerySpecialPoolBlockType.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_VA_IN_SESSION_SPECIAL_POOL(unsigned __int64 a1)
{
  _BOOL8 result; // rax
  int v2; // ecx

  result = 0;
  if ( qword_1402FE600 )
  {
    if ( a1 >= qword_1402FE600 && a1 < qword_1402FE600 + 0x2000000000LL )
    {
      v2 = *(unsigned __int8 *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                              - 0x57FFFFFFFDALL) >> 4;
      if ( v2 == 7 || v2 == 13 )
        return 1;
    }
  }
  return result;
}
