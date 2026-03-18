/*
 * XREFs of NVMeMapError @ 0x1C000D604
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0001F70 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     memmove @ 0x1C0002E40 (memmove.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     GetSrbScsiData @ 0x1C0009628 (GetSrbScsiData.c)
 */

void *__fastcall NVMeMapError(__int64 a1)
{
  __int64 SrbExtension; // r8
  char v3; // bl
  char v4; // si
  unsigned int v5; // ecx
  int v6; // edx
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  char v21; // al
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  char v43; // al
  void *result; // rax
  char *v45; // r14
  unsigned __int8 v46; // si
  unsigned int v47; // ebx
  char Src; // [rsp+30h] [rbp-20h] BYREF
  __int64 v49; // [rsp+31h] [rbp-1Fh]
  __int64 v50; // [rsp+39h] [rbp-17h]
  char v51; // [rsp+41h] [rbp-Fh]
  unsigned __int8 v52; // [rsp+98h] [rbp+48h] BYREF
  char *v53; // [rsp+A0h] [rbp+50h] BYREF
  void *v54; // [rsp+A8h] [rbp+58h] BYREF

  SrbExtension = GetSrbExtension(a1);
  v53 = 0LL;
  v3 = 0;
  v49 = 0LL;
  Src = 0;
  v4 = 0;
  v5 = *(unsigned __int16 *)(SrbExtension + 4242);
  v50 = 0LL;
  v51 = 0;
  v54 = 0LL;
  v52 = 0;
  v6 = (v5 >> 9) & 7;
  if ( !v6 )
  {
    v28 = (unsigned __int8)(v5 >> 1);
    if ( v28 <= 128 )
    {
      if ( v28 == 128 )
      {
        *(_WORD *)((char *)&v50 + 3) = 33;
        v21 = BYTE1(v49) & 0xF0 | 5;
        goto LABEL_83;
      }
      if ( v28 > 9 )
      {
        v35 = v28 - 10;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( !v36 )
          {
            *(_WORD *)((char *)&v50 + 3) = 2336;
            v21 = BYTE1(v49) & 0xF0 | 5;
            goto LABEL_83;
          }
          v37 = v36 - 1;
          if ( !v37 )
          {
            *(_WORD *)((char *)&v50 + 3) = 44;
            v21 = BYTE1(v49) & 0xF0 | 5;
            goto LABEL_83;
          }
          v38 = v37 - 1;
          if ( v38 )
          {
            v39 = v38 - 1;
            if ( v39 )
            {
              v40 = v39 - 1;
              if ( v40 )
              {
                if ( (unsigned int)(v40 - 1) > 1 )
                  goto LABEL_85;
              }
            }
          }
          goto LABEL_31;
        }
      }
      else if ( v28 != 9 )
      {
        if ( !v28 )
        {
          *(_BYTE *)(a1 + 3) = 1;
          v4 = 0;
          goto LABEL_86;
        }
        v29 = v28 - 1;
        if ( !v29 )
        {
          *(_WORD *)((char *)&v50 + 3) = 32;
          v21 = BYTE1(v49) & 0xF0 | 5;
          goto LABEL_83;
        }
        v30 = v29 - 1;
        if ( !v30 )
          goto LABEL_30;
        v31 = v30 - 1;
        if ( !v31 )
        {
          *(_WORD *)((char *)&v50 + 3) = 35;
          v21 = BYTE1(v49) & 0xF0 | 5;
          goto LABEL_83;
        }
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( !v33 )
          {
            v4 = 34;
            *(_WORD *)((char *)&v50 + 3) = 2059;
            v21 = BYTE1(v49) & 0xF0 | 0xB;
            goto LABEL_84;
          }
          v34 = v33 - 1;
          if ( !v34 )
          {
            *(_WORD *)((char *)&v50 + 3) = 68;
            v21 = BYTE1(v49) & 0xF0 | 4;
            goto LABEL_83;
          }
          if ( (unsigned int)(v34 - 1) > 1 )
            goto LABEL_85;
          goto LABEL_57;
        }
LABEL_81:
        *(_WORD *)((char *)&v50 + 3) = 0;
        goto LABEL_82;
      }
LABEL_57:
      v4 = 34;
      *(_WORD *)((char *)&v50 + 3) = 0;
      v21 = BYTE1(v49) & 0xF0 | 0xB;
      goto LABEL_84;
    }
    v41 = v28 - 129;
    if ( v41 )
    {
      v42 = v41 - 1;
      if ( !v42 )
      {
        v4 = 2;
        v43 = BYTE1(v49) & 0xF2;
        *(_BYTE *)(a1 + 3) = 4;
        BYTE6(v49) = 10;
        BYTE1(v49) = v43 | 2;
        v3 = -16;
        Src = -16;
        if ( *(__int16 *)(SrbExtension + 4242) >= 0 )
          *(_WORD *)((char *)&v50 + 3) = 260;
        else
          *(_WORD *)((char *)&v50 + 3) = 4;
        goto LABEL_86;
      }
      if ( v42 != 1 )
      {
LABEL_85:
        *(_BYTE *)(a1 + 3) = 4;
        goto LABEL_86;
      }
      v4 = 24;
      *(_WORD *)((char *)&v50 + 3) = 2348;
      v21 = BYTE1(v49) & 0xF0 | 5;
LABEL_84:
      v3 = -16;
      BYTE6(v49) = 10;
      Src = -16;
      BYTE1(v49) = v21;
      goto LABEL_85;
    }
    goto LABEL_81;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v14 = (unsigned __int8)(v5 >> 1);
    if ( v14 > 128 )
    {
      v20 = v14 - 129;
      if ( v20 )
      {
LABEL_29:
        if ( v20 != 1 )
          goto LABEL_85;
        goto LABEL_30;
      }
      goto LABEL_30;
    }
    if ( v14 == 128 )
      goto LABEL_30;
    if ( v14 > 9 )
    {
      v22 = v14 - 10;
      if ( !v22 )
      {
        *(_WORD *)((char *)&v50 + 3) = 305;
        v21 = BYTE1(v49) & 0xF0 | 5;
        goto LABEL_83;
      }
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( !v24 )
          goto LABEL_30;
        v25 = v24 - 1;
        if ( !v25 )
          goto LABEL_30;
        v26 = v25 - 1;
        if ( !v26 )
          goto LABEL_30;
        v27 = v26 - 1;
        if ( !v27 )
          goto LABEL_30;
        if ( v27 != 1 )
          goto LABEL_85;
      }
      v21 = BYTE1(v49) & 0xF0 | 6;
      goto LABEL_32;
    }
    if ( v14 == 9 )
    {
LABEL_30:
      *(_WORD *)((char *)&v50 + 3) = 36;
      v21 = BYTE1(v49) & 0xF0 | 5;
LABEL_83:
      v4 = 2;
      goto LABEL_84;
    }
    if ( !v14 || (v15 = v14 - 1) == 0 )
    {
      *(_WORD *)((char *)&v50 + 3) = 38;
      v21 = BYTE1(v49) & 0xF0 | 5;
      goto LABEL_83;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 2;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
              goto LABEL_29;
            goto LABEL_31;
          }
          goto LABEL_30;
        }
      }
    }
LABEL_31:
    v21 = BYTE1(v49) & 0xF0 | 5;
LABEL_32:
    *(_WORD *)((char *)&v50 + 3) = 0;
    goto LABEL_83;
  }
  if ( v7 != 1 )
    goto LABEL_85;
  v8 = (unsigned __int8)(v5 >> 1) - 128;
  if ( !v8 )
  {
    *(_WORD *)((char *)&v50 + 3) = 3;
    goto LABEL_82;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *(_WORD *)((char *)&v50 + 3) = 17;
    goto LABEL_82;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *(_WORD *)((char *)&v50 + 3) = 272;
    goto LABEL_82;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *(_WORD *)((char *)&v50 + 3) = 529;
LABEL_82:
    v21 = BYTE1(v49) & 0xF0 | 3;
    goto LABEL_83;
  }
  *(_BYTE *)(a1 + 3) = 4;
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        v3 = -16;
        Src = -16;
        BYTE6(v49) = 10;
        BYTE1(v49) = BYTE1(v49) & 0xF0 | 5;
        v4 = 2;
        *(_WORD *)((char *)&v50 + 3) = 2336;
      }
    }
    else
    {
      v3 = -16;
      Src = -16;
      BYTE6(v49) = 10;
      BYTE1(v49) = BYTE1(v49) & 0xF0 | 0xE;
      v4 = 2;
      *(_WORD *)((char *)&v50 + 3) = 29;
    }
  }
  else
  {
    v3 = -16;
    Src = -16;
    BYTE6(v49) = 10;
    BYTE1(v49) = BYTE1(v49) & 0xF0 | 3;
    v4 = 2;
    *(_WORD *)((char *)&v50 + 3) = 785;
  }
LABEL_86:
  result = (void *)GetSrbScsiData(a1, 0LL, &v53, &v54, &v52);
  if ( v53 )
    *v53 = v4;
  if ( v3 < 0 )
  {
    v45 = (char *)v54;
    if ( v54 )
    {
      v46 = v52;
      if ( v52 )
      {
        v47 = 18;
        if ( v52 <= 0x12u )
          v47 = v52;
        result = memmove(v54, &Src, v47);
        *(_BYTE *)(a1 + 3) |= 0x80u;
        if ( v46 > v47 )
          return NVMeZeroMemory(&v45[v47], v46 - v47);
      }
    }
  }
  return result;
}
