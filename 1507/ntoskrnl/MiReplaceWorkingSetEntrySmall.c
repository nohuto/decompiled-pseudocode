/*
 * XREFs of MiReplaceWorkingSetEntrySmall @ 0x14021AF0C
 * Callers:
 *     MiReplaceWorkingSetEntryLarge @ 0x140080B2C (MiReplaceWorkingSetEntryLarge.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MiReplaceWorkingSetEntryIfNecessary @ 0x14021AEB8 (MiReplaceWorkingSetEntryIfNecessary.c)
 * Callees:
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400808F0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiSetWsleAge @ 0x14008090C (MiSetWsleAge.c)
 *     MiRemoveSingleWsle @ 0x1401224EC (MiRemoveSingleWsle.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 */

char __fastcall MiReplaceWorkingSetEntrySmall(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r11
  __int64 v4; // r9
  bool v5; // cf
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r13
  unsigned int v10; // r8d
  __int64 v11; // r15
  unsigned __int8 v12; // r12
  unsigned __int64 v13; // r10
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rdx
  int v24; // ecx
  char v25; // cl
  __int64 v26; // r8
  unsigned __int64 v28; // [rsp+20h] [rbp-58h]
  unsigned __int64 v29; // [rsp+28h] [rbp-50h]
  char v31; // [rsp+88h] [rbp+10h]
  unsigned int v32; // [rsp+90h] [rbp+18h]
  unsigned int v33; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = 1LL;
  v4 = a1;
  v5 = a2 != 1;
  v6 = *(_QWORD *)(v2 + 16);
  v7 = *(_QWORD *)(v2 + 24);
  LODWORD(v8) = v5 ? 0x11 : 0;
  v9 = *(_QWORD *)(v2 + 8);
  v33 = v8;
  v28 = v6;
  if ( v7 > v6 || v7 < v9 )
    v7 = *(_QWORD *)(v2 + 8);
  v10 = 0;
  v29 = v7;
  v31 = 1;
  v11 = 0xFFFFFFFFFLL;
  v12 = 0;
  v13 = v7;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v2 + 64);
    while ( 1 )
    {
      v15 = (_QWORD *)(*(_QWORD *)(v2 + 496) + v7 * v14);
      if ( ((unsigned __int8)v3 & *(_BYTE *)v15) != 0 )
        break;
      v7 += v3;
      if ( v7 > v6 )
        v7 = v9;
      if ( v7 == v13 )
        return v8;
    }
    v16 = *v15;
    v32 = v3 + v10;
    if ( (*v15 & 0x800000000000LL) != 0 )
      v17 = v16 | 0xFFFF000000000000uLL;
    else
      v17 = v16 & 0xFFFFFFFFFFFFLL;
    v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = *(_QWORD *)v18;
    if ( v18 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(v14, v19)
      && ((unsigned __int8)v19 & (unsigned __int8)v3) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      v20 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 8 * ((v18 >> 3) & 0x1FF));
        if ( (v21 & 0x20) != 0 )
          v19 |= 0x20uLL;
        if ( (v21 & 0x42) != 0 )
          v19 |= 0x42uLL;
      }
    }
    v22 = 48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v23 = *(_QWORD *)(v22 + 8);
    if ( v23 >= 0 )
    {
      MiDemoteCombinedPte(v18, v23 | 0x8000000000000000uLL);
      v4 = a1;
      v3 = 1LL;
    }
    if ( (*(_BYTE *)v18 & 0x20) != 0 )
    {
      v24 = (*(_DWORD *)v15 >> 9) & 7;
      if ( (unsigned int)(v24 - 1) <= 5 )
      {
        MiUpdateWorkingSetAgeDistribution(v4, v24, -1LL);
        MiSetWsleAge(v2, v15, 0);
        v3 = 1LL;
      }
      v25 = v3;
    }
    else
    {
      v25 = 0;
    }
    v8 = *(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v8 <= v3 || (*(_QWORD *)(v22 + 40) & 0x200000000000000LL) != 0 )
    {
      v26 = a1;
      if ( (*(_BYTE *)(a1 + 216) & 7) == 0 || *(_WORD *)(v22 + 32) <= (unsigned __int16)v3 )
      {
        if ( v11 == 0xFFFFFFFFFLL )
        {
          v11 = v7;
          v12 = ((unsigned __int64)*(unsigned int *)v15 >> 9) & 7;
          v31 = v25;
        }
        else if ( !v25 )
        {
          if ( v31 == (_BYTE)v3 || (LOBYTE(v8) = v12, ((*(_DWORD *)v15 >> 9) & 7u) > (unsigned __int64)v12) )
          {
            v11 = v7;
            LOBYTE(v8) = ((unsigned __int64)*(unsigned int *)v15 >> 9) & 7;
            v31 = 0;
            v12 = v8;
          }
        }
      }
    }
    else
    {
      v26 = a1;
    }
    if ( v12 >= 2u || (LOBYTE(v8) = v32, v32 > v33) )
    {
      if ( v11 != 0xFFFFFFFFFLL )
        break;
    }
LABEL_46:
    v6 = v28;
    v7 += v3;
    v13 = v29;
    if ( v7 > v28 )
      v7 = v9;
    if ( v7 == v29 )
      return v8;
    v4 = a1;
    v10 = v32;
  }
  LODWORD(v8) = MiRemoveSingleWsle(v26, v11);
  v3 = 1LL;
  if ( (_DWORD)v8 != 1 )
  {
    v7 = v11;
    v31 = 1;
    v11 = 0xFFFFFFFFFLL;
    v12 = 0;
    goto LABEL_46;
  }
  LOBYTE(v8) = v11 + 1;
  *(_QWORD *)(v2 + 24) = v11 + 1;
  return v8;
}
