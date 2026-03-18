/*
 * XREFs of PiDmListRemoveObjectWorker @ 0x14062FDFC
 * Callers:
 *     PiDmListRemoveList @ 0x14062FB14 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14062FD08 (PiDmListRemoveObject.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C3FD4 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1404FEFC0 (PiDmObjectRelease.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x140506370 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1405663BC (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListRemoveObjectWorker(int a1, __int64 a2, unsigned int *a3, __int64 a4, char *a5)
{
  __int64 v7; // r10
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  char v10; // bl
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
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
