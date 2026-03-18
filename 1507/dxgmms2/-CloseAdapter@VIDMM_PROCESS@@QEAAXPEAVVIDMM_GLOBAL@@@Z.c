/*
 * XREFs of ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00317CC
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C00319FC (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C003228C (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C004B3E4 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005B1BC (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C0031730 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C0038118 (-ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0051A04 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::CloseAdapter(VIDMM_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r14
  _DWORD *v8; // rdi
  _QWORD v9[10]; // [rsp+20h] [rbp-68h] BYREF

  v2 = 0;
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 184LL);
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v5);
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) <= 1 )
  {
    v7 = *(_QWORD *)(v6 + 432);
    if ( v7 )
    {
      memset(v9, 0, sizeof(v9));
      v9[5] = *((_QWORD *)a2 + 5000);
      v9[0] = -4294967181LL;
      v9[6] = v7;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v9, 1);
      *(_QWORD *)(v6 + 432) = 0LL;
    }
    VIDMM_PROCESS::DestroyAdapterInfo(this, v5);
    _InterlockedDecrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v5);
    if ( *((_DWORD *)a2 + 926) )
    {
      v8 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
      do
        VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8LL * v2++), v8[v5]);
      while ( v2 < *((_DWORD *)a2 + 926) );
    }
  }
}
