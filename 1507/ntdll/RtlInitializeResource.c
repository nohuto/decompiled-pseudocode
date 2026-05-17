/*
 * XREFs of RtlInitializeResource @ 0x1800076C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800077B0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x180007878 (RtlLogStackBackTraceEx.c)
 *     RtlpAllocateDebugInfo @ 0x1800078B0 (RtlpAllocateDebugInfo.c)
 *     RtlInitializeCriticalSectionEx @ 0x180007900 (RtlInitializeCriticalSectionEx.c)
 *     RtlpFreeDebugInfo @ 0x1800082D8 (RtlpFreeDebugInfo.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtCreateSemaphore @ 0x180094410 (NtCreateSemaphore.c)
 */

_WORD *__fastcall RtlInitializeResource(__int64 a1)
{
  __int64 DebugInfo; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  int v5; // eax
  int v6; // esi
  int v7; // esi
  HANDLE v8; // rax
  _WORD *result; // rax
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  DebugInfo = RtlpAllocateDebugInfo();
  v4 = DebugInfo;
  if ( !DebugInfo )
    RtlRaiseStatus(3221225495LL);
  *(_DWORD *)(DebugInfo + 36) = 0;
  v5 = RtlLogStackBackTraceEx(1LL, v3);
  *(_WORD *)(v4 + 2) = v5;
  *(_WORD *)(v4 + 44) = HIWORD(v5);
  v6 = NtCreateSemaphore(&Handle, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    RtlpFreeDebugInfo(v4);
    RtlRaiseStatus((unsigned int)v6);
  }
  v7 = NtCreateSemaphore(&v11, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    NtClose(Handle);
    RtlpFreeDebugInfo(v4);
    RtlRaiseStatus((unsigned int)v7);
  }
  v8 = Handle;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 40) = v8;
  *(_QWORD *)(a1 + 56) = v11;
  *(_QWORD *)(a1 + 88) = v4;
  RtlInitializeCriticalSectionEx(a1, 0LL, 0x8000000LL);
  RtlpAddDebugInfoToCriticalSection(a1);
  result = *(_WORD **)a1;
  if ( *(_QWORD *)a1 != -1LL )
    *result = 1;
  return result;
}
