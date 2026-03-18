/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C0010C90
 * Callers:
 *     RIMHandleTTMDeviceArrival @ 0x1C000C65C (RIMHandleTTMDeviceArrival.c)
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 *     HMCreateHandleForObject @ 0x1C000E8E0 (HMCreateHandleForObject.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0010A8C (RIMStartDeviceSpecificRead.c)
 *     RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C00D26CC (RIMFindReferencedSiblingPointerDeviceForMouseDevice.c)
 *     RIMFindTouchDigitizerWithSize @ 0x1C00D38F0 (RIMFindTouchDigitizerWithSize.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00DA8B8 (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  return ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
}
