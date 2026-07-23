/*
 * XREFs of PspGetNextJobProcess @ 0x14045703C
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x14006C228 (PspExecuteJobFreezeThawCallback.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x140456F04 (PspSetCpuRateControlJobPostCallback.c)
 *     PspTerminateProcessesJobCallback @ 0x140456F78 (PspTerminateProcessesJobCallback.c)
 *     PspBoostJobIoPriorityCallback @ 0x140457500 (PspBoostJobIoPriorityCallback.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x14067EFD8 (PspTerminateSiloSubsystemProcesses.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x1406810C4 (PspWaitOnAllProcessesJobCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 */

_QWORD *__fastcall PspGetNextJobProcess(__int64 a1, __int64 a2, _QWORD *a3, void *a4)
{
  _QWORD *v4; // r14
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rax

  v4 = 0LL;
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( !a4 )
  {
    v9 = (_QWORD *)(a1 + 1080);
    v10 = *(_QWORD *)(a1 + 1080);
    if ( *(_QWORD *)(v10 + 8) != a1 + 1080 )
      __fastfail(3u);
    a3[1] = v9;
    *a3 = v10;
    *(_QWORD *)(v10 + 8) = a3;
    *v9 = a3;
    a3[2] = a1 + 40;
  }
  v11 = *(_QWORD **)a3[2];
  while ( v11 != (_QWORD *)(a1 + 40) )
  {
    v4 = v11 - 142;
    if ( ObReferenceObjectSafeWithTag((__int64)(v11 - 142)) )
      goto LABEL_11;
    v11 = (_QWORD *)*v11;
    v4 = 0LL;
  }
  v12 = *a3;
  v13 = (_QWORD *)a3[1];
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v13 != a3 )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
LABEL_11:
  a3[2] = v11;
  PspUnlockJob(a1, a2);
  if ( a4 )
    ObfDereferenceObjectWithTag(a4, 0x624A7350u);
  return v4;
}
