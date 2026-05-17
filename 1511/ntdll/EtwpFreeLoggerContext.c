/*
 * XREFs of EtwpFreeLoggerContext @ 0x18005BB24
 * Callers:
 *     EtwpStartUmLogger @ 0x180044BE8 (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x18005BCF0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x18005C7A8 (EtwpStopUmLogger.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlDeleteCriticalSection @ 0x180059D20 (RtlDeleteCriticalSection.c)
 *     EtwpFreeStreamIndexMap @ 0x18005BCC4 (EtwpFreeStreamIndexMap.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1800A5740 (ZwDelayExecution.c)
 *     EtwpShutdownCompression @ 0x1800F4C40 (EtwpShutdownCompression.c)
 */

__int64 __fastcall EtwpFreeLoggerContext(unsigned __int64 a1)
{
  __int64 v2; // rdx
  char *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbp
  _QWORD *v13; // r14
  unsigned __int64 v14; // r8
  void *ProcessHeap; // rcx
  int v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+54h] [rbp+Ch]
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v17 = -1;
  v2 = 2LL * *(unsigned int *)(a1 + 20);
  v16 = -3000000;
  if ( *(int *)(EtwpLoggerArray + 8 * v2 + 8) > 1 )
  {
    do
      ZwDelayExecution(0LL, &v16);
    while ( *(int *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8) > 1 );
  }
  if ( (*(_DWORD *)(a1 + 332) & 0x4000000) != 0 )
    EtwpShutdownCompression(a1);
  if ( *(_QWORD *)(a1 + 432) )
  {
    v18 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 432, &v18, 0x8000LL);
  }
  NtClose(*(HANDLE *)(a1 + 136));
  NtClose(*(HANDLE *)(a1 + 128));
  RtlDeleteCriticalSection((__int64 *)(a1 + 88), v3, v4, v5);
  if ( *(_QWORD *)(a1 + 160) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 152));
  if ( *(_QWORD *)(a1 + 176) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 168));
  if ( *(_QWORD *)(a1 + 192) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 184));
  v6 = *(_QWORD **)(a1 + 472);
  while ( v6 != (_QWORD *)(a1 + 472) )
  {
    v11 = (unsigned __int64)v6;
    v6 = (_QWORD *)*v6;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
  }
  v7 = *(_QWORD **)(a1 + 488);
  while ( v7 != (_QWORD *)(a1 + 488) )
  {
    v12 = (unsigned __int64)v7;
    v13 = (_QWORD *)v7[3];
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v13 == v7 + 3 )
        break;
      v14 = (unsigned __int64)v13;
      v13 = (_QWORD *)*v13;
      RtlFreeHeap((__int64)ProcessHeap, 0, v14);
    }
    v7 = (_QWORD *)*v7;
    RtlFreeHeap((__int64)ProcessHeap, 0, v12);
  }
  v8 = *(_QWORD *)(a1 + 520);
  if ( v8 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  v9 = *(_QWORD *)(a1 + 528);
  if ( v9 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  EtwpFreeStreamIndexMap(a1);
  *(_QWORD *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)) = 1LL;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
