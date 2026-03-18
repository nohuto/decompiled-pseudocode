/*
 * XREFs of ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C007EDB4
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C0079BEC (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C007E640 (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z @ 0x1C007F038 (-ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C007F188 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 */

__int64 VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(KSPIN_LOCK **a1, VIDMM_DEVICE *a2, __int64 **a3, ...)
{
  unsigned int v5; // edi
  KSPIN_LOCK *v7; // rbx
  DXGPUSHLOCK *v8; // r15
  __int64 **v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // esi
  __int64 v14; // r10
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r8
  int v19; // ecx
  va_list v20; // [rsp+28h] [rbp-18h]
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  __int64 v22; // [rsp+98h] [rbp+58h] BYREF
  va_list va; // [rsp+98h] [rbp+58h]
  __int64 v24; // [rsp+A0h] [rbp+60h]
  __int64 v25; // [rsp+A8h] [rbp+68h]
  __int64 v26; // [rsp+B0h] [rbp+70h]
  _DWORD *v27; // [rsp+B8h] [rbp+78h]
  _QWORD *v28; // [rsp+C0h] [rbp+80h]
  va_list va1; // [rsp+C8h] [rbp+88h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _DWORD *);
  v28 = va_arg(va1, _QWORD *);
  v5 = 0;
  LOBYTE(v22) = 0;
  VIDMM_WORKER_THREAD::ProcessPendingTerminations(a1, 1, (bool *)va, (bool *)&v21);
  KeWaitForSingleObject(*a1 + 5100, Executive, 0, 0, 0LL);
  v7 = *a1;
  v8 = (DXGPUSHLOCK *)(*a1 + 4989);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v9 = (__int64 **)(v7 + 4987);
  while ( 1 )
  {
    v10 = *v9;
    v11 = **v9;
    if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
      __fastfail(3u);
    *v9 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v9;
    if ( v10 == (__int64 *)v9 )
      break;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v10[2] + 24LL))(v10[2], 0LL, v10[3], v10[4]);
    operator delete(v10);
  }
  *((_QWORD *)v8 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_WORKER_THREAD::ProcessEvictQueues((VIDMM_WORKER_THREAD *)a1, (bool *)&v21);
  if ( (unsigned __int8)v21 | (unsigned __int8)v22 )
    return 0LL;
  v13 = v26;
  v14 = **a3;
  v15 = *(_DWORD *)(v14 + 76);
  v16 = v15 & 0x3F;
  if ( *(_BYTE *)((*a1)[5111] + 264 * v16 + 259) )
  {
    if ( (VIDMM_GLOBAL::_Config & 4) == 0
      && ((*(_DWORD *)a3[12] & 0x20000) == 0 || (*(_BYTE *)((*a1)[5006] + 456 * v16 + 421) & 4) != 0)
      && (v15 & 0x400) == 0 )
    {
      va_copy(v20, va);
      VIDMM_WORKER_THREAD::DemoteAllocationsToFitGlobalAlloc((__int64)a1, v14, a2);
      if ( (_BYTE)v22 )
        return 0LL;
    }
  }
  v17 = v25;
  v18 = 0LL;
  v21 = 0LL;
  if ( !*(_BYTE *)(v25 + 8) )
  {
    if ( v24 && *(_DWORD *)(v24 + 48) == 203 )
      v19 = *(_DWORD *)(v24 + 80);
    else
      v19 = 0;
    LODWORD(v20) = v19;
    VIDMM_WORKER_THREAD::SuspendDevices(a1, **a3, a2, v25, v13, v20, (__int64 *)va, &v21);
    if ( !(_BYTE)v22 )
    {
      v18 = v21;
      goto LABEL_21;
    }
    return 0LL;
  }
LABEL_21:
  if ( (*(_DWORD *)a3[12] & 0x20000) != 0
    && (*(_BYTE *)(456LL * (*(_DWORD *)(**a3 + 76) & 0x3F) + (*a1)[5006] + 421) & 4) == 0
    && !*(_BYTE *)(v17 + 8) )
  {
LABEL_27:
    v5 = -1073741823;
    goto LABEL_28;
  }
  if ( *(_DWORD *)v17 == 2 )
  {
    if ( v18 )
    {
      *v28 = v18;
      return 3223191812LL;
    }
    goto LABEL_27;
  }
LABEL_28:
  result = v5;
  *v27 = *(_DWORD *)v17;
  return result;
}
