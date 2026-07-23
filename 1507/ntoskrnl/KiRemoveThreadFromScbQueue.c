/*
 * XREFs of KiRemoveThreadFromScbQueue @ 0x1400D3690
 * Callers:
 *     KiRemoveThreadFromSchedulingGroup @ 0x14000B3A4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D34E0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400D3570 (KiSelectThreadFromSchedulingGroup.c)
 *     KiGroupSchedulingMoveThread @ 0x1400D35B8 (KiGroupSchedulingMoveThread.c)
 * Callees:
 *     KiInsertSchedulingGroupQueue @ 0x1400EDDBC (KiInsertSchedulingGroupQueue.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 */

char __fastcall KiRemoveThreadFromScbQueue(_RTL_RB_TREE *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v5; // rdx
  _QWORD *i; // rax
  int v9; // edx
  __int64 *v10; // rdi
  __int64 v11; // rax
  _RTL_RB_TREE *v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 j; // rcx
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned __int16 v17; // dx
  int v18; // r8d
  __int64 *v19; // rdi
  __int64 v20; // rax
  _RTL_RB_TREE *v21; // rax

  v5 = *(_QWORD **)(a3 + 216);
  i = *(_QWORD **)(a3 + 224);
  if ( v5[1] != a3 + 216 || *i != a3 + 216 )
    __fastfail(3u);
  *i = v5;
  v5[1] = i;
  if ( i == v5 )
  {
    v9 = *(unsigned __int16 *)(a2 + 114) ^ (1 << a4);
    LOBYTE(i) = *(_BYTE *)(a2 + 112) & 3;
    *(_WORD *)(a2 + 114) = v9;
    if ( (_BYTE)i == 1 )
    {
      if ( !(_WORD)v9 && !*(_QWORD *)(a2 + 376) )
      {
        do
        {
          v10 = (__int64 *)(a2 + 392);
          v11 = *(_QWORD *)(a2 + 392);
          v12 = (_RTL_RB_TREE *)(v11 + 376);
          if ( !v11 )
            v12 = a1 + 1423;
          *(_QWORD *)(a2 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 64);
          *(_BYTE *)(a2 + 112) &= ~1u;
          LOBYTE(i) = RtlRbRemoveNode(v12, (PRTL_BALANCED_NODE)(a2 + 88));
          a2 = *v10;
        }
        while ( *v10 && (*(_BYTE *)(a2 + 112) & 1) != 0 && !*(_QWORD *)(a2 + 376) && !*(_WORD *)(a2 + 114) );
        goto LABEL_10;
      }
      i = (_QWORD *)(a2 + 88);
      v13 = *(_QWORD *)(a2 + 96);
      if ( v13 )
      {
        for ( i = *(_QWORD **)v13; i; i = (_QWORD *)*i )
          v13 = (unsigned __int64)i;
      }
      else
      {
        for ( j = *(_QWORD *)(a2 + 104); ; j = *(_QWORD *)(v13 + 16) )
        {
          v13 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v13 || *(_QWORD **)v13 == i )
            break;
          i = (_QWORD *)v13;
        }
      }
      if ( !v13 )
        goto LABEL_10;
      LODWORD(i) = *(_DWORD *)(a2 + 116) - *(_DWORD *)(v13 + 28);
      if ( !(_DWORD)i )
      {
        if ( (_WORD)v9 )
        {
          v16 = (unsigned __int16)v9;
          v17 = *(_WORD *)(v13 + 26);
          _BitScanReverse((unsigned int *)&v18, v16);
          LODWORD(i) = 0;
          if ( v17 )
            _BitScanReverse((unsigned int *)&i, v17);
          LODWORD(i) = (_DWORD)i - v18;
        }
        else
        {
          if ( !*(_DWORD *)(a2 + 116) )
          {
            i = *(_QWORD **)(v13 - 88);
            if ( *(_QWORD *)a2 <= (unsigned __int64)i )
              goto LABEL_10;
LABEL_17:
            v15 = a2;
            do
            {
              v19 = (__int64 *)(v15 + 392);
              v20 = *(_QWORD *)(v15 + 392);
              if ( v20 )
                v21 = (_RTL_RB_TREE *)(v20 + 376);
              else
                v21 = a1 + 1423;
              *(_BYTE *)(v15 + 112) &= ~1u;
              RtlRbRemoveNode(v21, (PRTL_BALANCED_NODE)(v15 + 88));
              v15 = *v19;
            }
            while ( *v19 && (*(_BYTE *)(v15 + 112) & 1) != 0 && !*(_QWORD *)(v15 + 376) && !*(_WORD *)(v15 + 114) );
            LOBYTE(i) = KiInsertSchedulingGroupQueue(a1, a2, 0LL);
            goto LABEL_10;
          }
          LODWORD(i) = 1;
        }
      }
      if ( (int)i <= 0 )
        goto LABEL_10;
      goto LABEL_17;
    }
  }
LABEL_10:
  *(_DWORD *)(a3 + 116) &= ~0x2000u;
  *(_QWORD *)(a3 + 1488) = 0LL;
  return (char)i;
}
