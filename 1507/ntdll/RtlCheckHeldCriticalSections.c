/*
 * XREFs of RtlCheckHeldCriticalSections @ 0x18006CE30
 * Callers:
 *     RtlCheckForOrphanedCriticalSections @ 0x18006CE10 (RtlCheckForOrphanedCriticalSections.c)
 * Callees:
 *     RtlpGetStackTraceAddressEx @ 0x1800082B0 (RtlpGetStackTraceAddressEx.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     ZwQueryInformationThread @ 0x180093B50 (ZwQueryInformationThread.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlApplicationVerifierStop @ 0x1800C6BE0 (RtlApplicationVerifierStop.c)
 */

void __fastcall RtlCheckHeldCriticalSections(HANDLE ThreadHandle, _QWORD *a2)
{
  void *UniqueThread; // r12
  _UNKNOWN **i; // r14
  _UNKNOWN **v6; // rsi
  __int64 v7; // r15
  _QWORD *j; // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+30h] [rbp-108h]
  __int64 StackTraceAddress; // [rsp+40h] [rbp-F8h]
  int *ThreadInformation; // [rsp+78h] [rbp-C0h] BYREF
  int v13; // [rsp+80h] [rbp-B8h]
  int v14; // [rsp+84h] [rbp-B4h]
  _BYTE v15[40]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v16[48]; // [rsp+B0h] [rbp-88h] BYREF
  _BYTE v17[24]; // [rsp+E0h] [rbp-58h] BYREF
  void *v18; // [rsp+F8h] [rbp-40h]
  int v19; // [rsp+150h] [rbp+18h] BYREF
  void *v20; // [rsp+158h] [rbp+20h]

  memset(&v16[2], 0, 0x2EuLL);
  memset(v15, 0, sizeof(v15));
  v19 = 0;
  if ( RtlpCriticalSectionVerifier && !RtlpCsVerifyDoNotBreak && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( ThreadHandle == (HANDLE)-2LL )
    {
      if ( !NtCurrentTeb()->CountOfOwnedCriticalSections )
        return;
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    }
    else
    {
      ThreadInformation = &v19;
      v14 = 4;
      v13 = 108;
      if ( ZwQueryInformationThread(ThreadHandle, ThreadTebInformation, &ThreadInformation, 0x10u, 0LL) < 0
        || !v19
        || ZwQueryInformationThread(ThreadHandle, ThreadBasicInformation, v17, 0x30u, 0LL) < 0 )
      {
        return;
      }
      UniqueThread = v18;
    }
    v20 = UniqueThread;
    RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
    for ( i = (_UNKNOWN **)RtlCriticalSectionList; i != &RtlCriticalSectionList; i = (_UNKNOWN **)*i )
    {
      v6 = i - 2;
      v7 = (__int64)*(i - 1);
      if ( a2 )
      {
        for ( j = a2; *j; ++j )
        {
          if ( v7 == *j )
          {
            if ( *j )
              goto LABEL_24;
            break;
          }
        }
      }
      *(_OWORD *)v15 = *(_OWORD *)v7;
      *(_OWORD *)&v15[16] = *(_OWORD *)(v7 + 16);
      *(_QWORD *)&v15[32] = *(_QWORD *)(v7 + 32);
      if ( *(_UNKNOWN ***)v15 == v6 )
      {
        if ( *(void **)&v15[16] == UniqueThread )
        {
          StackTraceAddress = RtlpGetStackTraceAddressEx(*((_WORD *)v6 + 1), *((_WORD *)v6 + 22));
          RtlApplicationVerifierStop(
            512,
            (unsigned int)"Thread is in a state in which it cannot own a critical section",
            (_DWORD)UniqueThread,
            (unsigned int)"Thread identifier",
            v7,
            (__int64)"Critical section address",
            (__int64)(i - 2),
            (__int64)"Critical section debug info address",
            StackTraceAddress,
            (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
        }
      }
      else
      {
        *(_OWORD *)v16 = **(_OWORD **)v15;
        *(_OWORD *)&v16[16] = *(_OWORD *)(*(_QWORD *)v15 + 16LL);
        *(_OWORD *)&v16[32] = *(_OWORD *)(*(_QWORD *)v15 + 32LL);
        v9 = RtlpGetStackTraceAddressEx(*(unsigned __int16 *)&v16[2], *(unsigned __int16 *)&v16[44]);
        v10 = RtlpGetStackTraceAddressEx(*((_WORD *)v6 + 1), *((_WORD *)v6 + 22));
        RtlApplicationVerifierStop(
          515,
          (unsigned int)"double initialized or corrupted critical section",
          v7,
          (unsigned int)"Critical section address.",
          (__int64)(i - 2),
          (__int64)"Address of the debug info found in the active list.",
          v10,
          (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
          v9,
          (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
      }
LABEL_24:
      ;
    }
    RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  }
}
