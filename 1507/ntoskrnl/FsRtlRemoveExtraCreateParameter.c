/*
 * XREFs of FsRtlRemoveExtraCreateParameter @ 0x1404A57D0
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x14006DA88 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x140070120 (FsRtlCheckOplockEx.c)
 *     IopSymlinkRemoveECP @ 0x140070B34 (IopSymlinkRemoveECP.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlRemoveExtraCreateParameter(
        PECP_LIST EcpList,
        LPCGUID EcpType,
        PVOID *EcpContext,
        ULONG *EcpContextSize)
{
  NTSTATUS v4; // ebx
  struct _LIST_ENTRY *Flink; // r10
  char *v6; // rax
  struct _LIST_ENTRY *v8; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  *EcpContext = 0LL;
  v4 = -1073741275;
  Flink = EcpList->EcpList.Flink;
  if ( Flink == &EcpList->EcpList )
    return v4;
  while ( 1 )
  {
    v6 = (char *)Flink[1].Flink - *(_QWORD *)&EcpType->Data1;
    if ( !v6 )
      v6 = (char *)Flink[1].Blink - *(_QWORD *)EcpType->Data4;
    if ( !v6 )
      break;
    Flink = Flink->Flink;
    if ( Flink == &EcpList->EcpList )
      return v4;
  }
  LODWORD(Flink[2].Blink) |= 4u;
  v4 = 0;
  v8 = Flink->Flink;
  Blink = Flink->Blink;
  if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
    __fastfail(3u);
  Blink->Flink = v8;
  v8->Blink = Blink;
  Flink->Blink = 0LL;
  Flink->Flink = 0LL;
  *EcpContext = &Flink[4];
  if ( !EcpContextSize )
    return v4;
  *EcpContextSize = HIDWORD(Flink[2].Blink) - 72;
  return 0;
}
