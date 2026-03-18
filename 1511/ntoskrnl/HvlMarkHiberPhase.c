/*
 * XREFs of HvlMarkHiberPhase @ 0x14011839C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14039F020 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401B2DB4 (HvlpMarkHypervisorPagesForHibernation.c)
 */

__int64 HvlMarkHiberPhase()
{
  __int64 result; // rax

  result = (unsigned int)HvlpFlags;
  if ( (HvlpFlags & 4) != 0 )
  {
    if ( (HvlpFlags & 0x2000) == 0 )
      HvlpMarkHypervisorPagesForHibernation();
    return HvlpMarkHvlPagesForHibernation();
  }
  return result;
}
