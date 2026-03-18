/*
 * XREFs of ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0098A7C
 * Callers:
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C0090408 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 * Callees:
 *     ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z @ 0x1C009F3BC (-IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z.c)
 */

char __fastcall VIDMM_SEGMENT::FreeSpaceForSecureResource(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  VIDMM_LINEAR_POOL *v11; // rcx
  unsigned __int8 (*v12)(void *, void *); // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  char v14; // [rsp+38h] [rbp-10h]

  if ( !*(_DWORD *)(a1 + 404) )
    return 1;
  v7 = ~*(_QWORD *)(a1 + 392) & (*(_QWORD *)(a1 + 392) + *(_QWORD *)(a3 + 16));
  if ( a4 != 5 )
  {
    v9 = *(_QWORD *)(a1 + 408);
    if ( v9 - *(_QWORD *)(a1 + 376) >= v7 )
      goto LABEL_10;
    return 0;
  }
  v8 = *(_QWORD *)(a1 + 424);
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a1 + 416);
LABEL_10:
    v10 = v9 - v7;
    goto LABEL_11;
  }
  if ( v8 < v7 )
    return 0;
  v10 = *(_QWORD *)(a1 + 408);
  v9 = *(_QWORD *)(a1 + 416);
LABEL_11:
  v11 = *(VIDMM_LINEAR_POOL **)(a1 + 144);
  v13 = a2;
  v14 = 1;
  VIDMM_LINEAR_POOL::IterateAllocatedBlocksInRange(v11, v10, v9, &v13, v12);
  return v14;
}
