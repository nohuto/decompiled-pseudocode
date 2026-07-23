/*
 * XREFs of TppAdjustRunningThreadGoal @ 0x1800FE164
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     TppWorkpExecuteCallback @ 0x180020640 (TppWorkpExecuteCallback.c)
 *     TpStartAsyncIoOperation @ 0x18003C100 (TpStartAsyncIoOperation.c)
 *     TpPostTask @ 0x18003D018 (TpPostTask.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003E1CC (TppGetCurrentThreadNumaNode.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolUpdateNodeRelation @ 0x180073448 (TppPoolUpdateNodeRelation.c)
 *     NtSetInformationWorkerFactory @ 0x1800A9590 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TppAdjustRunningThreadGoal(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // eax
  __int16 v4; // r8
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v8; // [rsp+38h] [rbp+10h]

  v1 = MEMORY[0x7FFE03C0];
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  v3 = *(_DWORD *)(a1 + 424);
  if ( v1 != v3 )
  {
    *(_DWORD *)(a1 + 424) = v1;
    v4 = v1 - v3;
    _m_prefetchw((const void *)(a1 + 8));
    v5 = *(_QWORD *)(a1 + 8);
    v8 = v5;
    do
    {
      LODWORD(v8) = (unsigned __int16)(v8 ^ (v8 + v4)) ^ (unsigned int)v8;
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v8, v5);
      v8 = v5;
    }
    while ( v6 != v5 );
    if ( v1 < 4 )
      WorkerFactoryInformation = 4;
    else
      WorkerFactoryInformation = v1 + 1;
    NtSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryAdjustThreadGoal, &WorkerFactoryInformation, 4u);
    TppPoolUpdateNodeRelation(a1);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
}
