/*
 * XREFs of PspCallJobHierarchyCallbacks @ 0x140506AD8
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall PspCallJobHierarchyCallbacks(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        unsigned int (__fastcall *a3)(__int64, __int64),
        __int64 (__fastcall *a4)(_QWORD *, __int64),
        __int64 a5,
        char a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v11; // ebx
  __int16 v12; // ax
  _QWORD *i; // rsi

  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  if ( !a2 && !a4 )
    goto LABEL_22;
  if ( (a6 & 1) == 0 )
  {
    if ( (a6 & 4) != 0 )
    {
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
    }
    else
    {
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
    }
  }
  if ( !a2 || (v11 = a2(a1, a5), v11 >= 0) )
  {
    if ( a4 )
    {
      for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
      {
        v11 = a4(i - 141, a5);
        if ( v11 < 0 )
          break;
      }
    }
  }
  if ( (a6 & 1) == 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    if ( CurrentThread )
    {
      v12 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v12;
      if ( !v12
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  if ( v11 < 0 )
  {
    if ( v11 == -1073741536 )
      return 0;
  }
  else
  {
LABEL_22:
    if ( a3 )
      return a3(a1, a5);
  }
  return (unsigned int)v11;
}
