/*
 * XREFs of MiConvertToLinkedWsles @ 0x1400B5930
 * Callers:
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 * Callees:
 *     MiMapNewWorkingSetPage @ 0x140017418 (MiMapNewWorkingSetPage.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiInsertWsle @ 0x1400B7450 (MiInsertWsle.c)
 *     MiRemoveWorkingSetPages @ 0x1400B94A0 (MiRemoveWorkingSetPages.c)
 *     MiReleaseWsle @ 0x1400BAAFC (MiReleaseWsle.c)
 *     MiMoveWorkingFreeToTail @ 0x1400E8DE8 (MiMoveWorkingFreeToTail.c)
 *     MiComputeWslePagesNeeded @ 0x1400F336C (MiComputeWslePagesNeeded.c)
 *     MiDeleteExcessWorkingSetPages @ 0x1400F46A0 (MiDeleteExcessWorkingSetPages.c)
 */

__int64 __fastcall MiConvertToLinkedWsles(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rdi
  int v3; // ecx
  __int64 v4; // rdx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  int *VmPartition; // rbp
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r13
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  _QWORD *v18; // rsi
  _QWORD *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rsi

  v1 = *(_QWORD *)(BugCheckParameter2 + 184);
  v3 = (*(_DWORD *)(v1 + 496) + 16 * *(_DWORD *)(BugCheckParameter2 + 120)) & 0xFFF;
  if ( !v3 || ((4096 - v3) & 0xFFFFFFF0) < 0x80 || (*(_BYTE *)(BugCheckParameter2 + 219) & 2) != 0 )
    return 0LL;
  MiRemoveWorkingSetPages(BugCheckParameter2);
  MiMoveWorkingFreeToTail(BugCheckParameter2);
  v4 = *(_QWORD *)(v1 + 496);
  v5 = v4 + 16LL * *(_QWORD *)(BugCheckParameter2 + 120);
  if ( (*(_BYTE *)(BugCheckParameter2 + 216) & 7) != 0 )
    v5 += 16LL;
  v6 = v4 + 8 * (*(_QWORD *)(v1 + 32) + 1LL);
  v7 = v6;
  v8 = 0LL;
  *(_DWORD *)(v1 + 64) = 16;
  VmPartition = MiGetVmPartition(BugCheckParameter2);
  if ( v10 > v11 && (*(_BYTE *)(BugCheckParameter2 + 216) & 7) != 1 )
  {
    v12 = MiComputeWslePagesNeeded(v11, v10);
    v8 = v12;
    if ( v12 )
    {
      if ( (unsigned int)MiChargeCommit((unsigned __int64)VmPartition, v12, 0LL) )
      {
        if ( (unsigned int)MiChargeResident(VmPartition, v8, 1056LL) )
        {
          if ( VmPartition == MiSystemPartition )
            _InterlockedExchangeAdd64(&qword_1402FF4E0, v8);
          *(_QWORD *)(BugCheckParameter2 + 144) += v8;
          goto LABEL_9;
        }
        *(_DWORD *)(v1 + 64) = 8;
        MiReturnCommit((__int64)VmPartition, v8);
      }
      else
      {
        *(_DWORD *)(v1 + 64) = 8;
      }
      return 0LL;
    }
  }
LABEL_9:
  if ( v6 < v5 )
  {
    v13 = ((v5 - v6) >> 12) + 1056 + (((v5 - v6) & 0xFFF) != 0);
    while ( *((_QWORD *)VmPartition + 736) > v13 && (unsigned int)MiMapNewWorkingSetPage(BugCheckParameter2, v7) )
    {
      v7 += 4096LL;
      --v13;
      if ( v7 >= v5 )
        goto LABEL_14;
    }
    *(_DWORD *)(v1 + 64) = 8;
    if ( v7 != v6 )
      MiDeleteExcessWorkingSetPages(
        BugCheckParameter2,
        ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( v8 )
    {
      MiReturnCommit((__int64)VmPartition, v8);
      if ( VmPartition == MiSystemPartition )
      {
        MiReturnResidentAvailable(v8);
        _InterlockedExchangeAdd64(&qword_1402FF4E8, v8);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)VmPartition + 744, v8);
      }
      *(_QWORD *)(BugCheckParameter2 + 144) -= v8;
    }
    return 0LL;
  }
LABEL_14:
  v14 = (_QWORD *)(v1 + 248);
  v15 = 16LL;
  do
  {
    *(v14 - 1) = 0xFFFFFFFFFLL;
    *v14 = 0xFFFFFFFFFLL;
    v14 += 2;
    --v15;
  }
  while ( v15 );
  v16 = *(_QWORD *)(BugCheckParameter2 + 120);
  if ( (*(_BYTE *)(BugCheckParameter2 + 216) & 7) == 0 )
    --v16;
  v17 = *(_QWORD *)(v1 + 496);
  v18 = (_QWORD *)(v17 + 8 * v16);
  v19 = (_QWORD *)(v17 + 16 * v16);
  if ( (unsigned __int64)v18 >= v17 )
  {
    do
    {
      *v19 = *v18;
      if ( (*(_BYTE *)v18 & 1) == 0 )
        break;
      MiInsertWsle(v1, v19, 1LL);
      --v18;
      v19 = (_QWORD *)(v20 - 16);
    }
    while ( (unsigned __int64)v18 >= *(_QWORD *)(v1 + 496) );
  }
  *(_QWORD *)v1 = 0xFFFFFFFFFLL;
  v21 = *(_QWORD *)(BugCheckParameter2 + 120);
  if ( (*(_BYTE *)(BugCheckParameter2 + 216) & 7) != 0 )
    ++v21;
  v22 = (unsigned __int64)(4096 - ((*(_DWORD *)(v1 + 496) + 16 * (_DWORD)v21) & 0xFFFu)) >> 4;
  v23 = v21 + v22 - 1;
  *(_QWORD *)(v1 + 32) = v23;
  if ( *(_QWORD *)(v1 + 16) > v23 )
    *(_QWORD *)(v1 + 16) = v23;
  for ( ; v22; --v22 )
    MiReleaseWsle(v23--, BugCheckParameter2, 0LL, 0LL);
  return 1LL;
}
