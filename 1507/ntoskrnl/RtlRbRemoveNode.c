/*
 * XREFs of RtlRbRemoveNode @ 0x1400F6290
 * Callers:
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     KeAccumulateTicks @ 0x1400A9AB0 (KeAccumulateTicks.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400D3690 (KiRemoveThreadFromScbQueue.c)
 *     KiSetClockInterval @ 0x1400D6020 (KiSetClockInterval.c)
 *     KiUpdateGroupSchedulingRank @ 0x1400EB230 (KiUpdateGroupSchedulingRank.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400ECD50 (KiTransitionSchedulingGroupGeneration.c)
 *     KiAddThreadToScbQueue @ 0x1400EDC94 (KiAddThreadToScbQueue.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400F4BA0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiRemoveTimer2 @ 0x1400F5CA0 (KiRemoveTimer2.c)
 *     KiAbEntryRemoveFromTree @ 0x1400F5E10 (KiAbEntryRemoveFromTree.c)
 *     PfSnNameRemove @ 0x140112FB8 (PfSnNameRemove.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1401203A0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiComputeGroupSchedulingRank @ 0x140121494 (KiComputeGroupSchedulingRank.c)
 *     KeSetSchedulingGroupRankBias @ 0x1401217F0 (KeSetSchedulingGroupRankBias.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140128E58 (KiRecomputeGroupSchedulingRank.c)
 *     VmpRemoveMemoryRange @ 0x14025BC74 (VmpRemoveMemoryRange.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1404CED94 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404D2F6C (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlRbRemoveNode(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  _QWORD *v4; // r10
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r9
  BOOL v7; // ebx
  unsigned __int64 v8; // rax
  char v9; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // rcx
  __int64 v13; // rax
  _BOOL8 v14; // rdi
  __int64 v15; // r10
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  _BOOL8 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // r10
  unsigned __int64 *v27; // rdi
  unsigned __int64 v28; // r10
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  unsigned int v31; // ebx
  __int64 v32; // r8
  unsigned __int64 *v33; // rbx
  unsigned __int64 *v34; // rsi
  unsigned __int64 v35; // r8
  __int64 v36; // rbp

  v2 = *a2;
  v4 = (_QWORD *)a2[1];
  if ( *a2 )
  {
    if ( v4 )
    {
      v5 = a2[1];
      v6 = v5;
      v7 = 1;
      if ( *v4 )
      {
        v7 = 0;
        do
        {
          v6 = v5;
          v5 = *(_QWORD *)v5;
        }
        while ( *(_QWORD *)v5 );
      }
      *(_QWORD *)v5 = v2;
      v19 = *(_QWORD *)(v2 + 16);
      if ( (unsigned __int64 *)(v19 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v2 + 16) = v5 | v19 & 3;
      v20 = v4[2];
      if ( (unsigned __int64 *)(v20 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      v4[2] = v5 | v20 & 3;
      v2 = *(_QWORD *)(v5 + 8);
      v21 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      *(_QWORD *)(v5 + 8) = v4;
      if ( v21 != v6 )
        __fastfail(0x1Du);
      v9 = *(_BYTE *)(v5 + 16) & 1;
      *(_QWORD *)(v5 + 16) = a2[2];
      v22 = a2[2];
      if ( v22 )
      {
        v23 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
        v24 = *(_QWORD *)(v23 + 8) == (_QWORD)a2;
        if ( *(unsigned __int64 **)(v23 + 8 * v24) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v23 + 8 * v24) = v5;
      }
      else
      {
        if ( (unsigned __int64 *)*a1 != a2 )
          __fastfail(0x1Du);
        *a1 = v5;
      }
      goto LABEL_16;
    }
  }
  else
  {
    v2 = a2[1];
  }
  v5 = (unsigned __int64)a2;
  v6 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v6 )
  {
    if ( v2 )
      *(_QWORD *)(v2 + 16) = 0LL;
    if ( (unsigned __int64 *)*a1 != a2 )
      __fastfail(0x1Du);
    a1[1] = v2;
    *a1 = v2;
    return;
  }
  if ( *(unsigned __int64 **)(v6 + 8) == a2 )
  {
    v7 = 1;
  }
  else
  {
    if ( *(unsigned __int64 **)v6 != a2 )
      __fastfail(0x1Du);
    v7 = 0;
    if ( (unsigned __int64 *)a1[1] == a2 )
    {
      v8 = v2;
      if ( !v2 )
        v8 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
      a1[1] = v8;
    }
  }
  v9 = a2[2] & 1;
LABEL_16:
  *(_QWORD *)(v6 + 8LL * v7) = v2;
  if ( v2 )
  {
    if ( (*(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v5 )
      __fastfail(0x1Du);
    *(_QWORD *)(v2 + 16) = v6;
  }
  else if ( !v9 )
  {
    while ( 1 )
    {
      v10 = !v7;
      v11 = *(_QWORD *)(v6 + 8 * v10);
      v12 = (unsigned __int64 *)(v6 + 8 * v10);
      if ( (*(_BYTE *)(v11 + 16) & 1) != 0 )
      {
        if ( (*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
          __fastfail(0x1Du);
        v26 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v26 )
        {
          if ( *(_QWORD *)(v26 + 8) == v6 )
          {
            *(_QWORD *)(v26 + 8) = v11;
          }
          else
          {
            if ( *(_QWORD *)v26 != v6 )
              __fastfail(0x1Du);
            *(_QWORD *)v26 = v11;
          }
        }
        else
        {
          if ( *a1 != v6 )
            __fastfail(0x1Du);
          *a1 = v11;
        }
        v27 = (unsigned __int64 *)(v11 + 8LL * v7);
        *(_QWORD *)(v11 + 16) = v26 | *(_DWORD *)(v11 + 16) & 3;
        v28 = *v27;
        if ( *v27 )
        {
          v29 = *(_QWORD *)(v28 + 16);
          if ( (v29 & 0xFFFFFFFFFFFFFFFCuLL) != v11 )
            __fastfail(0x1Du);
          *(_QWORD *)(v28 + 16) = v6 | v29 & 3;
        }
        *v12 = v28;
        *v27 = v6;
        *(_QWORD *)(v6 + 16) = v11 | *(_DWORD *)(v6 + 16) & 3;
        *(_BYTE *)(v11 + 16) &= ~1u;
        *(_BYTE *)(v6 + 16) |= 1u;
        v11 = *v12;
      }
      if ( *(_QWORD *)v11 && (*(_BYTE *)(*(_QWORD *)v11 + 16LL) & 1) != 0 )
        break;
      v13 = *(_QWORD *)(v11 + 8);
      if ( v13 )
      {
        if ( (*(_BYTE *)(v13 + 16) & 1) != 0 )
          break;
      }
      if ( (*(_BYTE *)(v6 + 16) & 1) != 0 )
      {
        *(_BYTE *)(v6 + 16) &= ~1u;
        *(_BYTE *)(v11 + 16) |= 1u;
        return;
      }
      *(_BYTE *)(v11 + 16) |= 1u;
      if ( (*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
        return;
      v7 = *(_QWORD *)((*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL) + 8) == v6;
      v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    v14 = v7;
    v15 = 8 * !v7;
    v16 = *(_QWORD *)(v15 + v11);
    if ( !v16 || (*(_BYTE *)(v16 + 16) & 1) == 0 )
    {
      v30 = *(_QWORD *)(v11 + 8LL * v7);
      v31 = !v7;
      *(_BYTE *)(v30 + 16) &= ~1u;
      if ( (*(_QWORD *)(v30 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v11 )
        __fastfail(0x1Du);
      v32 = v31;
      v33 = (unsigned __int64 *)(v11 + 8 * (v31 ^ 1LL));
      if ( *v33 != v30 )
        __fastfail(0x1Du);
      if ( *(_QWORD *)(v6 + 8 * v32) != v11 || (*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
        __fastfail(0x1Du);
      *(_QWORD *)(v6 + 8 * v32) = v30;
      v34 = (unsigned __int64 *)(v30 + 8 * v32);
      *(_QWORD *)(v30 + 16) = v6 | *(_DWORD *)(v30 + 16) & 3;
      v35 = *v34;
      if ( *v34 )
      {
        v36 = *(_QWORD *)(v35 + 16);
        if ( (v36 & 0xFFFFFFFFFFFFFFFCuLL) != v30 )
          __fastfail(0x1Du);
        *(_QWORD *)(v35 + 16) = v11 | v36 & 3;
      }
      *v33 = v35;
      v16 = v11;
      *v34 = v11;
      *(_QWORD *)(v11 + 16) = v30 | *(_DWORD *)(v11 + 16) & 3;
      v11 = v30;
    }
    *(_BYTE *)(v11 + 16) ^= (*(_BYTE *)(v6 + 16) ^ *(_BYTE *)(v11 + 16)) & 1;
    *(_BYTE *)(v6 + 16) &= ~1u;
    *(_BYTE *)(v16 + 16) &= ~1u;
    if ( (*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
      __fastfail(0x1Du);
    if ( *(_QWORD *)(v15 + v6) != v11 )
      __fastfail(0x1Du);
    v17 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v17 )
    {
      if ( *(_QWORD *)(v17 + 8) == v6 )
      {
        *(_QWORD *)(v17 + 8) = v11;
      }
      else
      {
        if ( *(_QWORD *)v17 != v6 )
          __fastfail(0x1Du);
        *(_QWORD *)v17 = v11;
      }
    }
    else
    {
      if ( *a1 != v6 )
        __fastfail(0x1Du);
      *a1 = v11;
    }
    *(_QWORD *)(v11 + 16) = v17 | *(_DWORD *)(v11 + 16) & 3;
    v18 = *(_QWORD *)(v11 + 8 * v14);
    if ( v18 )
    {
      v25 = *(_QWORD *)(v18 + 16);
      if ( (v25 & 0xFFFFFFFFFFFFFFFCuLL) != v11 )
        __fastfail(0x1Du);
      *(_QWORD *)(v18 + 16) = v6 | v25 & 3;
    }
    *(_QWORD *)(v15 + v6) = v18;
    *(_QWORD *)(v11 + 8 * v14) = v6;
    *(_QWORD *)(v6 + 16) = v11 | *(_DWORD *)(v6 + 16) & 3;
  }
}
