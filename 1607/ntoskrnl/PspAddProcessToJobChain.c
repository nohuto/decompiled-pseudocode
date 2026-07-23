/*
 * XREFs of PspAddProcessToJobChain @ 0x140469188
 * Callers:
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x1404D65FC (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x140076D48 (RtlInterlockedSetClearBits.c)
 *     PspNotifyProcessBackgroundTransition @ 0x1400953BC (PspNotifyProcessBackgroundTransition.c)
 *     PspSendJobNotification @ 0x1400AA5A8 (PspSendJobNotification.c)
 *     PspSetProcessSchedulingGroup @ 0x140456EB4 (PspSetProcessSchedulingGroup.c)
 *     PspApplyJobLimitsToProcess @ 0x1404690A0 (PspApplyJobLimitsToProcess.c)
 *     PspValidateJobLimitsDuringAssignment @ 0x140469360 (PspValidateJobLimitsDuringAssignment.c)
 *     PspComputeExecutionState @ 0x14046940C (PspComputeExecutionState.c)
 */

__int64 __fastcall PspAddProcessToJobChain(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  int v4; // r14d
  __int64 v8; // rbx
  int v9; // r15d
  int v10; // eax
  int v11; // eax
  __int64 i; // rbx
  int v13; // r9d
  signed __int32 v14; // eax
  int v15; // r9d
  signed __int32 v16; // r8d

  v4 = 0;
  v8 = a1;
  if ( a1 == a2 )
    goto LABEL_11;
  v9 = a4 & 0x8000;
  do
  {
    v10 = *(_DWORD *)(v8 + 212);
    if ( v10 != -1 )
      *(_DWORD *)(v8 + 212) = v10 + 1;
    ++*(_DWORD *)(v8 + 216);
    ++*(_DWORD *)(v8 + 1224);
    if ( v9 )
      ++*(_DWORD *)(v8 + 1228);
    v11 = PspValidateJobLimitsDuringAssignment(v8, a3);
    v8 = *(_QWORD *)(v8 + 1056);
    if ( v11 < 0 )
      v4 = v11;
  }
  while ( v8 != a2 );
  if ( v4 >= 0 )
  {
LABEL_11:
    for ( i = a1; i != a2; i = *(_QWORD *)(i + 1056) )
    {
      _InterlockedAnd((volatile signed __int32 *)(i + 1304), 0xFFDFFFFF);
      if ( *(_QWORD *)(i + 456) && (*(_DWORD *)(i + 876) & 0x40) != 0 )
        PspSendJobNotification(i, 6LL, *(_QWORD *)(a3 + 744), 0);
    }
    PspApplyJobLimitsToProcess(a3, 0);
    if ( *(_QWORD *)(a1 + 1000) )
    {
      if ( a2 && *(_QWORD *)(a2 + 1000) || PsCpuFairShareEnabled )
        PspSetProcessSchedulingGroup(a3, 0LL);
      PspSetProcessSchedulingGroup(a3, *(_QWORD *)(a1 + 1000));
    }
    v13 = PspComputeExecutionState(a1);
    v14 = *(_DWORD *)(a3 + 768);
    v15 = v13 << 28;
    do
    {
      v16 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 768), v15 | v14 & 0xCFFFFFFF, v14);
    }
    while ( v14 != v16 );
    if ( *(_DWORD *)(a1 + 860) && (!a2 || !*(_DWORD *)(a2 + 860)) )
      PspNotifyProcessBackgroundTransition(a3, 1);
    if ( (*(_DWORD *)(a1 + 1304) & 0x40000) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a3 + 440), 4u);
    RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 768), 4);
  }
  return (unsigned int)v4;
}
