/*
 * XREFs of IopReferenceFileObject @ 0x1400CC3D8
 * Callers:
 *     NtQueryEaFile @ 0x14048E36C (NtQueryEaFile.c)
 *     NtLockFile @ 0x14048F14C (NtLockFile.c)
 *     NtFlushBuffersFileEx @ 0x14048F78C (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFile @ 0x14048FA08 (NtNotifyChangeDirectoryFile.c)
 *     NtCancelIoFileEx @ 0x14048FDE0 (NtCancelIoFileEx.c)
 *     NtWriteFileGather @ 0x140490124 (NtWriteFileGather.c)
 *     NtCancelIoFile @ 0x140490800 (NtCancelIoFile.c)
 *     NtReadFileScatter @ 0x1404909FC (NtReadFileScatter.c)
 *     NtSetVolumeInformationFile @ 0x1404EA818 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1405F8964 (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x1405F93B0 (IopValidateJunctionTarget.c)
 *     NtSetEaFile @ 0x1405FB5AC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1405FBBAC (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     IopFileObjectRevoked @ 0x14008E37C (IopFileObjectRevoked.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopReferenceFileObject(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        POBJECT_HANDLE_INFORMATION a5)
{
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  PVOID v10; // [rsp+58h] [rbp+20h] BYREF

  v6 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)IoFileObjectType, a3, &v10, a5);
  v7 = (__int64)v10;
  v8 = v6;
  *a4 = v10;
  if ( v6 >= 0 && IopFileObjectRevoked(v7) )
  {
    ObfDereferenceObjectWithTag(*a4, 0x746C6644u);
    return (unsigned int)-1073739504;
  }
  return v8;
}
