/*
 * XREFs of ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C005D0EC
 * Callers:
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0044964 (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C0044B54 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C005B580 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C0087FC8 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0054764 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C005C970 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C0064A28 (-ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z.c)
 */

void __fastcall VIDMM_PROCESS::CloseAdapter(VIDMM_PROCESS *this, struct VIDMM_GLOBAL *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // r15
  _DWORD *v11; // rsi
  _QWORD v12[12]; // [rsp+20h] [rbp-78h] BYREF

  v4 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = this;
  }
  v8 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 200LL);
  v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v8);
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) <= 1 )
  {
    v10 = *(_QWORD *)(v9 + 464);
    if ( v10 )
    {
      memset(v12, 0, 0x58uLL);
      v12[5] = *((_QWORD *)a2 + 5040);
      v12[0] = -4294967181LL;
      v12[6] = v10;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v12);
      *(_QWORD *)(v9 + 464) = 0LL;
    }
    VIDMM_PROCESS::DestroyAdapterInfo(this, v8);
    _InterlockedDecrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v8);
    if ( *((_DWORD *)a2 + 926) )
    {
      v11 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
      do
        VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8LL * v4++), v11[v8]);
      while ( v4 < *((_DWORD *)a2 + 926) );
    }
  }
}
