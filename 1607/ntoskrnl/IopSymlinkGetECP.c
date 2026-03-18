/*
 * XREFs of IopSymlinkGetECP @ 0x140079FA0
 * Callers:
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x140540AD0 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140540BD0 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x140541028 (IopGraftName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
