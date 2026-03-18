/*
 * XREFs of VerifierIoGetConfigurationInformation @ 0x140741F48
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
