/*
 * XREFs of ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_NPEAPEAV3@@Z @ 0x1C0057C04
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C005785C (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000F264 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x1C0057744 (-GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_NXZ @ 0x1C0057B58 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_NXZ.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00589A0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0058B5C (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0058E38 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?EvictAllocationCallback@@YAEPEAX0@Z @ 0x1C006FD44 (-EvictAllocationCallback@@YAEPEAX0@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::SuspendDevices(
        _QWORD *a1,
        __int64 a2,
        VIDMM_DEVICE *a3,
        __int64 a4,
        int a5,
        _BYTE *a6,
        struct VIDMM_DEVICE **a7)
{
  __int64 v8; // r10
  int v9; // r14d
  unsigned int v10; // r9d
  VIDMM_DEVICE *v11; // r11
  _QWORD *v13; // r8
  int v14; // r13d
  unsigned int v15; // ecx
  unsigned int v16; // edi
  int v17; // eax
  char v18; // cl
  int v19; // edx
  int v20; // edx
  unsigned int v21; // eax
  _QWORD *v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rbx
  VIDMM_GLOBAL *v26; // rcx
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  VIDMM_DEVICE *DeviceToSuspend; // rax
  VIDMM_DEVICE *v34; // rbx
  VIDMM_PROCESS_ADAPTER_INFO *v35; // rcx
  struct _LIST_ENTRY *v36; // rdi
  unsigned int v37; // [rsp+38h] [rbp-51h]
  int v38; // [rsp+3Ch] [rbp-4Dh]
  __int64 v39; // [rsp+40h] [rbp-49h]
  struct _LIST_ENTRY *v40[2]; // [rsp+48h] [rbp-41h] BYREF
  struct _LIST_ENTRY **v41; // [rsp+58h] [rbp-31h] BYREF
  char v42; // [rsp+60h] [rbp-29h]
  _BYTE v43[96]; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v45; // [rsp+E0h] [rbp+57h]
  int v48; // [rsp+100h] [rbp+77h]

  v8 = a4;
  v9 = 0;
  v10 = *(_DWORD *)(a2 + 76) & 0x3F;
  v11 = a3;
  v37 = v10;
  v13 = a1;
  *a6 = 0;
  if ( *(int *)(v8 + 4) < 0 )
    return;
LABEL_2:
  v14 = *(_DWORD *)(a2 + 68);
  v15 = 0;
  v45 = 0;
  v16 = *(_DWORD *)(a2 + 72) == 0 ? 6 : 0;
  if ( !v14 )
    goto LABEL_26;
  v17 = 6 * v16;
  v48 = 6 * v16;
LABEL_4:
  if ( v16 > 5 )
  {
    v21 = v15;
    v20 = v15++;
    v45 = v15;
    if ( !_bittest(&v14, v21) )
    {
      v17 = v48;
      goto LABEL_25;
    }
  }
  else
  {
    v18 = v17;
    v17 += 6;
    ++v16;
    v48 = v17;
    v19 = (*(_DWORD *)(a2 + 72) >> v18) & 0x1F;
    if ( !v19 )
      goto LABEL_24;
    v20 = v19 - 1;
  }
  v22 = (_QWORD *)*v13;
  v14 &= ~(1 << v20);
  v38 = v14;
  v23 = (unsigned int)(v20 + *(_DWORD *)(456LL * v10 + v22[4999] + 4));
  v24 = v22[464];
  if ( (**(_DWORD **)(a2 + 472) & 0x20000) != 0 )
  {
    v25 = *(_QWORD *)(v24 + 8 * v23);
    v9 = *(_DWORD *)(v8 + 4);
    v40[1] = (struct _LIST_ENTRY *)v40;
    v40[0] = (struct _LIST_ENTRY *)v40;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v43,
      (struct DXGPUSHLOCK *const)(v22 + 5144));
    if ( !*(_DWORD *)(v25 + 404) )
      goto LABEL_35;
    v27 = *(_QWORD *)(v25 + 408);
    v26 = (VIDMM_GLOBAL *)(~*(_QWORD *)(v25 + 392) & (*(_QWORD *)(v25 + 392) + *(_QWORD *)(a2 + 16)));
    if ( v27 - *(_QWORD *)(v25 + 376) < (unsigned __int64)v26 )
      goto LABEL_20;
    v42 = 1;
    v41 = v40;
    v28 = *(_QWORD *)(v25 + 144);
    v29 = v27 - (_QWORD)v26;
    v30 = *(_QWORD *)(v28 + 64);
    v26 = (VIDMM_GLOBAL *)(v28 + 56);
    v39 = v28 + 56;
    if ( v30 == v28 + 56 )
    {
LABEL_35:
      v36 = v40[0];
      *a6 = 1;
      while ( v36 != (struct _LIST_ENTRY *)v40 )
      {
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v26, v36);
        VIDMM_DEVICE::PartiallySuspend((VIDMM_DEVICE *)&v36[-11].Blink);
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)&v36[-11].Blink);
        v36 = v36->Flink;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
      return;
    }
    v31 = v28 + 56;
    while ( 1 )
    {
      v32 = v30 - 32;
      v30 = *(_QWORD *)(v30 + 8);
      v26 = *(VIDMM_GLOBAL **)(v32 + 8);
      if ( (unsigned __int64)v26 < v27 )
      {
        v26 = (VIDMM_GLOBAL *)((char *)v26 + *(_QWORD *)(v32 + 16));
        if ( (unsigned __int64)v26 > v29 && !EvictAllocationCallback(&v41, *(void **)(v32 + 24)) )
        {
LABEL_18:
          if ( v42 )
            goto LABEL_35;
          v14 = v38;
LABEL_20:
          while ( (struct _LIST_ENTRY **)v40[0] != v40 )
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v26, v40[0]);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
LABEL_23:
          v13 = a1;
          v11 = a3;
          v10 = v37;
          v8 = a4;
          v17 = v48;
LABEL_24:
          v15 = v45;
LABEL_25:
          if ( !v14 )
          {
LABEL_26:
            if ( ++v9 > *(_DWORD *)(v8 + 4) )
              return;
            goto LABEL_2;
          }
          goto LABEL_4;
        }
        v31 = v39;
      }
      if ( v30 == v31 )
        goto LABEL_18;
    }
  }
  DeviceToSuspend = VIDMM_SEGMENT::GetDeviceToSuspend(*(_QWORD *)(v24 + 8 * v23), v11, v9, a5, a7);
  v34 = DeviceToSuspend;
  if ( !DeviceToSuspend )
    goto LABEL_23;
  if ( (*((_DWORD *)DeviceToSuspend + 13) & 3) == 1 || v9 == 2 )
  {
    VIDMM_DEVICE::FullySuspend(DeviceToSuspend);
    VIDMM_DEVICE::FaultAllAllocations(v34);
  }
  else
  {
    v35 = (VIDMM_PROCESS_ADAPTER_INFO *)*((_QWORD *)DeviceToSuspend + 2);
    if ( !v35 || !VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v35) )
      goto LABEL_23;
  }
  *a6 = 1;
}
