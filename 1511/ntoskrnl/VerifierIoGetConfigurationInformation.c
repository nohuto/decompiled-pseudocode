/*
 * XREFs of VerifierIoGetConfigurationInformation @ 0x1406C0754
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PCONFIGURATION_INFORMATION VerifierIoGetConfigurationInformation(void)
{
  return pXdvIoGetConfigurationInformation();
}
