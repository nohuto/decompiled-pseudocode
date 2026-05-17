/*
 * XREFs of EtwpFreeLoggerContext @ 0x180051E5C
 * Callers:
 *     EtwpLogger @ 0x180052AF0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x180053400 (EtwpStopUmLogger.c)
 *     EtwpStartUmLogger @ 0x18005396C (EtwpStartUmLogger.c)
 * Callees:
 *     EtwpShutdownCompression @ 0x180003274 (EtwpShutdownCompression.c)
 *     RtlFreeAnsiString @ 0x1800427E0 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     EtwpFreeStreamIndexMap @ 0x180052020 (EtwpFreeStreamIndexMap.c)
 *     RtlDeleteCriticalSection @ 0x1800523B0 (RtlDeleteCriticalSection.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1800A6AA0 (ZwDelayExecution.c)
 */

__int64 __fastcall EtwpFreeLoggerContext(unsigned __int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbp
  _QWORD *v10; // r14
  unsigned __int64 v11; // r8
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
  if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
    EtwpShutdownCompression(a1);
  if ( *(_QWORD *)(a1 + 424) )
  {
    v15 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 424, &v15, 0x8000LL);
  }
  NtClose(*(HANDLE *)(a1 + 136));
  NtClose(*(HANDLE *)(a1 + 128));
  RtlDeleteCriticalSection((void *)(a1 + 88));
  if ( *(_QWORD *)(a1 + 160) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 152));
  if ( *(_QWORD *)(a1 + 176) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 168));
  if ( *(_QWORD *)(a1 + 192) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 184));
  v3 = *(_QWORD **)(a1 + 464);
  while ( v3 != (_QWORD *)(a1 + 464) )
  {
    v8 = (unsigned __int64)v3;
    v3 = (_QWORD *)*v3;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  }
  v4 = *(_QWORD **)(a1 + 480);
  while ( v4 != (_QWORD *)(a1 + 480) )
  {
    v9 = (unsigned __int64)v4;
    v10 = (_QWORD *)v4[3];
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v10 == v4 + 3 )
        break;
      v11 = (unsigned __int64)v10;
      v10 = (_QWORD *)*v10;
      RtlFreeHeap((__int64)ProcessHeap, 0, v11);
    }
    v4 = (_QWORD *)*v4;
    RtlFreeHeap((__int64)ProcessHeap, 0, v9);
  }
  v5 = *(_QWORD *)(a1 + 512);
  if ( v5 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  v6 = *(_QWORD *)(a1 + 520);
  if ( v6 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  EtwpFreeStreamIndexMap(a1);
  *(_QWORD *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)) = 1LL;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
