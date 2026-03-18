/*
 * XREFs of MiReplaceWorkingSetEntrySmall @ 0x1401D812C
 * Callers:
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400E42B4 (MiReplaceWorkingSetEntryLarge.c)
 *     MiReplaceWorkingSetEntryIfNecessary @ 0x1401D80D8 (MiReplaceWorkingSetEntryIfNecessary.c)
 * Callees:
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BAC08 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiSetWsleAge @ 0x1400BACAC (MiSetWsleAge.c)
 *     MiRemoveSingleWsle @ 0x1400E47D4 (MiRemoveSingleWsle.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiReplaceWorkingSetEntrySmall(__int64 a1, int a2)
{
  __int64 v2; // rbp
  bool v3; // cf
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned int v8; // r8d
  __int64 v9; // r14
  unsigned __int8 v10; // r15
  unsigned __int64 v11; // r9
  __int64 *v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  __int64 *v15; // rsi
  unsigned __int64 v16; // r13
  __int64 v17; // rdx
  int v18; // ecx
  char v19; // cl
  ULONG_PTR v20; // rsi
  unsigned __int64 v22; // [rsp+20h] [rbp-58h]
  unsigned __int64 v23; // [rsp+28h] [rbp-50h]
  char v25; // [rsp+88h] [rbp+10h]
  unsigned int v26; // [rsp+90h] [rbp+18h]
  unsigned int v27; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = a2 != 1;
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *(_QWORD *)(v2 + 24);
  LODWORD(v6) = v3 ? 0x11 : 0;
  v7 = *(_QWORD *)(v2 + 8);
  v27 = v6;
  v22 = v4;
  if ( v5 > v4 || v5 < v7 )
    v5 = *(_QWORD *)(v2 + 8);
  v8 = 0;
  v23 = v5;
  v25 = 1;
  v9 = 0xFFFFFFFFFLL;
  v10 = 0;
  v11 = v5;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = (__int64 *)(*(_QWORD *)(v2 + 496) + v5 * *(unsigned int *)(v2 + 64));
      if ( (*(_BYTE *)v12 & 1) != 0 )
        break;
      if ( ++v5 > v4 )
        v5 = v7;
      if ( v5 == v11 )
        return v6;
    }
    v13 = *v12;
    v26 = v8 + 1;
    if ( (*v12 & 0x800000000000LL) != 0 )
      v14 = v13 | 0xFFFF000000000000uLL;
    else
      v14 = v13 & 0xFFFFFFFFFFFFLL;
    v15 = (__int64 *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v15) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v17 = *(_QWORD *)(v16 + 8);
    if ( v17 >= 0 )
      MiDemoteCombinedPte((unsigned __int64 *)v15, v17 | 0x8000000000000000uLL);
    if ( (*(_BYTE *)v15 & 0x20) != 0 )
    {
      v18 = (*(_DWORD *)v12 >> 9) & 7;
      if ( (unsigned int)(v18 - 1) <= 5 )
      {
        MiUpdateWorkingSetAgeDistribution(a1, v18, -1LL);
        MiSetWsleAge(v2, v12, 0);
      }
      v19 = 1;
    }
    else
    {
      v19 = 0;
    }
    v6 = *(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v6 <= 1 || (*(_QWORD *)(v16 + 40) & 0x200000000000000LL) != 0 )
    {
      v20 = a1;
      if ( (*(_BYTE *)(a1 + 216) & 7) == 0 || *(_WORD *)(v16 + 32) <= 1u )
      {
        if ( v9 == 0xFFFFFFFFFLL )
        {
          v9 = v5;
          v10 = ((unsigned __int64)*(unsigned int *)v12 >> 9) & 7;
          v25 = v19;
        }
        else if ( !v19 )
        {
          if ( v25 == 1 || (LOBYTE(v6) = v10, ((*(_DWORD *)v12 >> 9) & 7u) > (unsigned __int64)v10) )
          {
            v9 = v5;
            LOBYTE(v6) = ((unsigned __int64)*(unsigned int *)v12 >> 9) & 7;
            v25 = 0;
            v10 = v6;
          }
        }
      }
    }
    else
    {
      v20 = a1;
    }
    if ( v10 >= 2u || (LOBYTE(v6) = v26, v26 > v27) )
    {
      if ( v9 != 0xFFFFFFFFFLL )
        break;
    }
LABEL_35:
    v4 = v22;
    ++v5;
    v11 = v23;
    if ( v5 > v22 )
      v5 = v7;
    if ( v5 == v23 )
      return v6;
    v8 = v26;
  }
  LODWORD(v6) = MiRemoveSingleWsle(v20, v9);
  if ( (_DWORD)v6 != 1 )
  {
    v5 = v9;
    v25 = 1;
    v9 = 0xFFFFFFFFFLL;
    v10 = 0;
    goto LABEL_35;
  }
  LOBYTE(v6) = v9 + 1;
  *(_QWORD *)(v2 + 24) = v9 + 1;
  return v6;
}
