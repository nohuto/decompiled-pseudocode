/*
 * XREFs of RtlpQueryDiskWriteConstraintPolicy @ 0x18003974C
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180020620 (RtlQueryResourcePolicy.c)
 * Callees:
 *     NtClose_0 @ 0x180021376 (NtClose_0.c)
 *     RtlpGetVolumeHandle @ 0x1800393B8 (RtlpGetVolumeHandle.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x1800397AC (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
 */

__int64 __fastcall RtlpQueryDiskWriteConstraintPolicy(unsigned __int16 *a1, __int64 a2)
{
  NTSTATUS VolumeHandle; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  VolumeHandle = RtlpGetVolumeHandle(a1, &Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlpQueryDiskWriteConstraintPolicyByHandle(Handle, a2);
    if ( VolumeHandle >= 0 )
      VolumeHandle = 0;
  }
  if ( Handle )
    NtClose_0(Handle);
  return (unsigned int)VolumeHandle;
}
