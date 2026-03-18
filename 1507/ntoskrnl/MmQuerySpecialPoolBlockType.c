/*
 * XREFs of MmQuerySpecialPoolBlockType @ 0x1402203F8
 * Callers:
 *     MiIdentifyPfn @ 0x1400C4A30 (MiIdentifyPfn.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 * Callees:
 *     MI_VA_IN_SESSION_SPECIAL_POOL @ 0x14005EDE4 (MI_VA_IN_SESSION_SPECIAL_POOL.c)
 */

__int64 __fastcall MmQuerySpecialPoolBlockType(unsigned __int64 a1)
{
  if ( qword_14034EDB0
    && a1 >= qword_14034EDB0
    && a1 < qword_14034EDB0 + (qword_14034ED90 << 21)
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
