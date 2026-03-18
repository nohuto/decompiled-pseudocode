/*
 * XREFs of PspGetNextJobProcess @ 0x1403E8CB8
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x1400F0194 (PspExecuteJobFreezeThawCallback.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x1404522F4 (PspSetCpuRateControlJobPostCallback.c)
 *     PspTerminateProcessesJobCallback @ 0x1404BD074 (PspTerminateProcessesJobCallback.c)
 *     PspBoostJobIoPriorityCallback @ 0x1404E23A0 (PspBoostJobIoPriorityCallback.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140640B1C (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ObReferenceObjectSafeWithTag @ 0x140042340 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
 */

_QWORD *__fastcall PspGetNextJobProcess(__int64 a1, __int64 a2, _QWORD *a3, void *a4)
{
  _QWORD *v4; // r14
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v4 = 0LL;
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( !a4 )
  {
    v9 = *(_QWORD *)(a1 + 1080);
    *a3 = v9;
    a3[1] = a1 + 1080;
    if ( *(_QWORD *)(v9 + 8) != a1 + 1080 )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = a3;
    *(_QWORD *)(a1 + 1080) = a3;
    a3[2] = a1 + 40;
  }
  v10 = *(_QWORD **)a3[2];
  while ( v10 != (_QWORD *)(a1 + 40) )
  {
    v4 = v10 - 142;
    if ( ObReferenceObjectSafeWithTag((__int64)(v10 - 142)) )
      goto LABEL_11;
    v10 = (_QWORD *)*v10;
    v4 = 0LL;
  }
  v11 = *a3;
  v12 = (_QWORD *)a3[1];
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v12 != a3 )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
LABEL_11:
  a3[2] = v10;
  PspUnlockJob(a1, a2);
  if ( a4 )
    ObfDereferenceObjectWithTag(a4, 0x624A7350u);
  return v4;
}
