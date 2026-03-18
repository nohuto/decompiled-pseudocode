/*
 * XREFs of PspTerminateAllThreads @ 0x14041CBA4
 * Callers:
 *     NtTerminateProcess @ 0x14041C6B4 (NtTerminateProcess.c)
 *     PspTerminateProcess @ 0x14041C990 (PspTerminateProcess.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeFlushProcessWriteBuffers @ 0x14003FE30 (KeFlushProcessWriteBuffers.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     PsGetServerSiloState @ 0x140117518 (PsGetServerSiloState.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PspGetPreviousProcessThread @ 0x14041CE2C (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 *     PspTerminateThreadByPointer @ 0x1404205B0 (PspTerminateThreadByPointer.c)
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 *     PsGetProcessServerSilo @ 0x14050C11C (PsGetProcessServerSilo.c)
 *     DbgkClearProcessDebugObject @ 0x1405685D8 (DbgkClearProcessDebugObject.c)
 *     PspCatchCriticalBreak @ 0x1406C3D14 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateAllThreads(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, int a3, unsigned __int8 a4)
{
  __int64 v8; // r13
  ULONG_PTR PreviousProcessThread; // rbp
  unsigned __int8 v10; // al
  int v11; // ebx
  int v12; // ecx
  unsigned int v13; // esi
  int v14; // ebx
  unsigned int v15; // ebx
  int v16; // r15d
  unsigned __int64 v17; // rtt
  __int64 i; // rax
  PVOID v19; // rbp
  unsigned __int64 v20; // rtt
  void *ProcessServerSilo; // rbx
  PVOID Object; // [rsp+60h] [rbp+8h]
  int v24; // [rsp+78h] [rbp+20h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x2000) != 0 )
  {
    ProcessServerSilo = (void *)PsGetProcessServerSilo();
    if ( (unsigned int)PsGetServerSiloState((__int64)ProcessServerSilo) != 2 )
      PspCatchCriticalBreak("Terminating critical process 0x%p (%s)\n", BugCheckParameter1);
    if ( ProcessServerSilo )
      PspDereferenceSiloObject(ProcessServerSilo);
  }
  v8 = *(_QWORD *)(a2 + 184);
  PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, 0LL);
  v10 = 4 * ((a4 & 4) != 0);
  v11 = ((unsigned __int8)v24 ^ (unsigned __int8)(2 * (a4 & 1))) & 2 ^ v24;
  v12 = a4 >> 1;
  v13 = 290;
  v14 = ((unsigned __int8)v11 ^ v12 & 1) & 1 ^ v11;
  v15 = ((unsigned __int8)v14 ^ v10) & 4 ^ v14;
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
            v15 ^= ((unsigned __int8)v15 ^ (unsigned __int8)(8 * ((*(_BYTE *)(PreviousProcessThread + 1728) & 0x10) != 0))) & 8;
          }
          else
          {
            _m_prefetchw((const void *)(PreviousProcessThread + 1696));
            v17 = *(_QWORD *)(PreviousProcessThread + 1696) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v17 == _InterlockedCompareExchange64(
                          (volatile signed __int64 *)(PreviousProcessThread + 1696),
                          v17 + 2,
                          v17)
              || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(PreviousProcessThread + 1696)) )
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
      if ( v16 && BugCheckParameter1 == v8 )
        KeFlushProcessWriteBuffers(0);
      for ( i = PsGetNextProcessThread(BugCheckParameter1, 0LL); ; i = PsGetNextProcessThread(BugCheckParameter1, v19) )
      {
        v19 = (PVOID)i;
        if ( i != a2 && (v15 & 4) == 0 && (*(_DWORD *)(i + 1724) & 0x8000) == 0 )
        {
          _m_prefetchw((const void *)(i + 1696));
          v20 = *(_QWORD *)(i + 1696) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)(i + 1696), v20 - 2, v20) )
            ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(i + 1696));
        }
        if ( v19 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v19, 0x6E457350u);
      ObfDereferenceObject(Object);
    }
    if ( (v15 & 2) != 0 && *(_QWORD *)(a2 + 544) == BugCheckParameter1 )
      PspTerminateThreadByPointer(a2);
  }
  if ( BugCheckParameter1 != v8 && a3 == 1073807364 )
    DbgkClearProcessDebugObject(BugCheckParameter1);
  if ( (v13 == 290 || *(_QWORD *)(BugCheckParameter1 + 1056) && BugCheckParameter1 != v8)
    && !(unsigned __int8)PspRundownSingleProcess(BugCheckParameter1)
    && v13 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v13;
}
