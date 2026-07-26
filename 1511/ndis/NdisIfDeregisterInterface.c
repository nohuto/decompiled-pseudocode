/*
 * XREFs of NdisIfDeregisterInterface @ 0x1C00BF7B0
 * Callers:
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003C190 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ndisIfDeletePersistedInterface @ 0x1C003F980 (ndisIfDeletePersistedInterface.c)
 *     ndisFilterAttachCleanUp @ 0x1C0054464 (ndisFilterAttachCleanUp.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisIfDeregisterInterface(NET_IFINDEX ifIndex)
{
  ndisIfDeregisterInterfaceEx(ifIndex, 0LL);
}
