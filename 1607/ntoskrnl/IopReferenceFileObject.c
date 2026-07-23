/*
 * XREFs of IopReferenceFileObject @ 0x14007B6B0
 * Callers:
 *     IopValidateJunctionTarget @ 0x1403E2B58 (IopValidateJunctionTarget.c)
 *     NtLockFile @ 0x140469D2C (NtLockFile.c)
 *     NtQueryEaFile @ 0x14046A59C (NtQueryEaFile.c)
 *     NtWriteFileGather @ 0x1404A917C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404A9848 (NtReadFileScatter.c)
 *     NtFlushBuffersFileEx @ 0x1404AF1B0 (NtFlushBuffersFileEx.c)
 *     NtCancelIoFile @ 0x1404B1FE8 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1404B2164 (NtCancelIoFileEx.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404B87E8 (NtNotifyChangeDirectoryFile.c)
 *     NtSetVolumeInformationFile @ 0x140529AB4 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406228A0 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140625290 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140625894 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IopFileObjectRevoked @ 0x1400CF590 (IopFileObjectRevoked.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopReferenceFileObject(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        POBJECT_HANDLE_INFORMATION a5)
{
  NTSTATUS v6; // ebx
  PVOID v8; // [rsp+58h] [rbp+20h] BYREF

  v6 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)IoFileObjectType, a3, &v8, a5);
  *a4 = v8;
  if ( v6 >= 0 && (unsigned __int8)IopFileObjectRevoked() )
  {
    ObfDereferenceObjectWithTag(*a4, 0x746C6644u);
    return (unsigned int)-1073739504;
  }
  return (unsigned int)v6;
}
