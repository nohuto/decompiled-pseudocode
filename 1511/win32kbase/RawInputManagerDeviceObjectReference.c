/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C0010880
 * Callers:
 *     rimOnPnpArrived @ 0x1C0010120 (rimOnPnpArrived.c)
 *     HMCreateHandleForObject @ 0x1C0010760 (HMCreateHandleForObject.c)
 *     RIMStartDeviceSpecificRead @ 0x1C007AAF0 (RIMStartDeviceSpecificRead.c)
 *     RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C00C3DAC (RIMFindReferencedSiblingPointerDeviceForMouseDevice.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00CA79C (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  return ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
}
