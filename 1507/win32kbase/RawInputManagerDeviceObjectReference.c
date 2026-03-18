/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C0077220
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C0075724 (RIMStartDeviceSpecificRead.c)
 *     rimOnPnpArrived @ 0x1C00769E4 (rimOnPnpArrived.c)
 *     HMCreateHandleForObject @ 0x1C0077100 (HMCreateHandleForObject.c)
 *     RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C00C2F8C (RIMFindReferencedSiblingPointerDeviceForMouseDevice.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00C989C (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  return ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
}
