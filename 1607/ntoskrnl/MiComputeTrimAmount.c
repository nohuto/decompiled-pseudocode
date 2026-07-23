/*
 * XREFs of MiComputeTrimAmount @ 0x1401E9348
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 *     MiForcedTrim @ 0x1401E95FC (MiForcedTrim.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 */

unsigned __int64 __fastcall MiComputeTrimAmount(__int64 a1, __int64 a2)
{
  int *v3; // rax
  __int64 v4; // r11
  unsigned __int64 v5; // r15
  int *v6; // r13
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbp
  char v9; // dl
  ULONG_PTR v10; // r8
  unsigned __int64 v11; // r10
  __int64 v12; // r11
  ULONG_PTR v13; // r14
  char v14; // cl
  unsigned __int64 result; // rax
  ULONG_PTR v16; // rax
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r9
  unsigned int v20; // ecx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  unsigned __int8 v23; // al
  char v24; // cl
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax

  v3 = MiPartitionIdToPointer(*(_WORD *)(a2 + 164));
  v5 = *(_QWORD *)(a1 + 72);
  v6 = v3;
  v7 = *(_QWORD *)(a1 + 88);
  if ( v5 == v7 )
    return 0LL;
  v8 = *((_QWORD *)v3 + 808);
  if ( v8 >= *(_QWORD *)(a1 + 64) && (*(_BYTE *)(a1 + 3) < 3u || (*(_BYTE *)a1 & 0x7F) != 0) )
    return 0LL;
  v13 = MiGetSharedWorkingSetList(v4)[1];
  if ( v10 <= v13 )
    return 0LL;
  v14 = *(_BYTE *)(v12 + 184);
  if ( (v14 & 7) == 0 )
  {
    if ( v14 >= 0 )
    {
      if ( (*(_DWORD *)(v12 - 508) & 0x40) != 0 )
        goto LABEL_17;
      goto LABEL_14;
    }
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(v12 + 184) & 7) == 1 && v14 < 0 )
  {
LABEL_8:
    if ( v10 <= *(_QWORD *)(v12 + 104) )
      return 0LL;
  }
LABEL_14:
  v16 = *(_QWORD *)(v12 + 104);
  if ( v10 <= v16 )
    v11 = 0LL;
  else
    v11 -= v16;
LABEL_17:
  v17 = *(_BYTE *)(a1 + 1);
  if ( v17 )
  {
    v19 = 0LL;
    v20 = v17 - 1;
    if ( v20 >= 7 )
      return 0LL;
    v21 = (_QWORD *)(v12 + 8 * (v20 + 5LL));
    v22 = 7 - v20;
    do
    {
      v19 += *v21++;
      --v22;
    }
    while ( v22 );
    if ( !v19 )
      return 0LL;
    v9 = 3;
  }
  else
  {
    v18 = *(_QWORD *)(v12 + 104);
    if ( v10 <= v18 )
      v19 = 0LL;
    else
      v19 = v10 - v18;
  }
  v23 = *(_BYTE *)a1 & 0x7F;
  if ( v23 > 1u )
  {
    if ( v23 == 4 && v8 < 0xE0 )
    {
      v25 = v10 - v13;
    }
    else
    {
      if ( v7 > v5 )
        return 0LL;
      v25 = v19;
      v28 = *(_QWORD *)(a1 + 80);
      if ( *(_BYTE *)(v12 + 186) != 2 )
      {
        v29 = *(_QWORD *)(a1 + 96);
        if ( v29 > v28 )
          v25 = v19 / (v29 / v28);
      }
      if ( v25 > v11 )
        v25 = v11;
    }
  }
  else
  {
    v24 = 1;
    if ( *(_BYTE *)(v12 + 186) == 2 )
      v24 = v9;
    v25 = v19 >> v24;
    v26 = *(_QWORD *)(a1 + 96);
    if ( v26 >= v19 )
    {
      v27 = v19 * (100 * v19 / v26) / 0x64;
      if ( v25 < v27 )
        v25 = v27;
    }
    if ( v25 > v11 )
      v25 = v11;
  }
  if ( v25 > v5 - v7 )
    v25 = v5 - v7;
  result = v25;
  ++*(_DWORD *)(*((_QWORD *)v6 + 781) + 4LL * (*(_BYTE *)a1 & 0x7F) + 2544);
  return result;
}
