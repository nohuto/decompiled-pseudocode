/*
 * XREFs of PspCallJobHierarchyCallbacks @ 0x140467E28
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 */

__int64 __fastcall PspCallJobHierarchyCallbacks(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        unsigned int (__fastcall *a3)(__int64, __int64),
        __int64 (__fastcall *a4)(_QWORD *, __int64),
        __int64 a5,
        char a6)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v7; // ebx
  _QWORD *i; // rdi

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  if ( !a2 && !a4 )
    goto LABEL_15;
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
  if ( !a2 || (v7 = a2(a1, a5), v7 >= 0) )
  {
    if ( a4 )
    {
      for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
      {
        v7 = a4(i - 142, a5);
        if ( v7 < 0 )
          break;
      }
    }
  }
  if ( (a6 & 1) == 0 )
    PspUnlockJob(a1, (__int64)CurrentThread);
  if ( v7 < 0 )
  {
    if ( v7 == -1073741536 )
      return 0;
  }
  else
  {
LABEL_15:
    if ( a3 )
      return a3(a1, a5);
  }
  return (unsigned int)v7;
}
