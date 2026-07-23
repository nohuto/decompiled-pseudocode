/*
 * XREFs of RtlRemoteCall @ 0x1800F06A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtWriteVirtualMemory @ 0x1800A6B60 (NtWriteVirtualMemory.c)
 *     ZwResumeThread @ 0x1800A6E60 (ZwResumeThread.c)
 *     ZwGetContextThread @ 0x1800A80D0 (ZwGetContextThread.c)
 *     NtSetContextThread @ 0x1800A9310 (NtSetContextThread.c)
 *     NtSuspendThread @ 0x1800A9930 (NtSuspendThread.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

NTSTATUS __cdecl RtlRemoteCall(
        HANDLE ProcessHandle,
        HANDLE ThreadHandle,
        PVOID CallSite,
        ULONG ArgumentCount,
        PULONG_PTR Arguments,
        BOOLEAN PassContext,
        BOOLEAN AlreadySuspended)
{
  __int64 v8; // rsi
  NTSTATUS result; // eax
  int ContextThread; // r14d
  DWORD64 Rax; // rax
  DWORD64 v14; // r14
  int v15; // r15d
  DWORD64 *p_R12; // rcx
  NTSTATUS v17; // esi
  struct _CONTEXT ThreadContext; // [rsp+30h] [rbp-D0h] BYREF

  v8 = ArgumentCount;
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    return -1073741822;
  if ( ArgumentCount > 4 )
    return -1073741811;
  if ( AlreadySuspended || (result = NtSuspendThread(ThreadHandle, 0LL), result >= 0) )
  {
    ThreadContext.ContextFlags = 1048587;
    ContextThread = ZwGetContextThread(ThreadHandle, &ThreadContext);
    if ( ContextThread < 0 )
    {
      if ( !AlreadySuspended )
        ZwResumeThread(ThreadHandle, 0LL);
      return ContextThread;
    }
    Rax = ThreadContext.Rax;
    if ( AlreadySuspended )
      Rax = 257LL;
    v14 = ThreadContext.Rsp - 1232;
    ThreadContext.Rax = Rax;
    v15 = NtWriteVirtualMemory(ProcessHandle, (PVOID)(ThreadContext.Rsp - 1232), &ThreadContext, 0x4D0uLL, 0LL);
    if ( v15 < 0 )
    {
      if ( !AlreadySuspended )
        ZwResumeThread(ThreadHandle, 0LL);
      return v15;
    }
    ThreadContext.Rsp = v14;
    if ( PassContext )
    {
      ThreadContext.R11 = v14;
      if ( (_DWORD)v8 )
      {
        p_R12 = &ThreadContext.R12;
LABEL_22:
        memmove(p_R12, Arguments, 8 * v8);
      }
    }
    else if ( (_DWORD)v8 )
    {
      p_R12 = &ThreadContext.R11;
      goto LABEL_22;
    }
    ThreadContext.Rip = (DWORD64)CallSite;
    v17 = NtSetContextThread(ThreadHandle, &ThreadContext);
    if ( !AlreadySuspended )
      ZwResumeThread(ThreadHandle, 0LL);
    return v17;
  }
  return result;
}
