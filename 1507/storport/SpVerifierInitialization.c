/*
 * XREFs of SpVerifierInitialization @ 0x1C00547F4
 * Callers:
 *     DllInitialize @ 0x1C0011BF0 (DllInitialize.c)
 * Callees:
 *     <none>
 */

bool SpVerifierInitialization()
{
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  return MmIsVerifierEnabled(&VerifierFlags) >= 0 && MmAddVerifierThunks(&StorPortVerifierFunctionTable, 0x180u) >= 0;
}
