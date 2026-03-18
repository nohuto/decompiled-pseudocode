/*
 * XREFs of PspGetNextJobProcess @ 0x1404F60B8
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x1400D62F0 (PspExecuteJobFreezeThawCallback.c)
 *     PspBoostJobIoPriorityCallback @ 0x1404F5EBC (PspBoostJobIoPriorityCallback.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x1404F5FAC (PspSetCpuRateControlJobPostCallback.c)
 *     PspTerminateProcessesJobCallback @ 0x1404F6020 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall PspGetNextJobProcess(__int64 a1, __int64 a2, _QWORD *a3, void *a4)
{
  _QWORD *v8; // r15
  struct _ERESOURCE *v9; // r12
  __int64 v10; // rcx
  _QWORD *v11; // rbp
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int16 v15; // ax

  v8 = 0LL;
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  v9 = (struct _ERESOURCE *)(a1 + 56);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( !a4 )
  {
    v10 = *(_QWORD *)(a1 + 1080);
    *a3 = v10;
    a3[1] = a1 + 1080;
    if ( *(_QWORD *)(v10 + 8) != a1 + 1080 )
      __fastfail(3u);
    *(_QWORD *)(v10 + 8) = a3;
    *(_QWORD *)(a1 + 1080) = a3;
    a3[2] = a1 + 40;
  }
  v11 = (_QWORD *)(a1 + 40);
  v12 = *(_QWORD **)a3[2];
  while ( v12 != v11 )
  {
    v8 = v12 - 141;
    if ( ObReferenceObjectSafeWithTag((__int64)(v12 - 141)) )
      goto LABEL_11;
    v12 = (_QWORD *)*v12;
    v8 = 0LL;
  }
  v13 = *a3;
  v14 = (_QWORD *)a3[1];
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v14 != a3 )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
LABEL_11:
  a3[2] = v12;
  ExReleaseResourceLite(v9);
  if ( a2 )
  {
    v15 = *(_WORD *)(a2 + 486) + 1;
    *(_WORD *)(a2 + 486) = v15;
    if ( !v15 && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery();
  }
  if ( a4 )
    ObfDereferenceObjectWithTag(a4, 0x624A7350u);
  return v8;
}
