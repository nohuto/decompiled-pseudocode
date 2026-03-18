/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@PEBX$01$0GIFDGJFG@@@QEAAPEAPEBXI@Z @ 0x1C0025DC8
 * Callers:
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C00017DC (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_D.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<void const *,2,1750296918>::AllocateElements(_DWORD *a1, unsigned int a2)
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
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    *(_QWORD *)a1 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a2, 0x68536956u);
  }
  v5 = *(void **)a1;
  a1[6] = v2;
  if ( v5 )
    memset(v5, 0, 8 * v2);
  return *(_QWORD *)a1;
}
