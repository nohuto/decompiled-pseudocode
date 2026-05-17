/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x180007900
 * Callers:
 *     LdrpInitParallelLoadingSupport @ 0x18000489C (LdrpInitParallelLoadingSupport.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlInitializeResource @ 0x1800076C0 (RtlInitializeResource.c)
 *     RtlpInitMuiCriticalSection @ 0x18001CD58 (RtlpInitMuiCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x18003823C (LdrpInitMuiCrits.c)
 *     EtwpInitLoggerContext @ 0x1800769B4 (EtwpInitLoggerContext.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800C4CAC (AVrfInitializeVerifier.c)
 *     RtlInitializeHeapManager @ 0x1800D8010 (RtlInitializeHeapManager.c)
 *     RtlTraceDatabaseCreate @ 0x1800E5A40 (RtlTraceDatabaseCreate.c)
 *     BasepInitializeFindFileHandle @ 0x1800F8F20 (BasepInitializeFindFileHandle.c)
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800077B0 (RtlpAddDebugInfoToCriticalSection.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionEx(__int64 a1, int a2, int a3)
{
  char v5; // cl
  _BYTE v6[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v7; // [rsp+26h] [rbp-42h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]

  if ( (a3 & 0xE0000000) != 0 || (a3 & 0x11000000) == 0x11000000 )
    return 3221225713LL;
  if ( (a2 & 0xFF000000) != 0 )
    return 3221225712LL;
  if ( (a3 & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 8) = -1;
    v5 = 1;
    *(_DWORD *)(a1 + 12) = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    {
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    else if ( (a3 & 0x2000000) == 0 && a2 )
    {
      *(_QWORD *)(a1 + 32) = a2 & 0xFFFFFF;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = 33556432LL;
    }
    *(_QWORD *)(a1 + 32) |= a3 & 0x9000000;
    if ( (a3 & 0x10000000) == 0 && !RtlpForceCSDebugInfoCreation )
      v5 = 0;
    *(_QWORD *)a1 = -1LL;
    if ( v5 )
    {
      RtlpAddDebugInfoToCriticalSection(a1);
      if ( *(_QWORD *)a1 == -1LL )
        *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
    }
    if ( MEMORY[0x7FFE0382] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 2) != 0 )
      {
        v7 = 5923;
        v8 = *(_QWORD *)(a1 + 32);
        v9 = a1;
        NtTraceEvent(MEMORY[0x7FFE0382], 66562LL, 16LL, v6);
      }
    }
  }
  return 0LL;
}
