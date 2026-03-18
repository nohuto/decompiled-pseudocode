/*
 * XREFs of ACPIInterruptInitialize @ 0x1C006FB20
 * Callers:
 *     ACPIInitialize @ 0x1C0086558 (ACPIInitialize.c)
 * Callees:
 *     OSInterruptVector @ 0x1C00864E0 (OSInterruptVector.c)
 */

__int64 ACPIInterruptInitialize()
{
  unsigned int v0; // edx

  v0 = 0;
  if ( !*((_BYTE *)AcpiInformation + 133) )
    return (unsigned int)OSInterruptVector();
  return v0;
}
