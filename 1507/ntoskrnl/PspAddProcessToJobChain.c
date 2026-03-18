/*
 * XREFs of PspAddProcessToJobChain @ 0x14041B3E0
 * Callers:
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x14041AAC8 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x1400097E8 (RtlInterlockedSetClearBits.c)
 *     PspNotifyProcessBackgroundTransition @ 0x140129860 (PspNotifyProcessBackgroundTransition.c)
 *     PspSendJobNotification @ 0x14013A2C4 (PspSendJobNotification.c)
 *     PspValidateJobLimitsDuringAssignment @ 0x14041B608 (PspValidateJobLimitsDuringAssignment.c)
 *     PspApplyJobLimitsToProcess @ 0x14041B6A4 (PspApplyJobLimitsToProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x14041C094 (PspSetProcessSchedulingGroup.c)
 *     PspAddProcessToSilo @ 0x1406C17F8 (PspAddProcessToSilo.c)
 *     PspRemoveProcessFromSilo @ 0x1406C2778 (PspRemoveProcessFromSilo.c)
 *     PspIoRateControlProcessCallback @ 0x1406C4628 (PspIoRateControlProcessCallback.c)
 */

__int64 __fastcall PspAddProcessToJobChain(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  int v4; // r14d
  char v5; // r12
  __int64 v9; // rbx
  int v10; // r15d
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 i; // rbx
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // r9
  unsigned __int32 v18; // eax
  __int64 v19; // r8
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  __int64 v24; // [rsp+20h] [rbp-28h] BYREF
  int v25; // [rsp+28h] [rbp-20h]

  v4 = 0;
  v5 = 0;
  v9 = a1;
  if ( a1 == a2 )
    goto LABEL_12;
  v10 = a4 & 0x8000;
  do
  {
    v11 = *(_DWORD *)(v9 + 212);
    if ( v11 != -1 )
      *(_DWORD *)(v9 + 212) = v11 + 1;
    ++*(_DWORD *)(v9 + 216);
    ++*(_DWORD *)(v9 + 1192);
    if ( v10 )
      ++*(_DWORD *)(v9 + 1196);
    v12 = PspValidateJobLimitsDuringAssignment(v9, a3);
    if ( v12 < 0 )
    {
      v4 = v12;
    }
    else if ( !v5 )
    {
      v13 = *(_QWORD *)(v9 + 1248);
      if ( v13 )
      {
        v21 = *(_QWORD *)(a3 + 1832);
        v5 = 1;
        if ( v13 != v21 )
        {
          if ( v21 )
            PspRemoveProcessFromSilo(v13, a3);
          v22 = PspAddProcessToSilo(*(PRKEVENT *)(v9 + 1248));
          if ( v22 < 0 )
            v4 = v22;
        }
      }
    }
    v9 = *(_QWORD *)(v9 + 1064);
  }
  while ( v9 != a2 );
  if ( v4 >= 0 )
  {
LABEL_12:
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
    v15 = *(_QWORD *)(a1 + 832);
    if ( !v15 || a2 && *(_QWORD *)(a2 + 832) )
      goto LABEL_17;
    v23 = 0;
    v24 = v15 + 1232;
    if ( KeGetCurrentThread()->PreviousMode == 1 )
      v23 = 6;
    v25 = v23;
    v4 = PspIoRateControlProcessCallback(a3, &v24);
    if ( v4 >= 0 )
    {
LABEL_17:
      v16 = 0;
      if ( *(_DWORD *)(a1 + 872) )
        v16 = 2;
      if ( *(_DWORD *)(a1 + 864) )
        v16 |= 1u;
      v17 = (unsigned int)(v16 << 28);
      v18 = *(_DWORD *)(a3 + 768);
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 768), v17 | v18 & 0xCFFFFFFF, v18);
      }
      while ( v18 != (_DWORD)v19 );
      if ( *(_DWORD *)(a1 + 868) && (!a2 || !*(_DWORD *)(a2 + 868)) )
        PspNotifyProcessBackgroundTransition(a3, 1, v19, v17);
      if ( (*(_DWORD *)(a1 + 1296) & 0x40000) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a3 + 440), 4u);
      RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 768), 4);
    }
  }
  return (unsigned int)v4;
}
