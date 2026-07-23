/*
 * XREFs of NtManagePartition @ 0x1406A4780
 * Callers:
 *     <none>
 * Callees:
 *     MiManagePartition @ 0x1406A4074 (MiManagePartition.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtManagePartition(
        HANDLE TargetHandle,
        HANDLE SourceHandle,
        PARTITION_INFORMATION_CLASS PartitionInformationClass,
        PVOID PartitionInformation,
        ULONG PartitionInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // r10
  char *v7; // rcx
  size_t Size; // [rsp+20h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && PartitionInformationLength )
  {
    if ( ((unsigned __int8)PartitionInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (char *)PartitionInformation + PartitionInformationLength;
    if ( (unsigned __int64)v7 > MmUserProbeAddress || v7 < PartitionInformation )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  LODWORD(Size) = PartitionInformationLength;
  return MiManagePartition(
           TargetHandle,
           SourceHandle,
           PartitionInformationClass,
           (LARGE_INTEGER *)PartitionInformation,
           Size,
           PreviousMode);
}
