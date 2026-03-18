/*
 * XREFs of ACPIInterruptInitialize @ 0x1C006D784
 * Callers:
 *     ACPIInitialize @ 0x1C0086574 (ACPIInitialize.c)
 * Callees:
 *     OSInterruptVector @ 0x1C00864FC (OSInterruptVector.c)
 */

__int64 ACPIInterruptInitialize()
{
  unsigned int v0; // edx

  v0 = 0;
  if ( !*((_BYTE *)AcpiInformation + 133) )
    return (unsigned int)OSInterruptVector();
  return v0;
}
