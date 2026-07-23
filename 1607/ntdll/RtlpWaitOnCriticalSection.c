/*
 * XREFs of RtlpWaitOnCriticalSection @ 0x18006673C
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x180019B88 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002B130 (RtlpAddDebugInfoToCriticalSection.c)
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 *     RtlpWaitOnAddress @ 0x1800668D4 (RtlpWaitOnAddress.c)
 *     RtlpWaitCouldDeadlock @ 0x180066AC8 (RtlpWaitCouldDeadlock.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180066D18 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     NtWaitForSingleObject @ 0x1800A64A0 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     LdrpLogEtwEvent @ 0x1800D15F8 (LdrpLogEtwEvent.c)
 *     RtlpDbgPrintCriticalSectionTimeout @ 0x1800D3B18 (RtlpDbgPrintCriticalSectionTimeout.c)
 *     RtlpPossibleDeadlock @ 0x1800D3CC8 (RtlpPossibleDeadlock.c)
 */

int __fastcall RtlpWaitOnCriticalSection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rbp
  unsigned int v6; // r15d
  LARGE_INTEGER *v7; // rsi
  int v8; // r12d
  void *v9; // r13
  struct _PEB *v10; // rax
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  int v14; // edi
  char v16; // [rsp+30h] [rbp-98h]
  int v17; // [rsp+38h] [rbp-90h] BYREF
  struct _TEB *v18; // [rsp+40h] [rbp-88h]
  _BYTE Fields[6]; // [rsp+48h] [rbp-80h] BYREF
  __int16 v20; // [rsp+4Eh] [rbp-7Ah]
  int v21; // [rsp+68h] [rbp-60h]
  int v22; // [rsp+6Ch] [rbp-5Ch]
  __int64 v23; // [rsp+70h] [rbp-58h]
  __int64 v24; // [rsp+78h] [rbp-50h]

  v4 = NtCurrentTeb();
  v17 = a2;
  v16 = 0;
  v18 = v4;
  v6 = 0;
  if ( (_RTL_CRITICAL_SECTION *)a1 == &LdrpLoaderLock )
  {
    v16 = 1;
    v4->WaitingOnLoaderLock = 1;
  }
  if ( (unsigned __int8)RtlpWaitCouldDeadlock(a1, a2, a3, a4) )
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
  v7 = (LARGE_INTEGER *)&RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v7 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( *(_QWORD *)a1 == -1LL && (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    RtlpAddDebugInfoToCriticalSection(a1);
  v8 = 0;
  if ( *(_QWORD *)a1 != -1LL )
    ++*(_DWORD *)(*(_QWORD *)a1 + 36LL);
  v9 = *(void **)(a1 + 24);
  while ( 1 )
  {
    if ( MEMORY[0x7FFE0382] && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v20 = 5922;
      v13 = *(_DWORD *)(a1 + 32) & 0xFFFFFF;
      v24 = a1;
      v22 = v13;
      v21 = *(_DWORD *)(a1 + 8);
      v23 = *(_QWORD *)(a1 + 16);
      NtTraceEvent((HANDLE)MEMORY[0x7FFE0382], 0x20402u, 0x18u, Fields);
    }
    if ( v9 == (void *)-1LL )
    {
      while ( 1 )
      {
        LODWORD(v10) = RtlpWaitOnAddress((int)a1 + 8, (unsigned int)&v17, 4, (_DWORD)v7, 0);
        if ( (_DWORD)v10 == 258 )
          goto LABEL_28;
        v17 = *(_DWORD *)(a1 + 8);
        if ( (v17 & 2) == 0 )
          goto LABEL_17;
      }
    }
    LODWORD(v10) = NtWaitForSingleObject(v9, 0, v7);
LABEL_17:
    if ( (_DWORD)v10 != 258 )
      break;
LABEL_28:
    RtlpDbgPrintCriticalSectionTimeout(a1, v7, v6++);
    if ( *(_QWORD *)a1 == -1LL )
      v14 = 0;
    else
      v14 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v6 > 2 && (_RTL_CRITICAL_SECTION *)a1 != &LdrpLoaderLock && v14 == v8 )
      RtlpPossibleDeadlock(a1);
    v8 = v14;
    DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
  }
  if ( (int)v10 < 0 )
    RtlRaiseStatus((NTSTATUS)v10);
  if ( v16 )
  {
    v18->WaitingOnLoaderLock = 0;
    if ( MEMORY[0x7FFE0384] )
    {
      v10 = NtCurrentPeb();
      if ( (v10->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      {
        LOBYTE(v12) = -1;
        LOBYTE(v11) = -1;
        LODWORD(v10) = LdrpLogEtwEvent(5251, -1, v11, v12, 0LL, 0LL);
      }
    }
  }
  return (int)v10;
}
