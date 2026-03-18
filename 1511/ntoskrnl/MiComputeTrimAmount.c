/*
 * XREFs of MiComputeTrimAmount @ 0x1401D786C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 *     MiForcedTrim @ 0x1401D7A98 (MiForcedTrim.c)
 * Callees:
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 */

unsigned __int64 __fastcall MiComputeTrimAmount(__int64 a1, __int64 a2)
{
  int *VmPartition; // rax
  __int64 v4; // r11
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r15
  char v11; // dl
  BOOL v12; // ecx
  unsigned __int64 v13; // rax
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned int v17; // ecx
  _QWORD *v18; // rdx
  __int64 v19; // rax
  unsigned __int8 v20; // al
  char v21; // cl
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 result; // rax
  int *v28; // [rsp+50h] [rbp+8h]

  VmPartition = MiGetVmPartition(a2);
  v5 = *(_QWORD *)(a1 + 88);
  v28 = VmPartition;
  v6 = *(_QWORD *)(a1 + 72) - v5;
  if ( !v6 )
    return 0LL;
  v7 = *((_QWORD *)VmPartition + 736);
  if ( v7 >= *(_QWORD *)(a1 + 64) && (*(_BYTE *)(a1 + 3) < 3u || (*(_BYTE *)a1 & 0x7F) != 0) )
    return 0LL;
  v8 = *(_QWORD *)(v4 + 120);
  v9 = v8;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 184) + 8LL);
  if ( v8 <= v10 )
    return 0LL;
  v11 = *(_BYTE *)(v4 + 216);
  if ( (v11 & 7) != 0 )
  {
    if ( (*(_BYTE *)(v4 + 216) & 7) == 1 && v11 < 0 && v8 <= *(_QWORD *)(v4 + 96) )
      return 0LL;
LABEL_15:
    v13 = *(_QWORD *)(v4 + 96);
    if ( v8 <= v13 )
      v9 = 0LL;
    else
      v9 = v8 - v13;
    goto LABEL_18;
  }
  v12 = (*(_BYTE *)(v4 - 508) & 0x40) != 0;
  if ( v11 < 0 )
  {
    if ( v8 <= *(_QWORD *)(v4 + 96) )
      return 0LL;
    v12 = 0;
  }
  if ( !v12 )
    goto LABEL_15;
LABEL_18:
  v14 = *(_BYTE *)(a1 + 1);
  if ( v14 )
  {
    v16 = 0LL;
    v17 = v14 - 1;
    if ( v17 >= 7 )
      return 0LL;
    v18 = (_QWORD *)(v4 + 8 * (v17 + 5LL));
    v19 = 7 - v17;
    do
    {
      v16 += *v18++;
      --v19;
    }
    while ( v19 );
    if ( !v16 )
      return 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(v4 + 96);
    if ( v8 <= v15 )
      v16 = 0LL;
    else
      v16 = v8 - v15;
  }
  v20 = *(_BYTE *)a1 & 0x7F;
  if ( v20 <= 1u )
  {
    v21 = 1;
    if ( *(_BYTE *)(v4 + 218) == 2 )
      v21 = 3;
    v22 = v16 >> v21;
    v23 = *(_QWORD *)(a1 + 96);
    if ( v23 >= v16 )
    {
      v24 = v16 * (100 * v16 / v23) / 0x64;
      if ( v22 < v24 )
        v22 = v24;
    }
    if ( v22 > v9 )
      v22 = v9;
    goto LABEL_43;
  }
  if ( v20 != 4 || v7 >= 0xE0 )
  {
    if ( v5 <= *(_QWORD *)(a1 + 72) )
    {
      v22 = v16;
      v25 = *(_QWORD *)(a1 + 80);
      if ( *(_BYTE *)(v4 + 218) != 2 )
      {
        v26 = *(_QWORD *)(a1 + 96);
        if ( v26 > v25 )
          v22 = v16 / (v26 / v25);
      }
      if ( v22 > v9 )
        v22 = v9;
      goto LABEL_43;
    }
    return 0LL;
  }
  v22 = v8 - v10;
LABEL_43:
  if ( v22 > v6 )
    v22 = *(_QWORD *)(a1 + 72) - v5;
  result = v22;
  ++*(_DWORD *)(*((_QWORD *)v28 + 702) + 4LL * (*(_BYTE *)a1 & 0x7F) + 2544);
  return result;
}
