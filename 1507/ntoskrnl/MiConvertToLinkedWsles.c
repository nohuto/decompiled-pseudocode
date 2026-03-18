/*
 * XREFs of MiConvertToLinkedWsles @ 0x1400AD49C
 * Callers:
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiMapNewWorkingSetPage @ 0x140068BC8 (MiMapNewWorkingSetPage.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiInsertWsle @ 0x1400AD8A0 (MiInsertWsle.c)
 *     MiReleaseWsle @ 0x1400AE200 (MiReleaseWsle.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiRemoveWorkingSetPages @ 0x1401089A0 (MiRemoveWorkingSetPages.c)
 *     MiComputeWslePagesNeeded @ 0x140130ED0 (MiComputeWslePagesNeeded.c)
 *     MiDeleteExcessWorkingSetPages @ 0x1402135DC (MiDeleteExcessWorkingSetPages.c)
 */

__int64 __fastcall MiConvertToLinkedWsles(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // ecx
  __int64 v5; // rdx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdi
  __int16 *VmPartition; // rbp
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r13
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  __int64 v24; // rbp
  __int64 v26; // r9

  v2 = *(_QWORD *)(a1 + 184);
  v4 = (*(_DWORD *)(v2 + 496) + 16 * *(_DWORD *)(a1 + 120)) & 0xFFF;
  if ( !v4 || ((4096 - v4) & 0xFFFFFFF0) < 0x80 || (*(_BYTE *)(a1 + 219) & 2) != 0 )
    return 0LL;
  MiRemoveWorkingSetPages(a1, a2);
  v5 = *(_QWORD *)(v2 + 496);
  v6 = v5 + 16LL * *(_QWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 216) & 7) != 0 )
    v6 += 16LL;
  v7 = v5 + 8 * (*(_QWORD *)(v2 + 32) + 1LL);
  v8 = v7;
  v9 = 0LL;
  *(_DWORD *)(v2 + 64) = 16;
  VmPartition = MiGetVmPartition(a1);
  if ( v11 > v12 && (*(_BYTE *)(a1 + 216) & 7) != 1 )
  {
    v13 = MiComputeWslePagesNeeded(v12, v11);
    v9 = v13;
    if ( v13 )
    {
      if ( (unsigned int)MiChargeCommit((__int64)VmPartition, v13, 0) )
      {
        if ( (unsigned int)MiChargeResident(VmPartition, v9, 1024LL, v26) )
        {
          if ( VmPartition == MiSystemPartition )
            _InterlockedExchangeAdd64(&qword_14034F960, v9);
          *(_QWORD *)(a1 + 144) += v9;
          goto LABEL_9;
        }
        *(_DWORD *)(v2 + 64) = 8;
        MiReturnCommit(VmPartition, v9);
      }
      else
      {
        *(_DWORD *)(v2 + 64) = 8;
      }
      return 0LL;
    }
  }
LABEL_9:
  if ( v7 < v6 )
  {
    v14 = ((v6 - v7) >> 12) + 1024 + (((v6 - v7) & 0xFFF) != 0);
    while ( *((_QWORD *)VmPartition + 688) > v14 && (unsigned int)MiMapNewWorkingSetPage(a1, v8) )
    {
      v8 += 4096LL;
      --v14;
      if ( v8 >= v6 )
        goto LABEL_14;
    }
    *(_DWORD *)(v2 + 64) = 8;
    if ( v8 != v7 )
      MiDeleteExcessWorkingSetPages(
        a1,
        ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( v9 )
    {
      MiReturnCommit(VmPartition, v9);
      if ( VmPartition == MiSystemPartition )
      {
        MiReturnResidentAvailable(v9);
        _InterlockedExchangeAdd64(&qword_14034F968, v9);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)VmPartition + 696, v9);
      }
      *(_QWORD *)(a1 + 144) -= v9;
    }
    return 0LL;
  }
LABEL_14:
  v15 = (_QWORD *)(v2 + 248);
  v16 = 16LL;
  do
  {
    *(v15 - 1) = 0xFFFFFFFFFLL;
    *v15 = 0xFFFFFFFFFLL;
    v15 += 2;
    --v16;
  }
  while ( v16 );
  v17 = *(_QWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
    --v17;
  v18 = *(_QWORD *)(v2 + 496);
  v19 = (_QWORD *)(v18 + 8 * v17);
  v20 = (_QWORD *)(v18 + 16 * v17);
  if ( (unsigned __int64)v19 >= v18 )
  {
    do
    {
      *v20 = *v19;
      if ( (*(_BYTE *)v19 & 1) == 0 )
        break;
      MiInsertWsle(v2, v20, 1LL);
      --v19;
      v20 = (_QWORD *)(v21 - 16);
    }
    while ( (unsigned __int64)v19 >= *(_QWORD *)(v2 + 496) );
  }
  *(_QWORD *)v2 = 0xFFFFFFFFFLL;
  v22 = *(_QWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 216) & 7) != 0 )
    ++v22;
  v23 = (unsigned __int64)(4096 - ((*(_DWORD *)(v2 + 496) + 16 * (_DWORD)v22) & 0xFFFu)) >> 4;
  v24 = v22 + v23 - 1;
  for ( *(_QWORD *)(v2 + 32) = v24; v23; --v23 )
    MiReleaseWsle(v24--, a1, 0LL, 0LL);
  return 1LL;
}
