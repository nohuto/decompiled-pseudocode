/*
 * XREFs of MiRemoveVadCharges @ 0x14042E9F0
 * Callers:
 *     MiFinishVadDeletion @ 0x140029160 (MiFinishVadDeletion.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x140027160 (MiReturnFullProcessCharges.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140028040 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiFillCommitReturnInfo @ 0x140028068 (MiFillCommitReturnInfo.c)
 *     MiGetVadWakeList @ 0x140029580 (MiGetVadWakeList.c)
 *     MiFreePhysicalView @ 0x1400296F8 (MiFreePhysicalView.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiReturnPartitionResidentAvailable @ 0x140171DE4 (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiResidentPagesForSpan @ 0x1404C9880 (MiResidentPagesForSpan.c)
 */

void __fastcall MiRemoveVadCharges(__int64 a1, ULONG_PTR a2)
{
  int v3; // r15d
  int *ProcessPartition; // rax
  int v6; // ecx
  int *v7; // r12
  BOOL v8; // ebp
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  LONG *SharedVm; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // edx
  __int64 *VadWakeList; // rax
  __int64 *v16; // rbx
  __int64 *v17; // rax
  __int64 *v18; // rbx
  void *v19; // rcx
  __int64 *v20; // rax
  __int64 *v21; // rbx
  __int64 *v22; // rax
  __int64 *v23; // rbx
  unsigned __int64 v24; // rdx
  int v25; // ecx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r8
  __int64 PteAddress; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]
  __int64 v34; // [rsp+30h] [rbp-38h] BYREF
  __int64 v35; // [rsp+38h] [rbp-30h]
  __int64 v36; // [rsp+40h] [rbp-28h]
  __int64 v37; // [rsp+48h] [rbp-20h]

  v3 = 0;
  v35 = 0LL;
  v34 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  ProcessPartition = MiGetProcessPartition(a2);
  v6 = *(_DWORD *)(a1 + 48);
  v7 = ProcessPartition;
  if ( (v6 & 0x8000) != 0 )
    v8 = (v6 & 7) == 5;
  else
    v8 = (*(_BYTE *)(a1 + 67) & 1) != 0;
  v9 = *(unsigned int *)(a1 + 52);
  LODWORD(v9) = v9 & 0x7FFFFFFF;
  v10 = v9 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( v10 >= 0x7FFFFFFFELL )
  {
    v10 = 0LL;
  }
  else
  {
    v35 = *(_QWORD *)(a1 + 8);
    v36 = *(_QWORD *)a1;
    MiFillCommitReturnInfo(v10, (__int64)&v34, &v32);
    if ( v32 )
      MiReturnFullProcessCharges(a2, v32);
    if ( v33 )
    {
      SharedVm = MiGetSharedVm(a2 + 1280);
      v13 = *((_QWORD *)SharedVm + 1);
      if ( v13 )
      {
        if ( v12 <= v13 )
        {
          *((_QWORD *)SharedVm + 1) = v13 - v12;
          goto LABEL_15;
        }
        v12 -= v13;
        *((_QWORD *)SharedVm + 1) = 0LL;
        v33 = v12;
      }
      if ( v12 )
        MiReturnCommit((__int64)v7, v12);
    }
  }
LABEL_15:
  v14 = 0;
  if ( (*(_DWORD *)(a1 + 48) & 0x4000) != 0 )
    v14 = 2;
  if ( v8 )
    v14 |= 0x10u;
  if ( v14 )
  {
    VadWakeList = MiGetVadWakeList(a1, v14);
    if ( VadWakeList )
    {
      do
      {
        v16 = (__int64 *)*VadWakeList;
        ExFreePoolWithTag(VadWakeList, 0);
        VadWakeList = v16;
      }
      while ( v16 );
    }
  }
  v17 = MiGetVadWakeList(a1, 8);
  v18 = v17;
  if ( v17 )
  {
    v19 = (void *)v17[2];
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    ExFreePoolWithTag(v18, 0);
  }
  v20 = MiGetVadWakeList(a1, 4);
  v21 = v20;
  if ( v20 )
  {
    PsReturnProcessNonPagedPoolQuota(a2, 8 * (((v20[2] & 0x3F) != 0) + ((unsigned __int64)v20[2] >> 6)) + 64);
    ExFreePoolWithTag(v21, 0);
  }
  v22 = MiGetVadWakeList(a1, 64);
  v23 = v22;
  if ( v22 )
  {
    v24 = v22[2];
    LOBYTE(v3) = (v24 & 0x3F) != 0;
    PsReturnProcessNonPagedPoolQuota(a2, 8 * (v3 + (v24 >> 6)) + 64);
    ExFreePoolWithTag(v23, 0);
  }
  MiFreePhysicalView(a2, a1);
  if ( v8 && (*(_BYTE *)(a1 + 48) & 7) != 7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1600), -(__int64)v10);
  if ( (*(_DWORD *)(a1 + 48) & 7) != 7 && (v25 = 74, _bittest(&v25, *(_DWORD *)(a1 + 48) & 7)) || v8 )
  {
    v26 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
    v27 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
    v28 = MiResidentPagesForSpan(v26, v27);
    if ( v8 )
    {
      MiGetPteAddress(v26);
      PteAddress = MiGetPteAddress(v27);
      v28 = v31
          - (((unsigned __int64)(8 * ((PteAddress - v30) >> 3) + 8) >> 12)
           + ((unsigned __int64)(((8 * (unsigned __int16)((PteAddress - v30) >> 3) + 8) & 0xFFF)
                               + (unsigned int)(v30 & 0xFFF)
                               + 4095) >> 12));
    }
    if ( v7 == MiSystemPartition )
      MiReturnResidentAvailable(v28);
    else
      MiReturnPartitionResidentAvailable((__int64)v7, v28);
  }
}
