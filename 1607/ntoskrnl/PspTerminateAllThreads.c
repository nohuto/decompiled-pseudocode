/*
 * XREFs of PspTerminateAllThreads @ 0x1404EC680
 * Callers:
 *     NtTerminateProcess @ 0x1404EAD14 (NtTerminateProcess.c)
 *     PspTerminateProcess @ 0x1404EAEF8 (PspTerminateProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeFlushProcessWriteBuffers @ 0x1400C67CC (KeFlushProcessWriteBuffers.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     DbgkClearProcessDebugObject @ 0x1404D30AC (DbgkClearProcessDebugObject.c)
 *     PspGetPreviousProcessThread @ 0x1404EC8D0 (PspGetPreviousProcessThread.c)
 *     PspTerminateThreadByPointer @ 0x1404EC9C0 (PspTerminateThreadByPointer.c)
 *     PsGetNextProcessThread @ 0x1404F32E0 (PsGetNextProcessThread.c)
 *     PspCatchCriticalBreak @ 0x14067FCDC (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateAllThreads(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  __int64 v8; // r13
  __int64 PreviousProcessThread; // rbp
  unsigned __int8 v10; // al
  int v11; // ebx
  int v12; // ecx
  unsigned int v13; // esi
  int v14; // ebx
  unsigned int v15; // ebx
  int v16; // r12d
  __int64 i; // rax
  PVOID v18; // rbp
  PVOID Object; // [rsp+70h] [rbp+8h]
  int v21; // [rsp+88h] [rbp+20h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(BugCheckParameter1);
    PspCatchCriticalBreak(
      "Terminating critical process 0x%p (%s)\n",
      (const void *)BugCheckParameter1,
      (const char *)(BugCheckParameter1 + 1104));
  }
  v8 = *(_QWORD *)(a2 + 184);
  PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, 0LL);
  v10 = 4 * ((a4 & 4) != 0);
  v11 = ((unsigned __int8)v21 ^ (unsigned __int8)(2 * (a4 & 1))) & 2 ^ v21;
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
            v15 ^= ((unsigned __int8)v15 ^ (unsigned __int8)(8 * ((*(_BYTE *)(PreviousProcessThread + 1732) & 0x40) != 0))) & 8;
          }
          else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(PreviousProcessThread + 1704)) )
          {
            v15 |= 8u;
          }
          else
          {
            v15 = (((unsigned __int8)v15 ^ (unsigned __int8)(16
                                                           * _interlockedbittestandset(
                                                               (volatile signed __int32 *)(PreviousProcessThread + 1728),
                                                               0xFu))) & 0x10 ^ v15) & 0xFFFFFFF7;
          }
          if ( (v15 & 8) != 0 )
          {
            ++v16;
            PspTerminateThreadByPointer(PreviousProcessThread, a3, 0LL);
          }
        }
        PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, PreviousProcessThread);
      }
      while ( PreviousProcessThread );
      if ( v16 && BugCheckParameter1 == v8 )
        KeFlushProcessWriteBuffers(0);
      for ( i = PsGetNextProcessThread(BugCheckParameter1, 0LL); ; i = PsGetNextProcessThread(BugCheckParameter1, v18) )
      {
        v18 = (PVOID)i;
        if ( i != a2 && (v15 & 4) == 0 && (*(_DWORD *)(i + 1728) & 0x8000) == 0 )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(i + 1704));
        if ( v18 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v18, 0x6E457350u);
      ObfDereferenceObject(Object);
    }
    if ( (v15 & 2) != 0 && *(_QWORD *)(a2 + 544) == BugCheckParameter1 )
      PspTerminateThreadByPointer(a2, a3, 0LL);
  }
  if ( BugCheckParameter1 != v8 && a3 == 1073807364 )
    DbgkClearProcessDebugObject(BugCheckParameter1, 0LL);
  if ( (v13 == 290 || *(_QWORD *)(BugCheckParameter1 + 1056) && BugCheckParameter1 != v8)
    && !PspRundownSingleProcess(BugCheckParameter1, 0)
    && v13 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v13;
}
