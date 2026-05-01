/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x1800555C0
 * Callers:
 *     <none>
 * Callees:
 *     NtClose_0 @ 0x18002B7AE (NtClose_0.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x1800554F8 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     RtlpGetVolumeHandle @ 0x180055630 (RtlpGetVolumeHandle.c)
 */

__int64 RtlpDiskSpeedInitialize()
{
  unsigned int v0; // ebx
  NTSTATUS VolumeHandle; // edi
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  v0 = 0;
  Handle[0] = 0LL;
  VolumeHandle = RtlpGetVolumeHandle(2147352624LL, Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy(Handle[0], &v4);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v4;
    }
  }
  if ( Handle[0] )
    NtClose_0(Handle[0]);
  LOBYTE(v0) = VolumeHandle >= 0;
  return v0;
}
