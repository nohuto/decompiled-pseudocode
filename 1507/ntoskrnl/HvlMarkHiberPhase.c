/*
 * XREFs of HvlMarkHiberPhase @ 0x14014CE38
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403F1A14 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401EDAB8 (HvlpMarkHypervisorPagesForHibernation.c)
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
