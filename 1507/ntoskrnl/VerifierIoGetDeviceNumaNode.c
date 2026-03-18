/*
 * XREFs of VerifierIoGetDeviceNumaNode @ 0x140741F60
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
