/*
 * XREFs of PiDmListRemoveObjectWorker @ 0x140680984
 * Callers:
 *     PiDmListRemoveList @ 0x140680530 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140680838 (PiDmListRemoveObject.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140018004 (RtlDeleteElementGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1404E07D0 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1405AF49C (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListRemoveObjectWorker(int a1, __int64 a2, unsigned int *a3, __int64 a4, char *a5)
{
  __int64 v7; // r10
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  char v10; // bl
  _QWORD *v11; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v13; // ax
  char *result; // rax
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v7 = *((_QWORD *)&PiDmListDefs + 5 * a1 + 1);
  v8 = (_QWORD *)(a4 + *((_QWORD *)&PiDmListDefs + 5 * a1 + 3));
  if ( *v8 )
  {
    v9 = *v8;
    v10 = 1;
    v11 = (_QWORD *)v8[1];
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v11 != v8 )
      __fastfail(3u);
    *v11 = v9;
    *(_QWORD *)(v9 + 8) = v11;
    --*(unsigned int *)((char *)a3 + v7 + 16);
    *v8 = 0LL;
    v8[1] = 0LL;
    PiDmObjectManagerAcquireExclusiveLock((struct _ERESOURCE *)a2);
    if ( !--Buffer[3] )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a2 + 104), &Buffer);
      PiDmObjectRelease(Buffer);
    }
    ExReleaseResourceLite((PERESOURCE)a2);
    CurrentThread = KeGetCurrentThread();
    v13 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    PiDmListUpdateAggregationCountWorker((__int64)Buffer, a4, -1);
  }
  else
  {
    v10 = 0;
  }
  result = a5;
  if ( a5 )
    *a5 = v10;
  return result;
}
