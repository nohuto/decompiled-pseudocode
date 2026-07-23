/*
 * XREFs of RtlpWaitOnCriticalSection @ 0x18002FD78
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x18002E940 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x18002F6E0 (RtlpWaitCouldDeadlock.c)
 *     RtlpWaitOnAddress @ 0x18002FFCC (RtlpWaitOnAddress.c)
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180054F00 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18007F950 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     LdrpLogEtwEvent @ 0x1800CA054 (LdrpLogEtwEvent.c)
 *     RtlpDbgPrintCriticalSectionTimeout @ 0x1800CBD98 (RtlpDbgPrintCriticalSectionTimeout.c)
 *     RtlpPossibleDeadlock @ 0x1800CBF58 (RtlpPossibleDeadlock.c)
 */

int __fastcall RtlpWaitOnCriticalSection(__int64 a1, int a2)
{
  struct _TEB *v2; // r14
  unsigned int v4; // r12d
  LARGE_INTEGER *v5; // rsi
  int v6; // r13d
  void *v7; // r14
  int v8; // eax
  struct _PEB *v9; // rax
  int v10; // r8d
  int v11; // r9d
  int v12; // edi
  char v14; // [rsp+30h] [rbp-39h]
  int v15; // [rsp+38h] [rbp-31h] BYREF
  struct _TEB *v16; // [rsp+40h] [rbp-29h]
  _BYTE Fields[6]; // [rsp+48h] [rbp-21h] BYREF
  __int16 v18; // [rsp+4Eh] [rbp-1Bh]
  int v19; // [rsp+68h] [rbp-1h]
  int v20; // [rsp+6Ch] [rbp+3h]
  __int64 v21; // [rsp+70h] [rbp+7h]
  __int64 v22; // [rsp+78h] [rbp+Fh]

  v2 = NtCurrentTeb();
  v15 = a2;
  v14 = 0;
  v16 = v2;
  v4 = 0;
  if ( (_RTL_CRITICAL_SECTION *)a1 == &LdrpLoaderLock )
  {
    v14 = 1;
    v2->WaitingOnLoaderLock = 1;
  }
  if ( RtlpWaitCouldDeadlock() )
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
  v5 = (LARGE_INTEGER *)&RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v5 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( *(_QWORD *)a1 == -1LL && (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    RtlpAddDebugInfoToCriticalSection(a1);
  v6 = 0;
  if ( *(_QWORD *)a1 != -1LL )
    ++*(_DWORD *)(*(_QWORD *)a1 + 36LL);
  v7 = *(void **)(a1 + 24);
  while ( 1 )
  {
    if ( MEMORY[0x7FFE0382] && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v18 = 5922;
      v8 = *(_DWORD *)(a1 + 32) & 0xFFFFFF;
      v22 = a1;
      v20 = v8;
      v19 = *(_DWORD *)(a1 + 8);
      v21 = *(_QWORD *)(a1 + 16);
      NtTraceEvent((HANDLE)MEMORY[0x7FFE0382], 0x20402u, 0x18u, Fields);
    }
    if ( v7 == (void *)-1LL )
    {
      while ( 1 )
      {
        LODWORD(v9) = RtlpWaitOnAddress((int)a1 + 8, (unsigned int)&v15, 4, (_DWORD)v5, 0);
        if ( (_DWORD)v9 == 258 )
          goto LABEL_24;
        v15 = *(_DWORD *)(a1 + 8);
        if ( (v15 & 2) == 0 )
          goto LABEL_23;
      }
    }
    LODWORD(v9) = NtWaitForSingleObject(v7, 0, v5);
LABEL_23:
    if ( (_DWORD)v9 != 258 )
      break;
LABEL_24:
    RtlpDbgPrintCriticalSectionTimeout(a1, v5, v4++);
    if ( *(_QWORD *)a1 == -1LL )
      v12 = 0;
    else
      v12 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v4 > 2 && (_RTL_CRITICAL_SECTION *)a1 != &LdrpLoaderLock && v12 == v6 )
      RtlpPossibleDeadlock(a1);
    v6 = v12;
    DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
  }
  if ( (int)v9 < 0 )
    RtlRaiseStatus((NTSTATUS)v9);
  if ( v14 )
  {
    v16->WaitingOnLoaderLock = 0;
    if ( MEMORY[0x7FFE0384] )
    {
      v9 = NtCurrentPeb();
      if ( (v9->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      {
        LOBYTE(v11) = -1;
        LOBYTE(v10) = -1;
        LODWORD(v9) = LdrpLogEtwEvent(5251, -1, v10, v11, 0LL);
      }
    }
  }
  return (int)v9;
}
