/*
 * XREFs of EtwpCreateEtwThread @ 0x1800543E0
 * Callers:
 *     EtwpStartUmLogger @ 0x18005395C (EtwpStartUmLogger.c)
 * Callees:
 *     RtlCreateUserThread @ 0x180054450 (RtlCreateUserThread.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwResumeThread @ 0x1800A6E60 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x1800A6E80 (NtTerminateThread.c)
 */

HANDLE __fastcall EtwpCreateEtwThread(NTSTATUS (__cdecl *a1)(PVOID), void *a2)
{
  HANDLE v2; // rbx
  int v3; // eax
  HANDLE ThreadHandle; // [rsp+70h] [rbp+18h] BYREF

  if ( RtlCreateUserThread((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 1u, 0, 0LL, 0LL, a1, a2, &ThreadHandle, 0LL) < 0 )
    return 0LL;
  v2 = ThreadHandle;
  v3 = ZwResumeThread(ThreadHandle, 0LL);
  if ( v3 < 0 )
  {
    NtTerminateThread(v2, v3);
    NtClose(v2);
    return 0LL;
  }
  return v2;
}
