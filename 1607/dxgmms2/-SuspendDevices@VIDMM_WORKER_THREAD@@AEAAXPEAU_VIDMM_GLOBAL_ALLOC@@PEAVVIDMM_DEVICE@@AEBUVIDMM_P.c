/*
 * XREFs of ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C0090408
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C008FF48 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FA58 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005BEE4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0069218 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006A894 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x1C008FE00 (-GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C0090328 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0098A7C (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VID.c)
 */

void __fastcall VIDMM_WORKER_THREAD::SuspendDevices(
        __int64 *a1,
        __int64 a2,
        VIDMM_DEVICE *a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        _BYTE *a7,
        struct VIDMM_DEVICE **a8)
{
  __int64 v9; // r10
  int v10; // r14d
  unsigned int v11; // r9d
  __int64 *v13; // r8
  int v14; // r13d
  unsigned int v15; // ecx
  unsigned int v16; // edi
  int v17; // r12d
  int v18; // edx
  int v19; // edx
  int v20; // edx
  unsigned int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rbx
  VIDMM_GLOBAL *v25; // rcx
  struct _LIST_ENTRY *v26; // rdi
  struct _LIST_ENTRY *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  VIDMM_DEVICE *DeviceToSuspend; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  VIDMM_DEVICE *v34; // rbx
  VIDMM_PROCESS_ADAPTER_INFO *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // [rsp+30h] [rbp-38h]
  struct _LIST_ENTRY *v40[2]; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v41[32]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v43; // [rsp+B8h] [rbp+50h]
  unsigned int v46; // [rsp+E0h] [rbp+78h]

  v9 = a4;
  v10 = 0;
  v11 = *(_DWORD *)(a2 + 76) & 0x3F;
  v13 = a1;
  v43 = v11;
  *a7 = 0;
  if ( *(int *)(v9 + 4) < 0 )
    return;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a2 + 68);
    v15 = 0;
    v46 = 0;
    v16 = *(_DWORD *)(a2 + 72) == 0 ? 6 : 0;
    if ( v14 )
      break;
LABEL_27:
    if ( ++v10 > *(_DWORD *)(v9 + 4) )
      return;
  }
  v17 = 6 * v16;
  while ( v16 > 5 )
  {
    v21 = v15;
    v20 = v15++;
    v46 = v15;
    if ( _bittest(&v14, v21) )
      goto LABEL_8;
LABEL_26:
    if ( !v14 )
      goto LABEL_27;
  }
  v18 = *(_DWORD *)(a2 + 72) >> v17;
  ++v16;
  v17 += 6;
  v19 = v18 & 0x1F;
  if ( !v19 )
  {
LABEL_25:
    v15 = v46;
    goto LABEL_26;
  }
  v20 = v19 - 1;
LABEL_8:
  v22 = *v13;
  v14 &= ~(1 << v20);
  v23 = (unsigned int)(*(_DWORD *)(456LL * v11 + *(_QWORD *)(v22 + 40136) + 4) + v20);
  v39 = v23;
  if ( (**(_DWORD **)(a2 + 504) & 0x20000) != 0 )
  {
    v10 = *(_DWORD *)(v9 + 4);
    v24 = *(_QWORD *)(*(_QWORD *)(v22 + 3712) + 8 * v23);
    v40[1] = (struct _LIST_ENTRY *)v40;
    v40[0] = (struct _LIST_ENTRY *)v40;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v41,
      (struct _KTHREAD **)(v22 + 41520));
    if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(v24, v40, a2, a6) )
    {
      if ( *(_DWORD *)(v24 + 404) )
      {
        v26 = v40[0];
        if ( (struct _LIST_ENTRY **)v40[0] != v40 )
        {
          *a7 = 1;
          do
          {
            v27 = v26 - 11;
            v26 = v26->Flink;
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v25, v27 + 11);
            VIDMM_DEVICE::PartiallySuspend((__int64 **)v27);
            VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v27, v28, v29, v30);
          }
          while ( v26 != (struct _LIST_ENTRY *)v40 );
        }
LABEL_14:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
        return;
      }
    }
    else
    {
      while ( (struct _LIST_ENTRY **)v40[0] != v40 )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v25, v40[0]);
      if ( *(_DWORD *)(v24 + 404) )
        goto LABEL_14;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
    v23 = v39;
  }
  DeviceToSuspend = VIDMM_SEGMENT::GetDeviceToSuspend(*(_QWORD *)(*(_QWORD *)(*a1 + 3712) + 8 * v23), a3, v10, a5, a8);
  v34 = DeviceToSuspend;
  if ( !DeviceToSuspend )
  {
LABEL_24:
    v11 = v43;
    v9 = a4;
    v13 = a1;
    goto LABEL_25;
  }
  if ( (*((_DWORD *)DeviceToSuspend + 13) & 7) != 1 && v10 != 2 )
  {
    v35 = (VIDMM_PROCESS_ADAPTER_INFO *)*((_QWORD *)DeviceToSuspend + 2);
    if ( v35 && VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v35, 0LL, v32, v33) )
      goto LABEL_30;
    goto LABEL_24;
  }
  VIDMM_DEVICE::FullySuspend((__int64 **)DeviceToSuspend);
  VIDMM_DEVICE::FaultAllAllocations(v34, v36, v37, v38);
LABEL_30:
  *a7 = 1;
}
