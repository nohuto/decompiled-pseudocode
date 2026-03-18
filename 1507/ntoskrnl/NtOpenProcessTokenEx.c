/*
 * XREFs of NtOpenProcessTokenEx @ 0x140434930
 * Callers:
 *     NtOpenProcessToken @ 0x14043557C (NtOpenProcessToken.c)
 *     RtlpSysVolTakeOwnership @ 0x1406CC854 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     PsOpenTokenOfProcess @ 0x140434A10 (PsOpenTokenOfProcess.c)
 */

NTSTATUS __stdcall NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  KPROCESSOR_MODE AccessMode; // bl
  ULONG v7; // edi
  _QWORD *v8; // rdx
  NTSTATUS result; // eax
  int v10; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-10h] BYREF

  AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( AccessMode )
    v7 = HandleAttributes & 0xDF2;
  else
    v7 = HandleAttributes & 0x10FF2;
  if ( AccessMode )
  {
    v8 = TokenHandle;
    if ( (unsigned __int64)TokenHandle >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = *v8;
  }
  result = PsOpenTokenOfProcess(ProcessHandle, &Object);
  if ( result >= 0 )
  {
    v10 = ObOpenObjectByPointer(Object, v7, 0LL, DesiredAccess, (POBJECT_TYPE)SeTokenObjectType, AccessMode, &Handle);
    ObfDereferenceObject(Object);
    if ( v10 >= 0 )
      *TokenHandle = Handle;
    return v10;
  }
  return result;
}
