/*
 * XREFs of MmQuerySpecialPoolBlockType @ 0x1401DB89C
 * Callers:
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 * Callees:
 *     MI_VA_IN_SESSION_SPECIAL_POOL @ 0x140079580 (MI_VA_IN_SESSION_SPECIAL_POOL.c)
 */

__int64 __fastcall MmQuerySpecialPoolBlockType(unsigned __int64 a1)
{
  if ( qword_1402FE8F0
    && a1 >= qword_1402FE8F0
    && a1 < qword_1402FE8F0 + (qword_1402FE8D0 << 21)
    && (*(_BYTE *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                 - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
  {
    return 0LL;
  }
  else
  {
    return MI_VA_IN_SESSION_SPECIAL_POOL(a1) ? 33 : 1;
  }
}
