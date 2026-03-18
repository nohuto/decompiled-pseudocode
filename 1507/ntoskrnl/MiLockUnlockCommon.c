/*
 * XREFs of MiLockUnlockCommon @ 0x1404B1E84
 * Callers:
 *     NtUnlockVirtualMemory @ 0x14007ECE0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MiLockUnlockCommon(
        HANDLE Handle,
        _QWORD *a2,
        char **a3,
        int a4,
        unsigned __int64 *a5,
        char **a6,
        PVOID *a7)
{
  char v7; // si
  KPROCESSOR_MODE PreviousMode; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rdi
  char *v13; // rbx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-20h]
  char *v17; // [rsp+60h] [rbp-18h]

  v7 = a4;
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 0 )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v10 = (_QWORD *)MmUserProbeAddress;
    *v10 = *v10;
    v11 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v11 = (_QWORD *)MmUserProbeAddress;
    *v11 = *v11;
  }
  v16 = *a2;
  v12 = v16;
  v13 = *a3;
  v17 = *a3;
  if ( v16 > (unsigned __int64)MmHighestUserAddress || (char *)MmHighestUserAddress - v16 < v13 || !v13 )
    return -1073741811;
  result = ObReferenceObjectByHandleWithTag(
             Handle,
             8u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x6D566D4Du,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    if ( (v7 & 2) == 0 || SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    {
      *a5 = v12;
      *a6 = v13;
      *a7 = Object;
      return 0;
    }
    else
    {
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      return -1073741727;
    }
  }
  return result;
}
