/*
 * XREFs of MiRemoveVadCharges @ 0x1404B9120
 * Callers:
 *     MiFinishVadDeletion @ 0x14008C870 (MiFinishVadDeletion.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x1400095C8 (MiReturnFullProcessCharges.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetVadWakeList @ 0x14008CFD0 (MiGetVadWakeList.c)
 *     MiFreePhysicalView @ 0x14008D108 (MiFreePhysicalView.c)
 *     MiFillCommitReturnInfo @ 0x14008D1C8 (MiFillCommitReturnInfo.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiDereferenceTebVad @ 0x1401273DC (MiDereferenceTebVad.c)
 *     MiReturnPartitionResidentAvailable @ 0x140195D78 (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiResidentPagesForSpan @ 0x14054BA90 (MiResidentPagesForSpan.c)
 */

void __fastcall MiRemoveVadCharges(__int64 a1, ULONG_PTR a2)
{
  __int16 *ProcessPartition; // rax
  int v5; // ecx
  int v6; // r15d
  __int16 *v7; // r12
  int v8; // ebp
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // edx
  __int64 *v13; // rax
  __int64 *v14; // rdi
  __int64 *v15; // rax
  __int64 *v16; // rdi
  int v17; // ecx
  unsigned __int64 v18; // rax
  __int64 *VadWakeList; // rax
  __int64 *v20; // rdi
  unsigned __int64 v21; // rdx
  __int64 v22; // r15
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rbx
  void *v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]
  char v30[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v31; // [rsp+38h] [rbp-30h]
  __int64 v32; // [rsp+40h] [rbp-28h]

  ProcessPartition = MiGetProcessPartition(a2);
  v5 = *(_DWORD *)(a1 + 48);
  v6 = 0;
  v7 = ProcessPartition;
  v8 = 0;
  if ( (v5 & 0x8000) != 0 )
  {
    if ( (v5 & 7) != 5 )
      goto LABEL_3;
  }
  else if ( (*(_BYTE *)(a1 + 67) & 1) == 0 )
  {
    goto LABEL_3;
  }
  v8 = 1;
LABEL_3:
  v9 = *(unsigned int *)(a1 + 52);
  LODWORD(v9) = v9 & 0x7FFFFFFF;
  v10 = v9 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( v10 >= 0x7FFFFFFFELL )
  {
    v10 = 0LL;
    goto LABEL_7;
  }
  v31 = *(_QWORD *)(a1 + 8);
  v32 = *(_QWORD *)a1;
  MiFillCommitReturnInfo(v10, (__int64)v30, &v28);
  if ( v28 )
    MiReturnFullProcessCharges(a2, v28);
  v11 = v29;
  if ( v29 )
  {
    v18 = *(_QWORD *)(a2 + 1496);
    if ( v18 )
    {
      if ( v29 <= v18 )
      {
        *(_QWORD *)(a2 + 1496) = v18 - v29;
        goto LABEL_7;
      }
      v11 = v29 - v18;
      *(_QWORD *)(a2 + 1496) = 0LL;
      v29 = v11;
    }
    if ( v11 )
      MiReturnCommit((__int64)v7, v11);
  }
LABEL_7:
  v12 = 0;
  if ( (*(_DWORD *)(a1 + 48) & 0x4000) != 0 )
    v12 = 2;
  if ( v8 == 1 )
    v12 |= 0x10u;
  if ( v12 )
  {
    VadWakeList = MiGetVadWakeList(a1, v12);
    if ( VadWakeList )
    {
      do
      {
        v20 = (__int64 *)*VadWakeList;
        ExFreePoolWithTag(VadWakeList, 0);
        VadWakeList = v20;
      }
      while ( v20 );
    }
  }
  v13 = MiGetVadWakeList(a1, 8);
  v14 = v13;
  if ( v13 )
  {
    v26 = (void *)v13[2];
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    ExFreePoolWithTag(v14, 0);
  }
  v15 = MiGetVadWakeList(a1, 4);
  v16 = v15;
  if ( v15 )
  {
    v21 = v15[2];
    LOBYTE(v6) = (v21 & 0x3F) != 0;
    PsReturnProcessNonPagedPoolQuota(a2, 8 * (v6 + (v21 >> 6)) + 40);
    ExFreePoolWithTag(v16, 0);
  }
  MiFreePhysicalView(a2, a1);
  if ( (*(_BYTE *)(a1 + 50) & 1) != 0 )
    MiDereferenceTebVad(a1);
  if ( v8 == 1 && (*(_BYTE *)(a1 + 48) & 7) != 7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1576), -(__int64)v10);
  if ( (*(_DWORD *)(a1 + 48) & 7) != 7 && (v17 = 74, _bittest(&v17, *(_DWORD *)(a1 + 48) & 7)) || v8 == 1 )
  {
    v22 = *(unsigned int *)(a1 + 24);
    v23 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
    v24 = v22 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    v25 = MiResidentPagesForSpan(v24 << 12, (v23 << 12) | 0xFFF);
    if ( v8 == 1 )
    {
      v27 = (__int64)(8 * (v23 & 0xFFFFFFFFFLL) - 8 * (v24 & 0xFFFFFFFFFLL)) >> 3;
      v25 -= ((unsigned __int64)(8 * v27 + 8) >> 12)
           + ((unsigned __int64)(((8 * (_WORD)v27 + 8) & 0xFFF) + ((8 * (_WORD)v22) & 0xFF8u) + 4095) >> 12);
    }
    if ( v7 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v25);
      _InterlockedExchangeAdd64(&qword_14034F930, v25);
    }
    else
    {
      MiReturnPartitionResidentAvailable((__int64)v7, v25);
    }
  }
}
