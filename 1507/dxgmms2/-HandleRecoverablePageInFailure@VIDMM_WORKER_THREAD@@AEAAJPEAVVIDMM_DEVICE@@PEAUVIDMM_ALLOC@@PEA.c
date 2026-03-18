/*
 * XREFs of ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C005785C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C0035FBC (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C00570E8 (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z @ 0x1C00579E0 (-ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_NPEAPEAV3@@Z @ 0x1C0057C04 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 */

__int64 VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(KSPIN_LOCK **a1, VIDMM_DEVICE *a2, __int64 **a3, ...)
{
  unsigned int v5; // ebx
  int v8; // r15d
  __int64 v9; // r9
  int v10; // r10d
  _DWORD *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF
  va_list va; // [rsp+88h] [rbp+48h]
  __int64 v16; // [rsp+90h] [rbp+50h]
  __int64 v17; // [rsp+98h] [rbp+58h]
  __int64 v18; // [rsp+A0h] [rbp+60h]
  _DWORD *v19; // [rsp+A8h] [rbp+68h]
  _QWORD *v20; // [rsp+B0h] [rbp+70h]
  va_list va1; // [rsp+B8h] [rbp+78h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _DWORD *);
  v20 = va_arg(va1, _QWORD *);
  v5 = 0;
  LOBYTE(v14) = 0;
  VIDMM_WORKER_THREAD::ProcessPendingTerminations(a1, 1, (bool *)va, (bool *)&v13);
  KeWaitForSingleObject(*a1 + 5093, Executive, 0, 0, 0LL);
  VIDMM_WORKER_THREAD::ProcessEvictQueues((VIDMM_WORKER_THREAD *)a1, (bool *)&v13);
  if ( (unsigned __int8)v13 | (unsigned __int8)v14 )
    return 0LL;
  v8 = v18;
  v9 = **a3;
  v10 = *(_DWORD *)(v9 + 76);
  if ( *(_BYTE *)(264LL * (v10 & 0x3F) + (*a1)[5104] + 259) )
  {
    if ( (VIDMM_GLOBAL::_Config & 4) == 0
      && (((v10 & 0x400) == 0) & !_bittest((const signed __int32 *)a3[12], 0x11u)) != 0 )
    {
      VIDMM_WORKER_THREAD::DemoteAllocationsToFitGlobalAlloc((__int64)a1, v9, a2);
      if ( (_BYTE)v14 )
        return 0LL;
    }
  }
  v11 = (_DWORD *)v17;
  v12 = 0LL;
  v13 = 0LL;
  if ( *(_BYTE *)(v17 + 8) )
    goto LABEL_10;
  VIDMM_WORKER_THREAD::SuspendDevices(a1, **a3, a2, v17, v8, (__int64 *)va, &v13);
  if ( (_BYTE)v14 )
    return 0LL;
  v12 = v13;
LABEL_10:
  if ( *v11 == 2 )
  {
    if ( v12 )
    {
      *v20 = v12;
      return 3223191812LL;
    }
    v5 = -1073741823;
  }
  *v19 = *v11;
  return v5;
}
