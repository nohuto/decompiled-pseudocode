/*
 * XREFs of PiDmListAddObjectWorker @ 0x1404DFB04
 * Callers:
 *     PiDmListAddObject @ 0x1404DF9D4 (PiDmListAddObject.c)
 *     PiDmListAddList @ 0x14058C898 (PiDmListAddList.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1404E07D0 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1405AF49C (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListAddObjectWorker(int a1, struct _ERESOURCE *a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  char v11; // si
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v13; // ax
  _QWORD *v14; // rax
  char *result; // rax

  v8 = 5LL * a1;
  v9 = (_QWORD *)(a4 + *((_QWORD *)&PiDmListDefs + v8 + 3));
  v10 = a3 + *((_QWORD *)&PiDmListDefs + v8 + 1);
  if ( *v9 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    PiDmObjectManagerAcquireExclusiveLock(a2);
    ++*(_DWORD *)(a3 + 12);
    ExReleaseResourceLite(a2);
    CurrentThread = KeGetCurrentThread();
    v13 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v14 = *(_QWORD **)(v10 + 8);
    *v9 = v10;
    v9[1] = v14;
    if ( *v14 != v10 )
      __fastfail(3u);
    *v14 = v9;
    *(_QWORD *)(v10 + 8) = v9;
    ++*(_DWORD *)(v10 + 16);
    PiDmListUpdateAggregationCountWorker(a3, a4, 1LL);
  }
  result = a5;
  if ( a5 )
    *a5 = v11;
  return result;
}
