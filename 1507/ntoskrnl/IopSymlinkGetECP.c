/*
 * XREFs of IopSymlinkGetECP @ 0x140070050
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x14054891C (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140548AC0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkProcessReparse @ 0x140548F44 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x140548FF4 (IopGraftName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
