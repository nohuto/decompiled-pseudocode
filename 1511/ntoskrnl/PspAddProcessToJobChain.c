/*
 * XREFs of PspAddProcessToJobChain @ 0x1403E8E64
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1403E8B34 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x140021BEC (RtlInterlockedSetClearBits.c)
 *     PspNotifyProcessBackgroundTransition @ 0x1400EAFBC (PspNotifyProcessBackgroundTransition.c)
 *     PspSendJobNotification @ 0x140117780 (PspSendJobNotification.c)
 *     PspValidateJobLimitsDuringAssignment @ 0x1403E9050 (PspValidateJobLimitsDuringAssignment.c)
 *     PspComputeExecutionState @ 0x1403E90FC (PspComputeExecutionState.c)
 *     PspApplyJobLimitsToProcess @ 0x1403E9118 (PspApplyJobLimitsToProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x14045075C (PspSetProcessSchedulingGroup.c)
 *     PspIoRateControlProcessCallback @ 0x140642104 (PspIoRateControlProcessCallback.c)
 */

__int64 __fastcall PspAddProcessToJobChain(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  int v4; // r14d
  __int64 v8; // rbx
  int v9; // r15d
  int v10; // eax
  int v11; // eax
  __int64 i; // rbx
  __int64 v13; // rax
  int v14; // r9d
  signed __int32 v15; // eax
  int v16; // r9d
  signed __int32 v17; // r8d
  int v19; // ecx
  __int64 v20; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+28h] [rbp-20h]

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
    ++*(_DWORD *)(v8 + 1192);
    if ( v9 )
      ++*(_DWORD *)(v8 + 1196);
    v11 = PspValidateJobLimitsDuringAssignment(v8, a3);
    v8 = *(_QWORD *)(v8 + 1064);
    if ( v11 < 0 )
      v4 = v11;
  }
  while ( v8 != a2 );
  if ( v4 >= 0 )
  {
LABEL_11:
    for ( i = a1; i != a2; i = *(_QWORD *)(i + 1064) )
    {
      _InterlockedAnd((volatile signed __int32 *)(i + 1296), 0xFFDFFFFF);
      if ( *(_QWORD *)(i + 456) && (*(_DWORD *)(i + 884) & 0x40) != 0 )
        PspSendJobNotification(i, 6LL, *(_QWORD *)(a3 + 744), 0);
    }
    PspApplyJobLimitsToProcess(a3, 0LL);
    if ( *(_QWORD *)(a1 + 1008) )
    {
      if ( a2 && *(_QWORD *)(a2 + 1008) || PsCpuFairShareEnabled )
        PspSetProcessSchedulingGroup(a3, 0LL);
      PspSetProcessSchedulingGroup(a3, *(_QWORD *)(a1 + 1008));
    }
    v13 = *(_QWORD *)(a1 + 832);
    if ( !v13 || a2 && *(_QWORD *)(a2 + 832) )
      goto LABEL_16;
    v19 = 0;
    v20 = v13 + 1232;
    if ( KeGetCurrentThread()->PreviousMode == 1 )
      v19 = 6;
    v21 = v19;
    v4 = PspIoRateControlProcessCallback(a3, &v20);
    if ( v4 >= 0 )
    {
LABEL_16:
      v14 = PspComputeExecutionState(a1);
      v15 = *(_DWORD *)(a3 + 768);
      v16 = v14 << 28;
      do
      {
        v17 = v15;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 768), v16 | v15 & 0xCFFFFFFF, v15);
      }
      while ( v15 != v17 );
      if ( *(_DWORD *)(a1 + 868) && (!a2 || !*(_DWORD *)(a2 + 868)) )
        PspNotifyProcessBackgroundTransition(a3, 1);
      if ( (*(_DWORD *)(a1 + 1296) & 0x40000) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a3 + 440), 4u);
      RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 768), 4);
    }
  }
  return (unsigned int)v4;
}
