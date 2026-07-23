/*
 * XREFs of ZwCreatePort @ 0x14015B790
 * Callers:
 *     SeRmInitPhase1 @ 0x1407B2DB0 (SeRmInitPhase1.c)
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
