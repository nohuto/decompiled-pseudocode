/*
 * XREFs of PiDmListAddObjectWorker @ 0x1404E8FEC
 * Callers:
 *     PiDmListAddObject @ 0x1404E8EF4 (PiDmListAddObject.c)
 *     PiDmListAddList @ 0x14062F9D4 (PiDmListAddList.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1404E9300 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1405668FC (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListAddObjectWorker(int a1, struct _ERESOURCE *a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
    v15 = *(_QWORD **)(v10 + 8);
    if ( *v15 != v10 )
      __fastfail(3u);
    *v9 = v10;
    v9[1] = v15;
    *v15 = v9;
    *(_QWORD *)(v10 + 8) = v9;
    ++*(_DWORD *)(v10 + 16);
    PiDmListUpdateAggregationCountWorker(a3, a4, 1LL);
  }
  result = a5;
  if ( a5 )
    *a5 = v11;
  return result;
}
