/*
 * XREFs of MiResumeFromHibernate @ 0x14014CD44
 * Callers:
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiResumeFromHibernate(int a1)
{
  if ( a1 )
    dword_14034F0F8 = a1;
  byte_14034F140 = 1;
  return MiPurgeLargeZeroNodePages();
}
