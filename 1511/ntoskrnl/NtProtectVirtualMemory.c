/*
 * XREFs of NtProtectVirtualMemory @ 0x140418D90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x140062870 (MiMakeProtectionMask.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 */

NTSTATUS __stdcall NtProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        SIZE_T *NumberOfBytesToProtect,
        ULONG NewAccessProtection,
        PULONG OldAccessProtection)
{
  char **v8; // r8
  void *v9; // r10
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  _DWORD *v15; // rcx
  _BYTE *v16; // rdx
  char *v17; // rcx
  int v18; // r15d
  NTSTATUS result; // eax
  PVOID v20; // rbx
  NTSTATUS v21; // edi
  SIZE_T v22; // [rsp+40h] [rbp-98h] BYREF
  ULONG v23; // [rsp+48h] [rbp-90h] BYREF
  PVOID v24; // [rsp+50h] [rbp-88h] BYREF
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v26; // [rsp+60h] [rbp-78h] BYREF

  if ( (unsigned int)MiMakeProtectionMask(NewAccessProtection & 0x1FFFFFFF) == -1 )
    return -1073741755;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v13 = BaseAddress;
    if ( (unsigned __int64)BaseAddress >= MmUserProbeAddress )
      v13 = (_QWORD *)MmUserProbeAddress;
    *v13 = *v13;
    v14 = v8;
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v14 = (_QWORD *)MmUserProbeAddress;
    *v14 = *v14;
    v15 = OldAccessProtection;
    if ( (unsigned __int64)OldAccessProtection >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = *v15;
    v16 = *BaseAddress;
    v24 = *BaseAddress;
    v17 = *v8;
    v22 = (SIZE_T)*v8;
  }
  else
  {
    v17 = *v8;
    v22 = (SIZE_T)*v8;
    v16 = *BaseAddress;
    v24 = *BaseAddress;
  }
  if ( v16 > MmHighestUserAddress )
    return -1073741584;
  if ( (_BYTE *)MmHighestUserAddress - v16 < (unsigned __int64)v17 || !v17 )
    return -1073741583;
  v18 = 0;
  result = ObReferenceObjectByHandleWithTag(
             v9,
             8u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x76506D4Du,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v20 = Object;
    if ( Process != Object )
    {
      KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)&v26);
      v18 = 1;
    }
    v21 = MiProtectVirtualMemory(
            (_DWORD)Process,
            (_DWORD)v20,
            (unsigned int)&v24,
            (unsigned int)&v22,
            NewAccessProtection,
            (__int64)&v23);
    LODWORD(Object) = v21;
    if ( v18 )
      KiUnstackDetachProcess(&v26, 0LL);
    ObfDereferenceObjectWithTag(v20, 0x76506D4Du);
    *NumberOfBytesToProtect = v22;
    *BaseAddress = v24;
    *OldAccessProtection = v23;
    return v21;
  }
  return result;
}
