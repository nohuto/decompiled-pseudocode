/*
 * XREFs of MiReplaceWorkingSetEntrySmall @ 0x1401E9D18
 * Callers:
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400FEB54 (MiReplaceWorkingSetEntryLarge.c)
 *     MiReplaceWorkingSetEntryIfNecessary @ 0x1401E9CCC (MiReplaceWorkingSetEntryIfNecessary.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BA3CC (MiUpdateWorkingSetAgeDistribution.c)
 *     MiSetWsleAge @ 0x1400BBB24 (MiSetWsleAge.c)
 *     MiRemoveSingleWsle @ 0x1400FF0BC (MiRemoveSingleWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 */

char __fastcall MiReplaceWorkingSetEntrySmall(ULONG_PTR a1, int a2)
{
  unsigned __int64 SharedWorkingSetList; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r12
  unsigned int v8; // r9d
  __int64 v9; // rbp
  unsigned __int8 v10; // r14
  unsigned __int64 v11; // r10
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rsi
  __int64 v16; // r11
  unsigned __int64 v17; // r13
  __int64 v18; // r8
  int v19; // ecx
  char v20; // cl
  unsigned __int64 v22; // [rsp+20h] [rbp-68h]
  unsigned __int64 v23; // [rsp+28h] [rbp-60h]
  _QWORD *v24; // [rsp+30h] [rbp-58h]
  unsigned int v25; // [rsp+90h] [rbp+8h]
  char v26; // [rsp+98h] [rbp+10h]
  unsigned int v27; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v28; // [rsp+A8h] [rbp+20h]

  v24 = *(_QWORD **)(a1 + 16);
  v27 = a2 != 1 ? 0x11 : 0;
  SharedWorkingSetList = (unsigned __int64)MiGetSharedWorkingSetList(a1);
  v5 = *v4;
  v23 = SharedWorkingSetList;
  v6 = *(_QWORD *)(SharedWorkingSetList + 16);
  v7 = *(_QWORD *)(SharedWorkingSetList + 8);
  v28 = v6;
  if ( *v4 > v6 || v5 < v7 )
    v5 = *(_QWORD *)(SharedWorkingSetList + 8);
  v8 = 0;
  v22 = v5;
  v26 = 1;
  v9 = 0xFFFFFFFFFLL;
  v10 = 0;
  v11 = v5;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = (_QWORD *)(*(_QWORD *)(SharedWorkingSetList + 80) + v5 * *(unsigned int *)(SharedWorkingSetList + 32));
      if ( (*(_BYTE *)v12 & 1) != 0 )
        break;
      if ( ++v5 > v6 )
        v5 = v7;
      if ( v5 == v11 )
        return SharedWorkingSetList;
    }
    v13 = *v12;
    v25 = v8 + 1;
    if ( (*v12 & 0x800000000000LL) != 0 )
      v14 = v13 | 0xFFFF000000000000uLL;
    else
      v14 = v13 & 0xFFFFFFFFFFFFLL;
    v15 = (_BYTE *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v15) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v18 = *(_QWORD *)(v17 + 8);
    if ( (v18 & v16) == 0 )
      MiDemoteCombinedPte(a1, v15, v16 | v18);
    if ( (*v15 & 0x20) != 0 )
    {
      v19 = (*(_DWORD *)v12 >> 9) & 7;
      if ( (unsigned int)(v19 - 1) <= 5 )
      {
        MiUpdateWorkingSetAgeDistribution(a1, v19, -1LL);
        MiSetWsleAge(a1, v12, 0);
      }
      v20 = 1;
    }
    else
    {
      v20 = 0;
    }
    SharedWorkingSetList = *(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (SharedWorkingSetList <= 1 || (*(_QWORD *)(v17 + 40) & 0x200000000000000LL) != 0)
      && ((*(_BYTE *)(a1 + 184) & 7) == 0 || *(_WORD *)(v17 + 32) <= 1u) )
    {
      if ( v9 == 0xFFFFFFFFFLL )
      {
        v9 = v5;
        v10 = ((unsigned __int64)*(unsigned int *)v12 >> 9) & 7;
        v26 = v20;
      }
      else if ( !v20 )
      {
        if ( v26 == 1 || (LOBYTE(SharedWorkingSetList) = v10, ((*(_DWORD *)v12 >> 9) & 7u) > (unsigned __int64)v10) )
        {
          v9 = v5;
          LOBYTE(SharedWorkingSetList) = ((unsigned __int64)*(unsigned int *)v12 >> 9) & 7;
          v26 = 0;
          v10 = SharedWorkingSetList;
        }
      }
    }
    if ( v10 >= 2u || (LOBYTE(SharedWorkingSetList) = v25, v25 > v27) )
    {
      if ( v9 != 0xFFFFFFFFFLL )
        break;
    }
LABEL_34:
    v6 = v28;
    ++v5;
    v11 = v22;
    if ( v5 > v28 )
      v5 = v7;
    if ( v5 == v22 )
      return SharedWorkingSetList;
    SharedWorkingSetList = v23;
    v8 = v25;
  }
  LODWORD(SharedWorkingSetList) = MiRemoveSingleWsle(a1, v9);
  if ( (_DWORD)SharedWorkingSetList != 1 )
  {
    v5 = v9;
    v26 = 1;
    v9 = 0xFFFFFFFFFLL;
    v10 = 0;
    goto LABEL_34;
  }
  LOBYTE(SharedWorkingSetList) = v9 + 1;
  *v24 = v9 + 1;
  return SharedWorkingSetList;
}
