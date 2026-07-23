/*
 * XREFs of MmQuerySpecialPoolBlockType @ 0x1401EC48C
 * Callers:
 *     MiIdentifyPfn @ 0x14000F810 (MiIdentifyPfn.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 * Callees:
 *     MiVaIsSessionSpecialPool @ 0x1400E9150 (MiVaIsSessionSpecialPool.c)
 */

__int64 __fastcall MmQuerySpecialPoolBlockType(unsigned __int64 a1)
{
  if ( qword_140326C70
    && a1 >= qword_140326C70
    && a1 < qword_140326C70 + (qword_140326C50 << 21)
    && (*(_BYTE *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                 - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
  {
    return 0LL;
  }
  else
  {
    return MiVaIsSessionSpecialPool(a1) ? 33 : 1;
  }
}
