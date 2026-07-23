/*
 * XREFs of RtlInitializeResource @ 0x18002B040
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002B130 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x18002B1F8 (RtlLogStackBackTraceEx.c)
 *     RtlpAllocateDebugInfo @ 0x18002B230 (RtlpAllocateDebugInfo.c)
 *     RtlInitializeCriticalSectionEx @ 0x18002B280 (RtlInitializeCriticalSectionEx.c)
 *     RtlpFreeDebugInfo @ 0x1800524C8 (RtlpFreeDebugInfo.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtCreateSemaphore @ 0x1800A7A90 (NtCreateSemaphore.c)
 */

void __cdecl RtlInitializeResource(PRTL_RESOURCE Resource)
{
  __int64 DebugInfo; // rax
  _RTL_CRITICAL_SECTION_DEBUG *v3; // rdi
  int v4; // eax
  int v5; // esi
  int v6; // esi
  HANDLE v7; // rax
  HANDLE SemaphoreHandle; // [rsp+58h] [rbp+10h] BYREF
  HANDLE v9; // [rsp+60h] [rbp+18h] BYREF

  DebugInfo = RtlpAllocateDebugInfo();
  v3 = (_RTL_CRITICAL_SECTION_DEBUG *)DebugInfo;
  if ( !DebugInfo )
    RtlRaiseStatus(-1073741801);
  *(_DWORD *)(DebugInfo + 36) = 0;
  v4 = RtlLogStackBackTraceEx(1LL);
  v3->CreatorBackTraceIndex = v4;
  v3->CreatorBackTraceIndexHigh = HIWORD(v4);
  v5 = NtCreateSemaphore(&SemaphoreHandle, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v5 < 0 )
  {
    RtlpFreeDebugInfo(v3);
    RtlRaiseStatus(v5);
  }
  v6 = NtCreateSemaphore(&v9, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    NtClose(SemaphoreHandle);
    RtlpFreeDebugInfo(v3);
    RtlRaiseStatus(v6);
  }
  v7 = SemaphoreHandle;
  Resource->NumberOfWaitingShared = 0;
  Resource->NumberOfWaitingExclusive = 0;
  Resource->NumberOfActive = 0;
  Resource->ExclusiveOwnerThread = 0LL;
  Resource->Flags = 0;
  Resource->SharedSemaphore = v7;
  Resource->ExclusiveSemaphore = v9;
  Resource->DebugInfo = v3;
  RtlInitializeCriticalSectionEx(&Resource->CriticalSection, 0, 0x8000000u);
  RtlpAddDebugInfoToCriticalSection(Resource);
  if ( Resource->CriticalSection.DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
    Resource->CriticalSection.DebugInfo->Type = 1;
}
