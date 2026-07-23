/*
 * XREFs of NtCreateThreadEx @ 0x140450950
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspBuildCreateProcessContext @ 0x14044EA2C (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x140450BA4 (PspDeleteCreateProcessContext.c)
 *     PspCreateThread @ 0x140450CE0 (PspCreateThread.c)
 */

NTSTATUS __cdecl NtCreateThreadEx(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        ULONG CreateFlags,
        SIZE_T ZeroBits,
        SIZE_T StackSize,
        SIZE_T MaximumStackSize,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  unsigned __int64 v15; // rdx
  NTSTATUS result; // eax
  NTSTATUS Thread; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rcx
  _BYTE v22[56]; // [rsp+98h] [rbp-6E0h] BYREF
  _QWORD v23[204]; // [rsp+D0h] [rbp-6A8h] BYREF

  memset(v22, 0, sizeof(v22));
  memset(&v23[50], 0, 1232);
  if ( (CreateFlags & 0xFFFFFFE0) != 0 )
    return -1073741579;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v21 = ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= MmUserProbeAddress )
      v21 = (_QWORD *)MmUserProbeAddress;
    *v21 = *v21;
  }
  memset(v23, 0, 0x188uLL);
  if ( !AttributeList
    || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(AttributeList, v15, 1u, (__int64)v23),
        result >= 0) )
  {
    v23[56] = 0x1F800010000BLL;
    v23[81] = PspUserThreadStart;
    v23[66] = StartRoutine;
    v23[67] = Argument;
    *(_DWORD *)((char *)&v23[57] + 2) = 2818091;
    *(_DWORD *)((char *)&v23[57] + 6) = 2818131;
    WORD1(v23[58]) = 43;
    LOWORD(v23[57]) = 51;
    LOWORD(v23[82]) = 639;
    LODWORD(v23[85]) = 8064;
    Thread = PspCreateThread(ThreadHandle, DesiredAccess, ObjectAttributes, ProcessHandle);
    PspDeleteCreateProcessContext(v23, v18, v19, v20, 0);
    return Thread;
  }
  return result;
}
