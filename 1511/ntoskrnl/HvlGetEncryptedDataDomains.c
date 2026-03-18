/*
 * XREFs of HvlGetEncryptedDataDomains @ 0x1401429F4
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x140126DAC (IopLoadCrashdumpDriver.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405FCA38 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     <none>
 */

__int64 HvlGetEncryptedDataDomains()
{
  if ( (HvlpFlags & 0x2000) != 0 )
    return (unsigned int)((HvlpFlags & 4) != 0) + 1;
  else
    return 0LL;
}
