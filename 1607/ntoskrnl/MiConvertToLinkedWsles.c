/*
 * XREFs of MiConvertToLinkedWsles @ 0x1400A016C
 * Callers:
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiConvertPartitionWs @ 0x1401F116C (MiConvertPartitionWs.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiInitializeWsleAgeHeads @ 0x1400A04C4 (MiInitializeWsleAgeHeads.c)
 *     MiComputeWslePagesNeeded @ 0x1400A04EC (MiComputeWslePagesNeeded.c)
 *     MiInsertWsle @ 0x1400DFF30 (MiInsertWsle.c)
 *     MiReleaseWsle @ 0x1400E02D0 (MiReleaseWsle.c)
 *     MiMoveWorkingFreeToTail @ 0x1400FBD94 (MiMoveWorkingFreeToTail.c)
 *     MiRemoveWorkingSetPages @ 0x1400FC4D0 (MiRemoveWorkingSetPages.c)
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 */

__int64 __fastcall MiConvertToLinkedWsles(ULONG_PTR a1)
{
  __int64 v2; // rcx
  ULONG_PTR *SharedWorkingSetList; // rdi
  int v4; // ecx
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // r12
  ULONG_PTR v7; // r15
  ULONG_PTR v8; // r14
  unsigned __int64 v9; // rsi
  int *v10; // rbp
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  LONG *SharedVm; // r13
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  _QWORD *v19; // r14
  _QWORD *v20; // rsi
  __int64 v21; // rcx
  unsigned __int64 v22; // rbp
  ULONG_PTR v23; // rsi
  unsigned __int64 v24; // [rsp+60h] [rbp+8h]
  __int64 v25; // [rsp+68h] [rbp+10h]

  v25 = *(_QWORD *)(a1 + 16);
  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  v4 = (*((_DWORD *)SharedWorkingSetList + 20) + 16 * *(_DWORD *)(v2 + 128)) & 0xFFF;
  if ( !v4 || ((4096 - v4) & 0xFFFFFFF0) < 0x80 || (*(_BYTE *)(a1 + 187) & 2) != 0 )
    return 0LL;
  MiRemoveWorkingSetPages(a1);
  MiMoveWorkingFreeToTail(a1);
  v5 = SharedWorkingSetList[10];
  v6 = v5 + 16LL * *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    v6 += 16LL;
  v7 = v5 + 8 * (SharedWorkingSetList[3] + 1);
  v8 = v7;
  v9 = 0LL;
  *((_DWORD *)SharedWorkingSetList + 8) = 16;
  v10 = MiPartitionIdToPointer(*(_WORD *)(a1 + 164));
  SharedVm = MiGetSharedVm(a1);
  if ( v11 > v12 && (*(_BYTE *)(a1 + 184) & 7) != 1 )
  {
    v14 = MiComputeWslePagesNeeded(v12, v11);
    v9 = v14;
    if ( v14 )
    {
      if ( !(unsigned int)MiChargeCommit((__int64)v10, v14, 0) )
      {
        *((_DWORD *)SharedWorkingSetList + 8) = 8;
        return 0LL;
      }
      if ( !(unsigned int)MiChargeResident(v10, v9, 1056LL) )
      {
        *((_DWORD *)SharedWorkingSetList + 8) = 8;
        MiReturnCommit((__int64)v10, v9);
        return 0LL;
      }
      *((_QWORD *)SharedVm + 6) += v9;
    }
  }
  if ( v7 < v6 )
  {
    v16 = ((v6 - v7) >> 12) + 1056 + (((v6 - v7) & 0xFFF) != 0);
    v24 = v16;
    while ( *((_QWORD *)v10 + 808) > v16 && (unsigned int)MiMapNewWorkingSetPage(a1, v8, 1LL) )
    {
      v8 += 4096LL;
      v16 = --v24;
      if ( v8 >= v6 )
        goto LABEL_20;
    }
    *((_DWORD *)SharedWorkingSetList + 8) = 8;
    if ( v8 != v7 )
      MiDeletePteRange(
        a1,
        ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        16LL);
    if ( v9 )
    {
      MiReturnCommit((__int64)v10, v9);
      if ( v10 == MiSystemPartition )
        MiReturnResidentAvailable(v9);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 816, v9);
      *((_QWORD *)SharedVm + 6) -= v9;
    }
    return 0LL;
  }
LABEL_20:
  MiInitializeWsleAgeHeads(v25);
  v17 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    --v17;
  v18 = SharedWorkingSetList[10];
  v19 = (_QWORD *)(v18 + 8 * v17);
  v20 = (_QWORD *)(v18 + 16 * v17);
  if ( (unsigned __int64)v19 >= v18 )
  {
    do
    {
      *v20 = *v19;
      if ( (*(_BYTE *)v19 & 1) == 0 )
        break;
      MiInsertWsle(a1, v20, 1LL);
      --v19;
      v20 -= 2;
    }
    while ( (unsigned __int64)v19 >= SharedWorkingSetList[10] );
  }
  *SharedWorkingSetList = 0xFFFFFFFFFLL;
  v21 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    ++v21;
  v22 = (unsigned __int64)(4096 - ((*((_DWORD *)SharedWorkingSetList + 20) + 16 * (_DWORD)v21) & 0xFFFu)) >> 4;
  v23 = v21 + v22 - 1;
  SharedWorkingSetList[3] = v23;
  if ( SharedWorkingSetList[2] > v23 )
    SharedWorkingSetList[2] = v23;
  for ( ; v22; --v22 )
    MiReleaseWsle(v23--, a1, 0LL, 0LL);
  return 1LL;
}
