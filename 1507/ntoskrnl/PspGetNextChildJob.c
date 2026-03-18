/*
 * XREFs of PspGetNextChildJob @ 0x1405069DC
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall PspGetNextChildJob(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v5; // r14
  struct _ERESOURCE *v6; // r15
  _QWORD *v7; // rdi
  _QWORD *v8; // rbp
  __int16 v9; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  v6 = (struct _ERESOURCE *)(a1 + 56);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  if ( a2 )
    v7 = (_QWORD *)a2[129];
  else
    v7 = *(_QWORD **)(a1 + 1048);
  v8 = (_QWORD *)(a1 + 1048);
  while ( v7 != v8 )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v7 - 129)) )
    {
      v5 = v7 - 129;
      break;
    }
    v7 = (_QWORD *)*v7;
  }
  ExReleaseResourceLite(v6);
  if ( CurrentThread )
  {
    v9 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v9;
    if ( !v9 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v5;
}
