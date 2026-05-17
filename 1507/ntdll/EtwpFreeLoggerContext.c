/*
 * XREFs of EtwpFreeLoggerContext @ 0x1800094E8
 * Callers:
 *     EtwpLogger @ 0x1800096B0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x18000A520 (EtwpStopUmLogger.c)
 *     EtwpStartUmLogger @ 0x1800761E0 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlDeleteCriticalSection @ 0x1800081B0 (RtlDeleteCriticalSection.c)
 *     EtwpFreeStreamIndexMap @ 0x180009688 (EtwpFreeStreamIndexMap.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x180093C40 (ZwDelayExecution.c)
 *     EtwpShutdownCompression @ 0x1800F5244 (EtwpShutdownCompression.c)
 */

__int64 __fastcall EtwpFreeLoggerContext(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r8
  _QWORD *v8; // r8
  _QWORD *v9; // rbp
  _QWORD *v10; // r14
  _QWORD *v11; // r8
  void *ProcessHeap; // rcx
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+54h] [rbp+Ch]
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v14 = -1;
  v2 = 2LL * *(unsigned int *)(a1 + 20);
  v13 = -3000000;
  if ( *(int *)(EtwpLoggerArray + 8 * v2 + 8) > 1 )
  {
    do
      ZwDelayExecution(0LL, &v13);
    while ( *(int *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8) > 1 );
  }
  if ( (*(_DWORD *)(a1 + 332) & 0x4000000) != 0 )
    EtwpShutdownCompression(a1);
  if ( *(_QWORD *)(a1 + 432) )
  {
    v15 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 432, &v15, 0x8000LL);
  }
  NtClose(*(HANDLE *)(a1 + 136));
  NtClose(*(HANDLE *)(a1 + 128));
  RtlDeleteCriticalSection((__int64 *)(a1 + 88));
  if ( *(_QWORD *)(a1 + 160) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 152));
  if ( *(_QWORD *)(a1 + 176) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 168));
  if ( *(_QWORD *)(a1 + 192) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 184));
  v3 = *(_QWORD **)(a1 + 472);
  while ( v3 != (_QWORD *)(a1 + 472) )
  {
    v8 = v3;
    v3 = (_QWORD *)*v3;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8);
  }
  v4 = *(_QWORD **)(a1 + 488);
  while ( v4 != (_QWORD *)(a1 + 488) )
  {
    v9 = v4;
    v10 = (_QWORD *)v4[3];
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v10 == v4 + 3 )
        break;
      v11 = v10;
      v10 = (_QWORD *)*v10;
      RtlFreeHeap(ProcessHeap, 0LL, v11);
    }
    v4 = (_QWORD *)*v4;
    RtlFreeHeap(ProcessHeap, 0LL, v9);
  }
  v5 = *(_QWORD *)(a1 + 520);
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
  v6 = *(_QWORD *)(a1 + 528);
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v6);
  EtwpFreeStreamIndexMap(a1);
  *(_QWORD *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)) = 1LL;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
