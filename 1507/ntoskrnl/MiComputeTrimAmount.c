/*
 * XREFs of MiComputeTrimAmount @ 0x14021A5E8
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 *     MiProcessWorkingSets @ 0x140099DB0 (MiProcessWorkingSets.c)
 *     MiForcedTrim @ 0x14021A838 (MiForcedTrim.c)
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 */

unsigned __int64 __fastcall MiComputeTrimAmount(__int64 a1, __int64 a2)
{
  __int16 *VmPartition; // rax
  int v4; // r9d
  __int64 v5; // r10
  __int16 *v6; // r13
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rsi
  char v14; // dl
  BOOL v15; // ecx
  unsigned __int64 v16; // rax
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

  VmPartition = MiGetVmPartition(a2);
  v6 = VmPartition;
  v7 = *(_QWORD *)(a1 + 96);
  v8 = *(_QWORD *)(a1 + 80) - v7;
  if ( !v8 )
    return 0LL;
  v9 = *((_QWORD *)VmPartition + 688);
  v10 = *(_QWORD *)(a1 + 72);
  if ( (v9 >= v10 || v9 + *(_QWORD *)(a1 + 8) >= v10) && (*(_BYTE *)(a1 + 3) < 3u || (*(_BYTE *)a1 & 0x7F) != 0) )
    return 0LL;
  v11 = *(_QWORD *)(v5 + 120);
  v12 = v11;
  v13 = v4 == 1 ? *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL) : *(_QWORD *)(v5 + 96);
  if ( v11 <= v13 )
    return 0LL;
  v14 = *(_BYTE *)(v5 + 216);
  if ( (v14 & 7) != 0 )
  {
    if ( (*(_BYTE *)(v5 + 216) & 7) == 1 && v14 < 0 && v11 <= *(_QWORD *)(v5 + 96) )
      return 0LL;
LABEL_19:
    v16 = *(_QWORD *)(v5 + 96);
    if ( v11 <= v16 )
      v12 = 0LL;
    else
      v12 = v11 - v16;
    goto LABEL_22;
  }
  v15 = (*(_BYTE *)(v5 - 500) & 0x40) != 0;
  if ( v14 < 0 )
  {
    if ( v11 <= *(_QWORD *)(v5 + 96) )
      return 0LL;
    v15 = 0;
  }
  if ( !v15 )
    goto LABEL_19;
LABEL_22:
  v17 = *(_BYTE *)(a1 + 1);
  if ( v17 )
  {
    v19 = 0LL;
    v20 = v17 - 1;
    if ( v20 >= 7 )
      return 0LL;
    v21 = (_QWORD *)(v5 + 8 * (v20 + 5LL));
    v22 = 7 - v20;
    do
    {
      v19 += *v21++;
      --v22;
    }
    while ( v22 );
    if ( !v19 )
      return 0LL;
  }
  else
  {
    v18 = *(_QWORD *)(v5 + 96);
    if ( v11 <= v18 )
      v19 = 0LL;
    else
      v19 = v11 - v18;
  }
  v23 = *(_BYTE *)a1 & 0x7F;
  if ( v23 <= 1u )
  {
    v24 = 1;
    if ( *(_BYTE *)(v5 + 218) == 2 )
      v24 = 3;
    v25 = v19 >> v24;
    v26 = *(_QWORD *)(a1 + 104);
    if ( v26 >= v19 )
    {
      v27 = v19 * (100 * v19 / v26) / 0x64;
      if ( v25 < v27 )
        v25 = v27;
    }
    if ( v25 > v12 )
      v25 = v12;
    goto LABEL_47;
  }
  if ( v23 != 4 || v9 >= 0xC0 )
  {
    if ( v7 <= *(_QWORD *)(a1 + 80) )
    {
      v25 = v19;
      v28 = *(_QWORD *)(a1 + 88);
      if ( *(_BYTE *)(v5 + 218) != 2 )
      {
        v29 = *(_QWORD *)(a1 + 104);
        if ( v29 > v28 )
          v25 = v19 / (v29 / v28);
      }
      if ( v25 > v12 )
        v25 = v12;
      goto LABEL_47;
    }
    return 0LL;
  }
  v25 = v11 - v13;
LABEL_47:
  if ( v25 > v8 )
    v25 = *(_QWORD *)(a1 + 80) - v7;
  ++*(_DWORD *)(*((_QWORD *)v6 + 657) + 4LL * (*(_BYTE *)a1 & 0x7F) + 2544);
  return v25;
}
