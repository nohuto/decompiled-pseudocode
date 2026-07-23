/*
 * XREFs of NtCreateThreadEx @ 0x14044528C
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspDeleteCreateProcessContext @ 0x1404454E0 (PspDeleteCreateProcessContext.c)
 *     PspCreateThread @ 0x14044564C (PspCreateThread.c)
 *     PspBuildCreateProcessContext @ 0x14044629C (PspBuildCreateProcessContext.c)
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
  PHANDLE v14; // rbx
  __int64 v15; // rdx
  NTSTATUS result; // eax
  NTSTATUS Thread; // ebx
  _BYTE v18[8]; // [rsp+70h] [rbp-708h] BYREF
  SIZE_T v19; // [rsp+78h] [rbp-700h]
  SIZE_T v20; // [rsp+80h] [rbp-6F8h]
  SIZE_T v21; // [rsp+88h] [rbp-6F0h]
  _QWORD v22[8]; // [rsp+90h] [rbp-6E8h] BYREF
  _QWORD v23[50]; // [rsp+D0h] [rbp-6A8h] BYREF
  _QWORD v24[154]; // [rsp+260h] [rbp-518h] BYREF

  v14 = ThreadHandle;
  memset(v22, 0, sizeof(v22));
  memset(v24, 0, sizeof(v24));
  if ( (CreateFlags & 0xFFFFFFE0) != 0 )
    return -1073741579;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (unsigned __int64)ThreadHandle >= MmUserProbeAddress )
      ThreadHandle = (PHANDLE)MmUserProbeAddress;
    *ThreadHandle = *ThreadHandle;
  }
  v18[0] = 0;
  v20 = StackSize;
  v21 = MaximumStackSize;
  v19 = ZeroBits;
  memset(v23, 0, sizeof(v23));
  if ( !AttributeList
    || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(AttributeList, v15, 1LL, v23),
        result >= 0) )
  {
    v24[6] = 0x1F800010000BLL;
    v24[31] = PspUserThreadStart;
    v24[16] = StartRoutine;
    v24[17] = Argument;
    *(_DWORD *)((char *)&v24[7] + 2) = 2818091;
    *(_DWORD *)((char *)&v24[7] + 6) = 2818131;
    WORD1(v24[8]) = 43;
    LOWORD(v24[7]) = 51;
    LOWORD(v24[32]) = 639;
    LODWORD(v24[35]) = 8064;
    Thread = PspCreateThread(
               v14,
               DesiredAccess,
               ObjectAttributes,
               ProcessHandle,
               0LL,
               v23,
               v23[2],
               v24,
               v22,
               CreateFlags,
               StartRoutine,
               Argument,
               v18);
    PspDeleteCreateProcessContext(v23);
    return Thread;
  }
  return result;
}
