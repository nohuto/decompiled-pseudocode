/*
 * XREFs of MiRemoveVadCharges @ 0x14041AF70
 * Callers:
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x1400D6450 (MiFinishVadDeletion.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x14001EBE4 (MiReturnFullProcessCharges.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiGetVadWakeList @ 0x14006C180 (MiGetVadWakeList.c)
 *     MiFreePhysicalView @ 0x14006C290 (MiFreePhysicalView.c)
 *     MiFillCommitReturnInfo @ 0x14006C2DC (MiFillCommitReturnInfo.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14006C2EC (PsReturnProcessNonPagedPoolQuota.c)
 *     MiReturnPartitionResidentAvailable @ 0x140166F8C (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiResidentPagesForSpan @ 0x1404BD834 (MiResidentPagesForSpan.c)
 */

void __fastcall MiRemoveVadCharges(__int64 a1, struct _KPROCESS *a2)
{
  int *ProcessPartition; // rax
  __int64 v5; // r8
  int v6; // ecx
  int v7; // ebp
  int *v8; // r15
  int v9; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  int v13; // edx
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rdi
  __int64 *v17; // rax
  __int64 v18; // r8
  __int64 *v19; // rdi
  __int64 *v20; // rax
  __int64 *v21; // rdi
  int v22; // ecx
  struct _LIST_ENTRY *Flink; // rax
  __int64 *VadWakeList; // rax
  __int64 *v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  void *v30; // rcx
  __int64 PteAddress; // rbx
  __int64 v32; // rax
  __int64 v33; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]
  _BYTE v35[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v36; // [rsp+38h] [rbp-30h]
  __int64 v37; // [rsp+40h] [rbp-28h]

  ProcessPartition = MiGetProcessPartition((__int64)a2);
  v6 = *(_DWORD *)(a1 + 48);
  v7 = 0;
  v8 = ProcessPartition;
  v9 = 1;
  if ( (v6 & 0x8000) != 0 )
  {
    if ( (v6 & 7) != 5 )
      goto LABEL_3;
  }
  else if ( (*(_BYTE *)(a1 + 67) & 1) == 0 )
  {
    goto LABEL_3;
  }
  v7 = 1;
LABEL_3:
  v10 = *(unsigned int *)(a1 + 52);
  LODWORD(v10) = v10 & 0x7FFFFFFF;
  v11 = v10 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( v11 >= 0x7FFFFFFFELL )
  {
    v11 = 0LL;
    goto LABEL_7;
  }
  v36 = *(_QWORD *)(a1 + 8);
  v37 = *(_QWORD *)a1;
  MiFillCommitReturnInfo(v11, (__int64)v35, &v33);
  if ( v33 )
    MiReturnFullProcessCharges((__int64)a2, v33);
  v12 = v34;
  if ( v34 )
  {
    Flink = a2[2].ThreadListHead.Flink;
    if ( Flink )
    {
      if ( v34 <= (unsigned __int64)Flink )
      {
        a2[2].ThreadListHead.Flink = (struct _LIST_ENTRY *)((char *)Flink - v34);
        goto LABEL_7;
      }
      v12 = v34 - (_QWORD)Flink;
      a2[2].ThreadListHead.Flink = 0LL;
      v34 = v12;
    }
    if ( v12 )
      MiReturnCommit((__int64)v8, v12);
  }
LABEL_7:
  v13 = 0;
  if ( (*(_DWORD *)(a1 + 48) & 0x4000) != 0 )
    v13 = 2;
  if ( v7 == 1 )
    v13 |= 0x10u;
  if ( v13 )
  {
    VadWakeList = MiGetVadWakeList(a1, v13, v5);
    if ( VadWakeList )
    {
      do
      {
        v25 = (__int64 *)*VadWakeList;
        ExFreePoolWithTag(VadWakeList, 0);
        VadWakeList = v25;
      }
      while ( v25 );
    }
  }
  v14 = MiGetVadWakeList(a1, 8, v5);
  v16 = v14;
  if ( v14 )
  {
    v30 = (void *)v14[2];
    if ( v30 )
      ExFreePoolWithTag(v30, 0);
    ExFreePoolWithTag(v16, 0);
  }
  v17 = MiGetVadWakeList(a1, 4, v15);
  v19 = v17;
  if ( v17 )
  {
    PsReturnProcessNonPagedPoolQuota(a2, 8 * (((v17[2] & 0x3F) != 0) + ((unsigned __int64)v17[2] >> 6)) + 64);
    ExFreePoolWithTag(v19, 0);
  }
  v20 = MiGetVadWakeList(a1, 64, v18);
  v21 = v20;
  if ( v20 )
  {
    v26 = v20[2];
    if ( (v26 & 0x3F) == 0 )
      v9 = 0;
    PsReturnProcessNonPagedPoolQuota(a2, 8 * (v9 + (v26 >> 6)) + 64);
    ExFreePoolWithTag(v21, 0);
  }
  MiFreePhysicalView((__int64)a2, a1);
  if ( v7 == 1 && (*(_BYTE *)(a1 + 48) & 7) != 7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&a2[2].Affinity.Bitmap[5], -(__int64)v11);
  if ( (*(_DWORD *)(a1 + 48) & 7) != 7 && (v22 = 74, _bittest(&v22, *(_DWORD *)(a1 + 48) & 7)) || v7 == 1 )
  {
    v27 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
    v28 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
    v29 = MiResidentPagesForSpan(v27, v28);
    if ( v7 == 1 )
    {
      PteAddress = MiGetPteAddress(v27);
      v32 = MiGetPteAddress(v28);
      v29 -= ((unsigned __int64)(8 * ((v32 - PteAddress) >> 3) + 8) >> 12)
           + ((unsigned __int64)(((8 * (unsigned __int16)((v32 - PteAddress) >> 3) + 8) & 0xFFF)
                               + (unsigned int)(PteAddress & 0xFFF)
                               + 4095) >> 12);
    }
    if ( v8 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v29);
      _InterlockedExchangeAdd64(&qword_1402FF4B0, v29);
    }
    else
    {
      MiReturnPartitionResidentAvailable((__int64)v8, v29);
    }
  }
}
