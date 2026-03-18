/*
 * XREFs of ExpScanSystemLookasideList @ 0x1401033C0
 * Callers:
 *     KeBalanceSetManager @ 0x140165F30 (KeBalanceSetManager.c)
 * Callees:
 *     <none>
 */

__int64 ExpScanSystemLookasideList()
{
  __int64 v0; // r11
  int v1; // edi
  int v2; // r14d
  _GENERAL_LOOKASIDE **p_L; // rbx
  _GENERAL_LOOKASIDE *v4; // r10
  int v5; // edx
  unsigned __int16 MaximumDepth; // r8
  unsigned int v7; // ecx
  int Depth; // r9d
  int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rsi
  __int64 *v13; // rbx
  __int64 v14; // r10
  int v15; // edx
  unsigned __int16 v16; // r8
  unsigned int v17; // ecx
  int v18; // r9d
  int v19; // r9d
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // edx
  unsigned __int16 v25; // r11
  unsigned int v26; // r8d
  int v27; // r9d
  int v28; // r9d
  unsigned int v29; // eax
  unsigned int v30; // edx
  int v31; // edx
  unsigned __int16 v32; // r11
  unsigned int v33; // r8d
  int v34; // r9d
  int v35; // r9d
  unsigned int v36; // eax
  unsigned int v37; // edx
  int v38; // edx
  unsigned __int16 v39; // r11
  unsigned int v40; // r8d
  int v41; // r9d
  int v42; // r9d
  unsigned int v43; // eax
  unsigned int v44; // edx
  __int64 result; // rax

  v0 = 9LL;
  v1 = 3 * KeNumberProcessors_0;
  v2 = ExpPoolScanCount;
  if ( ExpPoolScanCount == (_DWORD)KeNumberProcessors_0 )
  {
    p_L = &KeGetCurrentPrcb()->PPLookasideList[0].L;
    while ( 1 )
    {
      v4 = *p_L;
      if ( !*p_L )
        goto LABEL_16;
      v5 = v4->AllocateMisses - v4->LastAllocateMisses;
      MaximumDepth = v4->MaximumDepth;
      v4->LastAllocateMisses = v4->AllocateMisses;
      v7 = v4->TotalAllocates - v4->LastTotalAllocates;
      v4->LastTotalAllocates = v4->TotalAllocates;
      if ( MaximumDepth == 0xFFFF )
        goto LABEL_16;
      Depth = v4->Depth;
      if ( v7 >= 25 * v1 )
      {
        v10 = 1000 * v5 / v7;
        if ( v10 >= 5 )
        {
          v11 = v10 * (MaximumDepth - Depth) / 0x7D0 + 5;
          if ( v11 > 0x1E )
            v11 = 30;
          v9 = v11 + Depth;
          if ( v9 > MaximumDepth )
            LOWORD(v9) = MaximumDepth;
          goto LABEL_15;
        }
        v9 = Depth - 1;
      }
      else
      {
        v9 = Depth - 10;
      }
      if ( v9 < 4 )
        LOWORD(v9) = 4;
LABEL_15:
      v4->Depth = v9;
LABEL_16:
      p_L += 2;
      if ( !--v0 )
      {
        v2 = ExpPoolScanCount;
        goto LABEL_71;
      }
    }
  }
  v12 = KiProcessorBlock[ExpPoolScanCount];
  v13 = (__int64 *)(v12 + 1920);
  do
  {
    v14 = *v13;
    if ( *v13 )
    {
      v15 = *(_DWORD *)(v14 + 24) - *(_DWORD *)(v14 + 84);
      v16 = *(_WORD *)(v14 + 18);
      *(_DWORD *)(v14 + 84) = *(_DWORD *)(v14 + 24);
      v17 = *(_DWORD *)(v14 + 20) - *(_DWORD *)(v14 + 80);
      *(_DWORD *)(v14 + 80) = *(_DWORD *)(v14 + 20);
      if ( v16 != 0xFFFF )
      {
        v18 = *(unsigned __int16 *)(v14 + 16);
        if ( v17 >= 25 * v1 )
        {
          v20 = 1000 * v15 / v17;
          if ( v20 >= 5 )
          {
            v21 = v20 * (v16 - v18) / 0x7D0 + 5;
            if ( v21 > 0x1E )
              v21 = 30;
            v19 = v21 + v18;
            if ( v19 > v16 )
              LOWORD(v19) = v16;
            goto LABEL_31;
          }
          v19 = v18 - 1;
        }
        else
        {
          v19 = v18 - 10;
        }
        if ( v19 < 4 )
          LOWORD(v19) = 4;
LABEL_31:
        *(_WORD *)(v14 + 16) = v19;
      }
    }
    v13 += 2;
    --v0;
  }
  while ( v0 );
  v22 = v12 + 2260;
  v23 = 32LL;
  while ( 2 )
  {
    v24 = *(_DWORD *)(v22 - 60) - *(_DWORD *)v22;
    v25 = *(_WORD *)(v22 - 66);
    *(_DWORD *)v22 = *(_DWORD *)(v22 - 60);
    v26 = *(_DWORD *)(v22 - 64) - *(_DWORD *)(v22 - 4);
    *(_DWORD *)(v22 - 4) = *(_DWORD *)(v22 - 64);
    if ( v25 == 0xFFFF )
      goto LABEL_46;
    v27 = *(unsigned __int16 *)(v22 - 68);
    if ( v26 >= 25 * v1 )
    {
      v29 = 1000 * (v26 - v24) / v26;
      if ( v29 < 5 )
      {
        v28 = v27 - 1;
        goto LABEL_39;
      }
      v30 = v29 * (v25 - v27) / 0x7D0 + 5;
      if ( v30 > 0x1E )
        v30 = 30;
      v28 = v30 + v27;
      if ( v28 > v25 )
        LOWORD(v28) = v25;
    }
    else
    {
      v28 = v27 - 10;
LABEL_39:
      if ( v28 < 4 )
        LOWORD(v28) = 4;
    }
    *(_WORD *)(v22 - 68) = v28;
LABEL_46:
    v31 = *(_DWORD *)(v22 + 3012) - *(_DWORD *)(v22 + 3072);
    v32 = *(_WORD *)(v22 + 3006);
    *(_DWORD *)(v22 + 3072) = *(_DWORD *)(v22 + 3012);
    v33 = *(_DWORD *)(v22 + 3008) - *(_DWORD *)(v22 + 3068);
    *(_DWORD *)(v22 + 3068) = *(_DWORD *)(v22 + 3008);
    if ( v32 == 0xFFFF )
      goto LABEL_58;
    v34 = *(unsigned __int16 *)(v22 + 3004);
    if ( v33 >= 25 * v1 )
    {
      v36 = 1000 * (v33 - v31) / v33;
      if ( v36 >= 5 )
      {
        v37 = v36 * (v32 - v34) / 0x7D0 + 5;
        if ( v37 > 0x1E )
          v37 = 30;
        v35 = v37 + v34;
        if ( v35 > v32 )
          LOWORD(v35) = v32;
        goto LABEL_57;
      }
      v35 = v34 - 1;
    }
    else
    {
      v35 = v34 - 10;
    }
    if ( v35 < 4 )
      LOWORD(v35) = 4;
LABEL_57:
    *(_WORD *)(v22 + 3004) = v35;
LABEL_58:
    v38 = *(_DWORD *)(v22 + 6084) - *(_DWORD *)(v22 + 6144);
    v39 = *(_WORD *)(v22 + 6078);
    *(_DWORD *)(v22 + 6144) = *(_DWORD *)(v22 + 6084);
    v40 = *(_DWORD *)(v22 + 6080) - *(_DWORD *)(v22 + 6140);
    *(_DWORD *)(v22 + 6140) = *(_DWORD *)(v22 + 6080);
    if ( v39 == 0xFFFF )
      goto LABEL_70;
    v41 = *(unsigned __int16 *)(v22 + 6076);
    if ( v40 >= 25 * v1 )
    {
      v43 = 1000 * (v40 - v38) / v40;
      if ( v43 >= 5 )
      {
        v44 = v43 * (v39 - v41) / 0x7D0 + 5;
        if ( v44 > 0x1E )
          v44 = 30;
        v42 = v44 + v41;
        if ( v42 > v39 )
          LOWORD(v42) = v39;
        goto LABEL_69;
      }
      v42 = v41 - 1;
    }
    else
    {
      v42 = v41 - 10;
    }
    if ( v42 < 4 )
      LOWORD(v42) = 4;
LABEL_69:
    *(_WORD *)(v22 + 6076) = v42;
LABEL_70:
    v22 += 96LL;
    if ( --v23 )
      continue;
    break;
  }
LABEL_71:
  result = (unsigned int)KeNumberProcessors_0;
  ExpPoolScanCount = v2 + 1;
  if ( v2 + 1 > (unsigned int)KeNumberProcessors_0 )
    ExpPoolScanCount = 0;
  return result;
}
