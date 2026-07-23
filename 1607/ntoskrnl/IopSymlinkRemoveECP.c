/*
 * XREFs of IopSymlinkRemoveECP @ 0x14007A034
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x140541110 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x140541568 (IopGraftName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
