/*
 * XREFs of ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0058578
 * Callers:
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0058100 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E37A8 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CitpProgramIdCalculateHash(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r10
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 *v10; // r9
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  __int64 v18; // r8
  unsigned __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d
  int v25; // r8d
  int v26; // r8d
  int v27; // r8d

  v1 = *a1;
  v2 = -1LL;
  v4 = 314159LL;
  if ( *a1 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&v1[2 * v5] );
    v6 = 2 * v5;
    if ( v6 >= 8 )
    {
      v7 = (unsigned __int64)v6 >> 3;
      v6 -= 8 * ((unsigned __int64)v6 >> 3);
      do
      {
        v8 = v1[6] + 37 * (v1[5] + 37 * (v1[4] + 37 * (v1[3] + 37 * (v1[2] + 37 * (v1[1] + 37 * (*v1 + 37 * v4))))));
        v9 = v1[7];
        v1 += 8;
        v4 = v9 + 37 * v8;
        --v7;
      }
      while ( v7 );
    }
    if ( v6 >= 1 && v6 <= 7 )
    {
      v12 = v6 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 != 1 )
                    goto LABEL_8;
                  v4 = *v1++ + 37 * v4;
                }
                v4 = *v1++ + 37 * v4;
              }
              v4 = *v1++ + 37 * v4;
            }
            v4 = *v1++ + 37 * v4;
          }
          v4 = *v1++ + 37 * v4;
        }
        v4 = *v1++ + 37 * v4;
      }
      v4 = *v1 + 37 * v4;
    }
  }
LABEL_8:
  v10 = a1[1];
  if ( v10 )
  {
    do
      ++v2;
    while ( *(_WORD *)&v10[2 * v2] );
    v18 = 2 * v2;
    if ( v18 >= 8 )
    {
      v19 = (unsigned __int64)v18 >> 3;
      v18 -= 8 * ((unsigned __int64)v18 >> 3);
      do
      {
        v20 = v10[6]
            + 37 * (v10[5] + 37 * (v10[4] + 37 * (v10[3] + 37 * (v10[2] + 37 * (v10[1] + 37 * (*v10 + 37 * v4))))));
        v21 = v10[7];
        v10 += 8;
        v4 = v21 + 37 * v20;
        --v19;
      }
      while ( v19 );
    }
    if ( (unsigned __int64)(v18 - 1) <= 6 )
    {
      v22 = v18 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  if ( v27 != 1 )
                    return v4 ^ *((unsigned int *)a1 + 6) ^ *((unsigned int *)a1 + 7) ^ (unsigned __int64)*((unsigned int *)a1 + 8);
                  v4 = *v10++ + 37 * v4;
                }
                v4 = *v10++ + 37 * v4;
              }
              v4 = *v10++ + 37 * v4;
            }
            v4 = *v10++ + 37 * v4;
          }
          v4 = *v10++ + 37 * v4;
        }
        v4 = *v10++ + 37 * v4;
      }
      v4 = *v10 + 37 * v4;
    }
  }
  return v4 ^ *((unsigned int *)a1 + 6) ^ *((unsigned int *)a1 + 7) ^ (unsigned __int64)*((unsigned int *)a1 + 8);
}
