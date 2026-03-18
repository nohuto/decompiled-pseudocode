/*
 * XREFs of IopSymlinkCleanupECP @ 0x140548BFC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall IopSymlinkCleanupECP(PVOID EcpContext, LPCGUID EcpType)
{
  IopSymlinkFreeRelatedMountPointChain(EcpContext);
}
