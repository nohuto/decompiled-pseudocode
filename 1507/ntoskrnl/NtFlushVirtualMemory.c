/*
 * XREFs of NtFlushVirtualMemory @ 0x140531C0C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 */

NTSTATUS __stdcall NtFlushVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        PIO_STATUS_BLOCK IoStatus)
{
  KPROCESSOR_MODE PreviousMode; // r9
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  _DWORD *v11; // rcx
  _BYTE *v12; // rcx
  char *v13; // rdx
  NTSTATUS result; // eax
  NTSTATUS v15; // [rsp+40h] [rbp-38h]
  ULONG_PTR v16; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  __int128 v19; // [rsp+60h] [rbp-18h] BYREF

  v19 = 0uLL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = BaseAddress;
    if ( (unsigned __int64)BaseAddress >= MmUserProbeAddress )
      v9 = (_QWORD *)MmUserProbeAddress;
    *v9 = *v9;
    v10 = RegionSize;
    if ( (unsigned __int64)RegionSize >= MmUserProbeAddress )
      v10 = (_QWORD *)MmUserProbeAddress;
    *v10 = *v10;
    v11 = &IoStatus->0;
    if ( (unsigned __int64)IoStatus >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    *v11 = *v11;
    v12 = *BaseAddress;
    v17 = (unsigned __int64)*BaseAddress;
    v13 = (char *)*RegionSize;
    v16 = *RegionSize;
  }
  else
  {
    v12 = *BaseAddress;
    v17 = (unsigned __int64)*BaseAddress;
    v13 = (char *)*RegionSize;
    v16 = *RegionSize;
  }
  if ( v12 > MmHighestUserAddress || (_BYTE *)MmHighestUserAddress - v12 < (unsigned __int64)v13 )
    return -1073741584;
  result = ObReferenceObjectByHandleWithTag(
             ProcessHandle,
             8u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x6C466D4Du,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v15 = MmFlushVirtualMemory(Object, &v17, &v16, &v19);
    ObfDereferenceObjectWithTag(Object, 0x6C466D4Du);
    *RegionSize = v16;
    *BaseAddress = (PVOID)(v17 & 0xFFFFFFFFFFFFF000uLL);
    *(_OWORD *)&IoStatus->Status = v19;
    return v15;
  }
  return result;
}
