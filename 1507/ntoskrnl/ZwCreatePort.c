/*
 * XREFs of ZwCreatePort @ 0x140180550
 * Callers:
 *     SeRmInitPhase1 @ 0x1407BC118 (SeRmInitPhase1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectionInfoLength,
        ULONG MaxMessageLength,
        ULONG MaxPoolUsage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
