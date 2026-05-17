/*
 * XREFs of RtlInitializeResource @ 0x18002B050
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002B140 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x18002B208 (RtlLogStackBackTraceEx.c)
 *     RtlpAllocateDebugInfo @ 0x18002B240 (RtlpAllocateDebugInfo.c)
 *     RtlInitializeCriticalSectionEx @ 0x18002B290 (RtlInitializeCriticalSectionEx.c)
 *     RtlpFreeDebugInfo @ 0x1800524D8 (RtlpFreeDebugInfo.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtCreateSemaphore @ 0x1800A7A90 (NtCreateSemaphore.c)
 */

_WORD *__fastcall RtlInitializeResource(__int64 a1)
{
  __int64 DebugInfo; // rax
  __int64 v3; // rdi
  int v4; // eax
  int v5; // esi
  int v6; // esi
  HANDLE v7; // rax
  _WORD *result; // rax
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  DebugInfo = RtlpAllocateDebugInfo();
  v3 = DebugInfo;
  if ( !DebugInfo )
    RtlRaiseStatus(3221225495LL);
  *(_DWORD *)(DebugInfo + 36) = 0;
  v4 = RtlLogStackBackTraceEx(1LL);
  *(_WORD *)(v3 + 2) = v4;
  *(_WORD *)(v3 + 44) = HIWORD(v4);
  v5 = NtCreateSemaphore(&Handle, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v5 < 0 )
  {
    RtlpFreeDebugInfo(v3);
    RtlRaiseStatus((unsigned int)v5);
  }
  v6 = NtCreateSemaphore(&v10, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    NtClose(Handle);
    RtlpFreeDebugInfo(v3);
    RtlRaiseStatus((unsigned int)v6);
  }
  v7 = Handle;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 40) = v7;
  *(_QWORD *)(a1 + 56) = v10;
  *(_QWORD *)(a1 + 88) = v3;
  RtlInitializeCriticalSectionEx(a1, 0LL, 0x8000000LL);
  RtlpAddDebugInfoToCriticalSection(a1);
  result = *(_WORD **)a1;
  if ( *(_QWORD *)a1 != -1LL )
    *result = 1;
  return result;
}
