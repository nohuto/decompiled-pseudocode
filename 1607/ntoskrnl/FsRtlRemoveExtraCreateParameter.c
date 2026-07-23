/*
 * XREFs of FsRtlRemoveExtraCreateParameter @ 0x14046A4A0
 * Callers:
 *     IopSymlinkRemoveECP @ 0x14007A034 (IopSymlinkRemoveECP.c)
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlpAttachOplockKey @ 0x14007BA34 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlRemoveExtraCreateParameter(
        PECP_LIST EcpList,
        LPCGUID EcpType,
        PVOID *EcpContext,
        ULONG *EcpContextSize)
{
  struct _LIST_ENTRY *Flink; // rax
  NTSTATUS v7; // r11d
  char *v8; // rdx
  NTSTATUS result; // eax
  struct _LIST_ENTRY *v10; // r9
  struct _LIST_ENTRY *Blink; // rdx
  int Blink_high; // ecx

  *EcpContext = 0LL;
  Flink = EcpList->EcpList.Flink;
  v7 = -1073741275;
  if ( Flink == &EcpList->EcpList )
    return v7;
  while ( 1 )
  {
    v8 = (char *)Flink[1].Flink - *(_QWORD *)&EcpType->Data1;
    if ( !v8 )
      v8 = (char *)Flink[1].Blink - *(_QWORD *)EcpType->Data4;
    if ( !v8 )
      break;
    Flink = Flink->Flink;
    if ( Flink == &EcpList->EcpList )
      return v7;
  }
  LODWORD(Flink[2].Blink) |= 4u;
  v7 = 0;
  v10 = Flink->Flink;
  Blink = Flink->Blink;
  if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
    __fastfail(3u);
  Blink->Flink = v10;
  v10->Blink = Blink;
  Flink->Blink = 0LL;
  Flink->Flink = 0LL;
  *EcpContext = &Flink[4];
  if ( !EcpContextSize )
    return v7;
  Blink_high = HIDWORD(Flink[2].Blink);
  result = 0;
  *EcpContextSize = Blink_high - 72;
  return result;
}
