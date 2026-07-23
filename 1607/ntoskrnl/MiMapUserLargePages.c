/*
 * XREFs of MiMapUserLargePages @ 0x140662C0C
 * Callers:
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiCopyLargeVad @ 0x1406623D0 (MiCopyLargeVad.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiGetPdeAddress @ 0x1400847A4 (MiGetPdeAddress.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     MiReturnPartitionResidentAvailable @ 0x140171DE4 (MiReturnPartitionResidentAvailable.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401E340C (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1401EC518 (MiInitPerfMemoryFlags.c)
 *     MiInsertLargeUserMapping @ 0x1401F5498 (MiInsertLargeUserMapping.c)
 *     MiAllocateLargeZeroPages @ 0x1406621D4 (MiAllocateLargeZeroPages.c)
 *     MiDemotePfnListChain @ 0x1406626E0 (MiDemotePfnListChain.c)
 *     MiFreeLargeZeroPages @ 0x140662A14 (MiFreeLargeZeroPages.c)
 */

__int64 __fastcall MiMapUserLargePages(__int64 a1, int a2)
{
  int *ProcessPartition; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int16 *v12; // r15
  unsigned __int16 *v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  unsigned __int64 PteAddress; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rax
  __int64 v25; // rbx
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r15
  unsigned int v28; // r8d
  _QWORD *v29; // rcx
  unsigned __int64 v30; // rdi
  unsigned int inited; // eax
  _KPROCESS *Process; // [rsp+30h] [rbp-20h]
  __int128 v33; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v34; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v35; // [rsp+A0h] [rbp+50h]
  unsigned __int64 v36; // [rsp+A8h] [rbp+58h]

  v33 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  ProcessPartition = MiGetProcessPartition((__int64)Process);
  v6 = *((_QWORD *)ProcessPartition + 808) - 160LL;
  v7 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
     - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
     + 1;
  v35 = v7;
  if ( (__int64)v7 > v6 )
    return 3221225626LL;
  if ( a2
    || (*(_DWORD *)(a1 + 48) & 0x8000) == 0 && (a2 = (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) >> 20) & 0x3F) != 0 )
  {
    v9 = a2 - 1;
  }
  else
  {
    v9 = *(_DWORD *)(KiProcessorBlock[*(unsigned int *)(v5 + 588)] + 23524);
  }
  if ( !(unsigned int)MiChargeResident(ProcessPartition, v7, 0LL) )
    return 3221225626LL;
  v10 = (*(_DWORD *)(a1 + 48) >> 3) & 0x1F;
  v34 = v7;
  v11 = (unsigned int)MmMakeProtectNotWriteCopy[v10];
  v12 = (unsigned __int16 *)((char *)qword_1403269E8 + 2 * v9 * (unsigned __int16)KeNumberNodes);
  v13 = &v12[(unsigned __int16)KeNumberNodes];
  MiAllocateLargeZeroPages((int)ProcessPartition, (__int64 *)&v34, v9, MmMakeProtectNotWriteCopy[v10], (__int64)&v33);
  v14 = v34;
  if ( v34 )
  {
    do
    {
      if ( ++v12 == v13 )
        break;
      v9 = *v12;
      MiAllocateLargeZeroPages((int)ProcessPartition, (__int64 *)&v34, v9, v11, (__int64)&v33);
      v14 = v34;
    }
    while ( v34 );
    if ( v14 )
    {
      MiFreeLargeZeroPages((__int64)ProcessPartition, (_QWORD **)&v33);
      if ( ProcessPartition == MiSystemPartition )
        MiReturnResidentAvailable(v7);
      else
        MiReturnPartitionResidentAvailable((__int64)ProcessPartition, v7);
      return 3221225626LL;
    }
  }
  v15 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v16 = MmProtectToPteMask[v11] | 0xFFFFFFFFF021LL;
  v36 = v15;
  PteAddress = MiGetPteAddress(v15);
  if ( PteAddress >= 0xFFFFF6FB40000000uLL && PteAddress <= 0xFFFFF6FB7FFFFFFFuLL )
    v16 &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
  v18 = MiGetPteAddress(0x7FFFFFFEFFFFuLL);
  if ( v19 <= v18 && (v20 = MiGetPteAddress(0LL), v21 >= v20)
    || (PdeAddress = MiGetPdeAddress(0LL), v21 >= PdeAddress) && (v24 = MiGetPdeAddress(v23), v21 <= v24)
    || v21 >= 0xFFFFF6FB7DA00000uLL && v21 <= 0xFFFFF6FB7DAFFFF8uLL
    || v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v16 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v21) )
    v16 |= 0x100uLL;
  if ( (v11 & 4) != 0 )
    v16 |= 0x42uLL;
  v25 = v16 | 0xA0;
  v26 = MiGetPdeAddress(v15);
  if ( v26 < v26 + 8 * (v7 >> 9) )
  {
    v27 = v26 + 8 * (v7 >> 9);
    do
    {
      v28 = 1;
      LODWORD(v34) = 1;
      if ( (v26 & 0xFFF) != 0 || (__int64)((v27 - v26) & 0xFFFFFFFFFFFFFFF8uLL) < 4096 || !(_QWORD)v33 )
      {
        if ( !*((_QWORD *)&v33 + 1) )
        {
          MiDemotePfnListChain(&v33);
          v28 = v34;
        }
      }
      else
      {
        v28 = 0;
      }
      v29 = (_QWORD *)*((_QWORD *)&v33 + v28);
      *((_QWORD *)&v33 + v28) = *v29;
      v30 = MiLargePageSizes[v28];
      v25 ^= (v25 ^ (((__int64)(v29 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
      MiInsertLargeUserMapping((__int64)(v26 << 25) >> 16 << 25 >> 16, v25, v9, v28);
      v26 += 8 * (v30 >> 9);
    }
    while ( v26 < v27 );
    v7 = v35;
    v15 = v36;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 13);
    MiLogPerfMemoryRangeEvent(v15, (__int64)Process, inited, v7);
  }
  return 0LL;
}
