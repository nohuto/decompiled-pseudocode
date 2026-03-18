/*
 * XREFs of VerifierIoGetDeviceNumaNode @ 0x1406C076C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoGetDeviceNumaNode(PDEVICE_OBJECT Pdo, PUSHORT NodeNumber)
{
  return pXdvIoGetDeviceNumaNode(Pdo, NodeNumber);
}
