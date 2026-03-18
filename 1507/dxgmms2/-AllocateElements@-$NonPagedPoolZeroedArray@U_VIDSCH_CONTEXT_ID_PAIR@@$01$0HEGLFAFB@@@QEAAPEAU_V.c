/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@U_VIDSCH_CONTEXT_ID_PAIR@@$01$0HEGLFAFB@@@QEAAPEAU_VIDSCH_CONTEXT_ID_PAIR@@I@Z @ 0x1C001B7D8
 * Callers:
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C001BA40 (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_D.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<_VIDSCH_CONTEXT_ID_PAIR,2,1953189969>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v2; // rdi
  void *v5; // rcx

  v2 = a2;
  if ( a2 <= 2 )
  {
    *(_QWORD *)a1 = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x10 )
      return 0LL;
    *(_QWORD *)a1 = ExAllocatePoolWithTag((POOL_TYPE)512, 16LL * a2, 0x746B5051u);
  }
  v5 = *(void **)a1;
  a1[10] = v2;
  if ( v5 )
    memset(v5, 0, 16 * v2);
  return *(_QWORD *)a1;
}
