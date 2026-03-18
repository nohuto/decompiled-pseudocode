/*
 * XREFs of PspTerminateAllThreads @ 0x1403F2750
 * Callers:
 *     NtTerminateProcess @ 0x140450420 (NtTerminateProcess.c)
 *     PspTerminateProcess @ 0x140450604 (PspTerminateProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     PsIsHostSilo @ 0x140079E50 (PsIsHostSilo.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeFlushProcessWriteBuffers @ 0x140095EE8 (KeFlushProcessWriteBuffers.c)
 *     PsGetServerSiloState @ 0x1400D5430 (PsGetServerSiloState.c)
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 *     PspGetPreviousProcessThread @ 0x1403F29CC (PspGetPreviousProcessThread.c)
 *     PspTerminateThreadByPointer @ 0x1403F2F24 (PspTerminateThreadByPointer.c)
 *     PsGetProcessServerSilo @ 0x14041CF3C (PsGetProcessServerSilo.c)
 *     PsGetNextProcessThread @ 0x140424290 (PsGetNextProcessThread.c)
 *     DbgkClearProcessDebugObject @ 0x1404F48C4 (DbgkClearProcessDebugObject.c)
 *     PspCatchCriticalBreak @ 0x1406417F4 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateAllThreads(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, int a3, char a4)
{
  void *ProcessServerSilo; // rbx
  int ServerSiloState; // esi
  __int64 v10; // r12
  ULONG_PTR PreviousProcessThread; // rbp
  int v12; // ebx
  unsigned int v13; // esi
  int v14; // ebx
  unsigned int v15; // ebx
  int v16; // r15d
  __int64 i; // rax
  PVOID v18; // rbp
  PVOID Object; // [rsp+60h] [rbp+8h]
  int v21; // [rsp+78h] [rbp+20h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x2000) != 0 )
  {
    ProcessServerSilo = (void *)PsGetProcessServerSilo(BugCheckParameter1);
    ServerSiloState = PsGetServerSiloState((__int64)ProcessServerSilo);
    if ( PsIsHostSilo((__int64)ProcessServerSilo)
      || ServerSiloState < 2
      || ServerSiloState == 4 && (*(_DWORD *)(BugCheckParameter1 + 772) & 8) == 0 )
    {
      PspCatchCriticalBreak("Terminating critical process 0x%p (%s)\n", BugCheckParameter1);
    }
    if ( ProcessServerSilo )
      ObfDereferenceObject(ProcessServerSilo);
  }
  v10 = *(_QWORD *)(a2 + 184);
  PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, 0LL);
  v12 = ((unsigned __int8)v21 ^ (unsigned __int8)(2 * (a4 & 1))) & 2 ^ v21;
  v13 = 290;
  v14 = ((unsigned __int8)v12 ^ ((a4 & 2) != 0)) & 1 ^ v12;
  v15 = ((unsigned __int8)v14 ^ (unsigned __int8)(4 * ((a4 & 4) != 0))) & 4 ^ v14;
  if ( PreviousProcessThread )
  {
    if ( (v15 & 1) != 0 )
    {
      ObfDereferenceObjectWithTag((PVOID)PreviousProcessThread, 0x6E457350u);
      v13 = -1073741558;
    }
    else
    {
      v13 = 0;
      Object = (PVOID)PreviousProcessThread;
      ObfReferenceObject((PVOID)PreviousProcessThread);
      v16 = 0;
      do
      {
        if ( PreviousProcessThread != a2 )
        {
          if ( (v15 & 4) != 0 )
          {
            v15 ^= ((unsigned __int8)v15 ^ (unsigned __int8)(8 * ((*(_BYTE *)(PreviousProcessThread + 1728) & 0x20) != 0))) & 8;
          }
          else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(PreviousProcessThread + 1696)) )
          {
            v15 |= 8u;
          }
          else
          {
            v15 = (((unsigned __int8)v15 ^ (unsigned __int8)(16
                                                           * _interlockedbittestandset(
                                                               (volatile signed __int32 *)(PreviousProcessThread + 1724),
                                                               0xFu))) & 0x10 ^ v15) & 0xFFFFFFF7;
          }
          if ( (v15 & 8) != 0 )
          {
            ++v16;
            PspTerminateThreadByPointer(PreviousProcessThread);
          }
        }
        PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, PreviousProcessThread);
      }
      while ( PreviousProcessThread );
      if ( v16 && BugCheckParameter1 == v10 )
        KeFlushProcessWriteBuffers(0);
      for ( i = PsGetNextProcessThread(BugCheckParameter1, 0LL); ; i = PsGetNextProcessThread(BugCheckParameter1, v18) )
      {
        v18 = (PVOID)i;
        if ( i != a2 && (v15 & 4) == 0 && (*(_DWORD *)(i + 1724) & 0x8000) == 0 )
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(i + 1696));
        if ( v18 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v18, 0x6E457350u);
      ObfDereferenceObject(Object);
    }
    if ( (v15 & 2) != 0 && *(_QWORD *)(a2 + 544) == BugCheckParameter1 )
      PspTerminateThreadByPointer(a2);
  }
  if ( BugCheckParameter1 != v10 && a3 == 1073807364 )
    DbgkClearProcessDebugObject(BugCheckParameter1);
  if ( (v13 == 290 || *(_QWORD *)(BugCheckParameter1 + 1056) && BugCheckParameter1 != v10)
    && !PspRundownSingleProcess(BugCheckParameter1, 0)
    && v13 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v13;
}
