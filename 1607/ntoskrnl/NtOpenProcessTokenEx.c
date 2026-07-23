/*
 * XREFs of NtOpenProcessTokenEx @ 0x14041F100
 * Callers:
 *     NtOpenProcessToken @ 0x1404B5E6C (NtOpenProcessToken.c)
 *     RtlpSysVolTakeOwnership @ 0x140688E7C (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14000F2E0 (ObFastReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  KPROCESSOR_MODE AccessMode; // bl
  ULONG v6; // r12d
  __int64 v7; // rdx
  NTSTATUS result; // eax
  PVOID v9; // r15
  _QWORD *v10; // r13
  void *v11; // rsi
  int v12; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF

  AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( AccessMode )
    v6 = HandleAttributes & 0x1DF2;
  else
    v6 = HandleAttributes & 0x11FF2;
  if ( AccessMode )
  {
    v7 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 1699967824, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    v9 = Object;
    v10 = (char *)Object + 856;
    v11 = (void *)ObFastReferenceObject((signed __int64 *)Object + 107);
    if ( !v11 )
    {
      CurrentThread = KeGetCurrentThread();
      v9 = Object;
      PspLockProcessShared((__int64)Object, (__int64)CurrentThread);
      v11 = (void *)ObFastReferenceObjectLocked(v10);
      PspUnlockProcessShared((__int64)v9, (__int64)CurrentThread);
    }
    ObfDereferenceObjectWithTag(v9, 0x65537350u);
    v12 = ObOpenObjectByPointer(v11, v6, 0LL, DesiredAccess, (POBJECT_TYPE)SeTokenObjectType, AccessMode, &Handle);
    ObfDereferenceObject(v11);
    if ( v12 >= 0 )
      *TokenHandle = Handle;
    return v12;
  }
  return result;
}
