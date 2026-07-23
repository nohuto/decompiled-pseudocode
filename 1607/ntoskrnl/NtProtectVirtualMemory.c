/*
 * XREFs of NtProtectVirtualMemory @ 0x140432A50
 * Callers:
 *     <none>
 * Callees:
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     EtwTiLogProtectExecVm @ 0x1406A5AE4 (EtwTiLogProtectExecVm.c)
 */

NTSTATUS __stdcall NtProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        SIZE_T *NumberOfBytesToProtect,
        ULONG NewAccessProtection,
        PULONG OldAccessProtection)
{
  unsigned __int64 *v6; // r8
  unsigned __int64 v7; // r9
  ULONG_PTR v8; // r10
  int ProtectionMask; // r15d
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  unsigned __int8 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  PVOID v17; // rcx
  unsigned __int64 v18; // r14
  int v19; // esi
  PVOID v20; // rbx
  NTSTATUS v21; // edi
  unsigned int v22; // esi
  unsigned int v24; // [rsp+44h] [rbp-A4h] BYREF
  PVOID v25; // [rsp+48h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-98h] BYREF
  SIZE_T v27; // [rsp+58h] [rbp-90h] BYREF
  SIZE_T *v28; // [rsp+60h] [rbp-88h]
  PULONG v29; // [rsp+68h] [rbp-80h]
  _BYTE v30[48]; // [rsp+70h] [rbp-78h] BYREF

  v28 = NumberOfBytesToProtect;
  v29 = OldAccessProtection;
  ProtectionMask = MiMakeProtectionMask(NewAccessProtection & 0x1FFFFFFF);
  if ( ProtectionMask == -1 )
    return -1073741755;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v13 = CurrentThread->gap0[10];
  if ( v13 )
  {
    v14 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = (__int64)v6;
    if ( (unsigned __int64)v6 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = v7;
    if ( v7 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v17 = *BaseAddress;
    v25 = *BaseAddress;
    v18 = *v6;
    v27 = *v6;
  }
  else
  {
    v18 = *v6;
    v27 = *v6;
    v17 = *BaseAddress;
    v25 = *BaseAddress;
  }
  if ( (unsigned __int64)v17 > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFEFFFFLL - (__int64)v17 < v18 || !v18 )
    return -1073741583;
  v19 = 0;
  result = ObpReferenceObjectByHandleWithTag(v8, 1984982349, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    v20 = Object;
    if ( Process != Object )
    {
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v30);
      v19 = 1;
    }
    v21 = MiProtectVirtualMemory(
            (__int64)Process,
            (__int64)v20,
            (unsigned __int64 *)&v25,
            (__int64 *)&v27,
            NewAccessProtection,
            &v24);
    LODWORD(Object) = v21;
    if ( v19 )
      KiUnstackDetachProcess((struct _KTHREAD *)v30, 0);
    v22 = v24;
    if ( v21 >= 0 && (((unsigned __int8)MiMakeProtectionMask(v24) | (unsigned __int8)ProtectionMask) & 2) != 0 )
      EtwTiLogProtectExecVm((_DWORD)v20, v13, (_DWORD)v25, v18, NewAccessProtection, v22);
    ObfDereferenceObjectWithTag(v20, 0x76506D4Du);
    *v28 = v27;
    *BaseAddress = v25;
    *v29 = v22;
    return v21;
  }
  return result;
}
