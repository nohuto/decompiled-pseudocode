/*
 * XREFs of FsRtlFindExtraCreateParameter @ 0x1404A5750
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x14006DA88 (FsRtlpAttachOplockKey.c)
 *     IopSymlinkGetECP @ 0x140070050 (IopSymlinkGetECP.c)
 *     FsRtlCheckOplockEx @ 0x140070120 (FsRtlCheckOplockEx.c)
 *     IopCreateFile @ 0x14050A2E0 (IopCreateFile.c)
 *     IopCheckTopDeviceHint @ 0x14052D3D4 (IopCheckTopDeviceHint.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1405C6F88 (IopSymlinkEnforceEnabledTypes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlFindExtraCreateParameter(
        PECP_LIST EcpList,
        LPCGUID EcpType,
        PVOID *EcpContext,
        ULONG *EcpContextSize)
{
  struct _LIST_ENTRY *Flink; // rax
  char *v6; // rdx

  if ( EcpContext )
    *EcpContext = 0LL;
  if ( EcpContextSize )
    *EcpContextSize = 0;
  Flink = EcpList->EcpList.Flink;
  if ( Flink == &EcpList->EcpList )
    return -1073741275;
  while ( 1 )
  {
    v6 = (char *)Flink[1].Flink - *(_QWORD *)&EcpType->Data1;
    if ( !v6 )
      v6 = (char *)Flink[1].Blink - *(_QWORD *)EcpType->Data4;
    if ( !v6 )
      break;
    Flink = Flink->Flink;
    if ( Flink == &EcpList->EcpList )
      return -1073741275;
  }
  LODWORD(Flink[2].Blink) |= 4u;
  if ( EcpContext )
    *EcpContext = &Flink[4];
  if ( EcpContextSize )
    *EcpContextSize = HIDWORD(Flink[2].Blink) - 72;
  return 0;
}
