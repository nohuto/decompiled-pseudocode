/*
 * XREFs of IopSymlinkRemoveECP @ 0x140070B34
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x140548AC0 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x140548FF4 (IopGraftName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
