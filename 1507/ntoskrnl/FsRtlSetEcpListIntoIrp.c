/*
 * XREFs of FsRtlSetEcpListIntoIrp @ 0x1405496A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall FsRtlSetEcpListIntoIrp(PIRP Irp, PECP_LIST EcpList)
{
  return IoSetIrpExtraCreateParameter(Irp, EcpList);
}
