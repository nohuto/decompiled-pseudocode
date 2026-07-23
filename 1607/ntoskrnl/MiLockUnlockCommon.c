/*
 * XREFs of MiLockUnlockCommon @ 0x1404D6AD4
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1400B8170 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MiLockUnlockCommon(
        HANDLE Handle,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        PVOID *a7)
{
  char v7; // si
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-20h]
  unsigned __int64 v17; // [rsp+60h] [rbp-18h]

  v7 = a4;
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 0 )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  v16 = *a2;
  v12 = v16;
  v13 = *a3;
  v17 = *a3;
  if ( v16 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFEFFFFLL - v16 < v13 || !v13 )
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
