/*
 * XREFs of ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C007F188
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C007EDB4 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0011520 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006179C (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x1C007EC9C (-GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_NXZ @ 0x1C007F0DC (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_NXZ.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007F850 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C007F9A4 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00848F8 (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VID.c)
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
  __int64 v11; // r9
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
  struct _LIST_ENTRY **p_Blink; // rbx
  VIDMM_DEVICE *DeviceToSuspend; // rax
  VIDMM_DEVICE *v29; // rbx
  VIDMM_PROCESS_ADAPTER_INFO *v30; // rcx
  unsigned int v31; // [rsp+30h] [rbp-38h]
  struct _LIST_ENTRY *v32[2]; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v33[32]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v35; // [rsp+B8h] [rbp+50h]
  unsigned int v38; // [rsp+E0h] [rbp+78h]

  v9 = a4;
  v10 = 0;
  v11 = *(_DWORD *)(a2 + 76) & 0x3F;
  v13 = a1;
  v35 = *(_DWORD *)(a2 + 76) & 0x3F;
  *a7 = 0;
  if ( *(int *)(v9 + 4) < 0 )
    return;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a2 + 68);
    v15 = 0;
    v38 = 0;
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
    v38 = v15;
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
    v15 = v38;
    goto LABEL_26;
  }
  v20 = v19 - 1;
LABEL_8:
  v22 = *v13;
  v14 &= ~(1 << v20);
  v23 = (unsigned int)(*(_DWORD *)(456LL * (unsigned int)v11 + *(_QWORD *)(v22 + 40048) + 4) + v20);
  v31 = v23;
  if ( (**(_DWORD **)(a2 + 472) & 0x20000) != 0 )
  {
    v10 = *(_DWORD *)(v9 + 4);
    v24 = *(_QWORD *)(*(_QWORD *)(v22 + 3712) + 8 * v23);
    v32[1] = (struct _LIST_ENTRY *)v32;
    v32[0] = (struct _LIST_ENTRY *)v32;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v33,
      (struct _KTHREAD **)(v22 + 41208),
      v22,
      v11);
    if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(v24, v32, a2, a6) )
    {
      if ( *(_DWORD *)(v24 + 404) )
      {
        v26 = v32[0];
        if ( (struct _LIST_ENTRY **)v32[0] != v32 )
        {
          *a7 = 1;
          do
          {
            p_Blink = &v26[-11].Blink;
            v26 = v26->Flink;
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v25, (struct _LIST_ENTRY *)(p_Blink + 21));
            VIDMM_DEVICE::PartiallySuspend((VIDMM_DEVICE *)p_Blink);
            VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)p_Blink);
          }
          while ( v26 != (struct _LIST_ENTRY *)v32 );
        }
LABEL_14:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
        return;
      }
    }
    else
    {
      while ( (struct _LIST_ENTRY **)v32[0] != v32 )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v25, v32[0]);
      if ( *(_DWORD *)(v24 + 404) )
        goto LABEL_14;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
    v23 = v31;
  }
  DeviceToSuspend = VIDMM_SEGMENT::GetDeviceToSuspend(*(_QWORD *)(*(_QWORD *)(*a1 + 3712) + 8 * v23), a3, v10, a5, a8);
  v29 = DeviceToSuspend;
  if ( !DeviceToSuspend )
  {
LABEL_24:
    v11 = v35;
    v9 = a4;
    v13 = a1;
    goto LABEL_25;
  }
  if ( (*((_DWORD *)DeviceToSuspend + 13) & 3) != 1 && v10 != 2 )
  {
    v30 = (VIDMM_PROCESS_ADAPTER_INFO *)*((_QWORD *)DeviceToSuspend + 2);
    if ( v30 && VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v30) )
      goto LABEL_30;
    goto LABEL_24;
  }
  VIDMM_DEVICE::FullySuspend(DeviceToSuspend);
  VIDMM_DEVICE::FaultAllAllocations(v29);
LABEL_30:
  *a7 = 1;
}
