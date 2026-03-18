/*
 * XREFs of KiConfigureSchedulingInformation @ 0x1403FA120
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140401918 (KiInitializeDynamicProcessorDpc.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 */

__int64 __fastcall KiConfigureSchedulingInformation(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  unsigned int v10; // edi
  USHORT v11; // cx
  unsigned __int16 Group; // si
  __int64 v13; // r11
  int v14; // r13d
  unsigned int v15; // eax
  unsigned __int64 Mask; // rdi
  int v17; // ebp
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  unsigned __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v27; // cl
  unsigned __int16 v28; // r9
  unsigned __int64 v29; // r8
  __int64 v30; // r14
  int v31; // ebx
  unsigned __int64 v32; // rdx
  __int64 v33; // r10
  __int64 v34; // rdx
  char v35; // al
  unsigned __int64 v36; // rcx
  unsigned __int8 CurrentIrql; // [rsp+20h] [rbp-68h]
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-60h] BYREF
  USHORT Count; // [rsp+98h] [rbp+10h] BYREF
  int v42; // [rsp+A0h] [rbp+18h]
  __int64 v43; // [rsp+A8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 24508);
  v4 = a1;
  if ( v2 )
    v5 = *(_QWORD *)(a1 + 8LL * (v2 - 1) + 24816);
  else
    v5 = *(_QWORD *)(a1 + 1608);
  LODWORD(v6) = *(unsigned __int8 *)(a1 + 1617);
  v7 = 0LL;
  *(_QWORD *)(a1 + 24808) = v5;
  if ( v2 )
  {
    while ( (~*(_QWORD *)(a1 + 24792) & *(_QWORD *)(a1 + 8 * v7 + 24816)) == 0LL )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v2 )
        goto LABEL_9;
    }
    v8 = *(_QWORD *)(a1 + 8 * v7 + 24816);
    _BitScanForward64((unsigned __int64 *)&v6, v8);
    *(_QWORD *)(v4 + 24800) = v8;
  }
LABEL_9:
  v9 = *(_QWORD *)(v4 + 1600);
  v43 = v9;
  *(_DWORD *)(v4 + 24788) = v6;
  if ( !a2 && *(_DWORD *)(v4 + 36) == *(_DWORD *)(v9 + 164) )
  {
    v10 = KiMaximumSharedReadyQueueSize;
    if ( !KiMaximumSharedReadyQueueSize )
      v10 = 1;
    if ( (v10 & 0x100) != 0 )
      v10 &= ~0x100u;
    if ( v10 > 0x40 )
      v10 = 64;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v11 = *(_WORD *)(v9 + 146);
    *(_QWORD *)(v9 + 152) = 0LL;
    KeQueryNodeActiveAffinity(v11, &Affinity, &Count);
    Group = Affinity.Group;
    v13 = *(_QWORD *)(v4 + 24776);
    v14 = Affinity.Group;
    v42 = Affinity.Group;
    v15 = (v10 + Count - 1) / v10;
    Mask = Affinity.Mask;
    v17 = 0;
    v18 = Count % v15;
    v19 = Count / v15;
    while ( Mask )
    {
LABEL_21:
      _BitScanForward64(&v20, Mask);
      v14 = Group;
      Mask &= ~(1LL << v20);
      v21 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * Group + (unsigned __int8)v20]];
      if ( v17 == *(unsigned __int8 *)(v13 + 595) )
      {
        v13 = *(_QWORD *)(v21 + 24776);
        v17 = 0;
      }
      if ( !v17 )
      {
        *(_BYTE *)(v13 + 595) = v19;
        if ( v18 )
        {
          --v18;
          *(_BYTE *)(v13 + 595) = v19 + 1;
        }
      }
      v22 = *(_QWORD *)(v21 + 1608);
      ++v17;
      *(_QWORD *)(v21 + 24776) = v13;
      *(_QWORD *)(v13 + 600) |= v22;
      v23 = *(_QWORD *)(v21 + 16);
      *(_QWORD *)(v21 + 56) = v13
                            + *(unsigned __int8 *)(v21 + 1617)
                            - (unsigned int)*(unsigned __int8 *)(v13 + 593)
                            + 528LL;
      if ( !v23 )
        v23 = *(_QWORD *)(v21 + 8);
      if ( *(char *)(v23 + 195) >= 16
        || !*(_QWORD *)(v23 + 104)
        || (v24 = *(_QWORD *)(v23 + 104)) == 0
        || (v25 = *(unsigned int *)(v21 + 1624) + v24) == 0
        || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v23, v25, 0),
            v27 = 1,
            !ThreadEffectiveRankNonZero) )
      {
        v27 = *(_BYTE *)(v23 + 195);
      }
      **(_BYTE **)(v21 + 56) = v27;
    }
    while ( ++Group < (unsigned int)(v14 + 1) )
    {
      Mask = *(_QWORD *)(8LL * Group + 8);
      if ( Mask )
        goto LABEL_21;
    }
    v28 = Affinity.Group;
    v29 = Affinity.Mask;
    v30 = v43;
    v31 = v42;
    while ( 1 )
    {
      while ( v29 )
      {
        _BitScanForward64(&v32, v29);
        v31 = v28;
        v29 &= ~(1LL << v32);
        v33 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v28 + (unsigned __int8)v32]];
        v34 = *(_QWORD *)(v33 + 24776);
        if ( *(_BYTE *)(v34 + 595) > 1u )
          *(_QWORD *)(v33 + 24768) = *(_QWORD *)(v34 + 600);
        v35 = *(_BYTE *)(v33 + 1617);
        if ( v35 == *(_BYTE *)(v34 + 593) && *(_BYTE *)(v34 + 595) > 1u )
        {
          *(_DWORD *)(v33 + 24784) = 1;
          *(_BYTE *)(v34 + 596) = v35;
          *(_QWORD *)(v30 + 152) |= *(_QWORD *)(v33 + 1608);
          _BitScanReverse64(&v36, *(_QWORD *)(v34 + 600));
          *(_BYTE *)(v34 + 592) = v36 - *(_BYTE *)(v34 + 593) + 1;
        }
      }
      if ( ++v28 >= (unsigned int)(v31 + 1) )
        break;
      v29 = *(_QWORD *)(8LL * v28 + 8);
    }
    __writecr8(CurrentIrql);
    v4 = a1;
  }
  return KiConfigureCpuSetSchedulingInformation(v4);
}
