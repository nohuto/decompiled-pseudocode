/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0001850
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z @ 0x1C0066680 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@H@Z @ 0x1C00BA398 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0152950 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v2; // rdi
  void *v4; // rcx

  v2 = a2;
  if ( a2 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    *(_QWORD *)a1 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a2, 0x4B677844u);
  }
  else
  {
    *(_QWORD *)a1 = a1 + 2;
  }
  v4 = *(void **)a1;
  a1[10] = v2;
  if ( v4 )
    memset(v4, 0, 8 * v2);
  return *(_QWORD *)a1;
}
