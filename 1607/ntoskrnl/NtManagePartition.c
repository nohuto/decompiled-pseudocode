/*
 * XREFs of NtManagePartition @ 0x140661488
 * Callers:
 *     <none>
 * Callees:
 *     MiManagePartition @ 0x140660A88 (MiManagePartition.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL || v7 < PartitionInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
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
