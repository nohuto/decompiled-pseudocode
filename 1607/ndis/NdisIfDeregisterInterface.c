/*
 * XREFs of NdisIfDeregisterInterface @ 0x1C009CC90
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C0011700 (ndisFilterAttachCleanUp.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C0040174 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ndisIfDeletePersistedInterface @ 0x1C0043658 (ndisIfDeletePersistedInterface.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisIfDeregisterInterface(NET_IFINDEX ifIndex)
{
  ndisIfDeregisterInterfaceEx(ifIndex, 0LL);
}
