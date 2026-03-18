/*
 * XREFs of ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005A00C
 * Callers:
 *     ?NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00574F8 (-NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C005C8A0 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C005C970 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C005CD7C (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0087BB8 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C008B3EC (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C009069C (-ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z.c)
 *     ?SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z @ 0x1C00909F0 (-SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RequestNewBudget(VIDMM_GLOBAL *this, char a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( a2 )
  {
    v2 = *((_DWORD *)this + 1604);
    v3 = 0;
    if ( !v2 )
      return;
LABEL_3:
    v4 = 0LL;
    while ( !*(_BYTE *)(*((_QWORD *)this + 5150) + 264LL * v3 + v4 + 256) )
    {
      if ( ++v4 >= 2 )
      {
        if ( ++v3 < v2 )
          goto LABEL_3;
        return;
      }
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 5203);
  v5 = *(_QWORD *)this;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 8) )
    KeSetEvent(*(PRKEVENT *)(v5 + 152), 0, 0);
}
