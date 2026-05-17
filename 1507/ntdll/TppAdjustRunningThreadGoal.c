/*
 * XREFs of TppAdjustRunningThreadGoal @ 0x1800F5774
 * Callers:
 *     TpPostTask @ 0x180027C78 (TpPostTask.c)
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TppWorkpExecuteCallback @ 0x18003AE20 (TppWorkpExecuteCallback.c)
 *     TpStartAsyncIoOperation @ 0x18003C7D0 (TpStartAsyncIoOperation.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003DE48 (TppGetCurrentThreadNumaNode.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolUpdateNodeRelation @ 0x18007D168 (TppPoolUpdateNodeRelation.c)
 *     NtSetInformationWorkerFactory @ 0x180095130 (NtSetInformationWorkerFactory.c)
 */

signed __int64 __fastcall TppAdjustRunningThreadGoal(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v6; // eax
  __int16 v7; // r8
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 v11; // [rsp+38h] [rbp+10h]

  v4 = MEMORY[0x7FFE03C0];
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 72), a2, a3, a4);
  v6 = *(_DWORD *)(a1 + 424);
  if ( v4 != v6 )
  {
    *(_DWORD *)(a1 + 424) = v4;
    v7 = v4 - v6;
    _m_prefetchw((const void *)(a1 + 8));
    v8 = *(_QWORD *)(a1 + 8);
    v11 = v8;
    do
    {
      LODWORD(v11) = (unsigned __int16)(v11 ^ (v11 + v7)) ^ (unsigned int)v11;
      v9 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v11, v8);
      v11 = v8;
    }
    while ( v9 != v8 );
    NtSetInformationWorkerFactory();
    TppPoolUpdateNodeRelation(a1);
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
}
