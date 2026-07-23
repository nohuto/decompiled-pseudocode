/*
 * XREFs of PpmParkCalculateUnparkCount @ 0x1400D2AAC
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x14020AA78 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     <none>
 */

char PpmParkCalculateUnparkCount()
{
  __int64 v1; // rcx
  unsigned int v2; // r15d
  unsigned int v3; // r12d
  unsigned int v4; // r14d
  unsigned __int16 v5; // di
  char *v6; // rcx
  unsigned __int8 v7; // r13
  char *v8; // r9
  unsigned __int8 v9; // bp
  unsigned int v10; // r14d
  __int64 v11; // rsi
  unsigned __int8 v12; // bl
  unsigned __int8 v13; // r10
  unsigned __int8 v14; // r11
  unsigned __int8 v15; // dl
  bool v16; // cc
  int v17; // r10d
  int v18; // r10d
  unsigned int v19; // [rsp+0h] [rbp-58h]
  int v20; // [rsp+4h] [rbp-54h]
  char *v21; // [rsp+8h] [rbp-50h]
  char v22; // [rsp+60h] [rbp+8h]
  char v23; // [rsp+68h] [rbp+10h]
  char v24; // [rsp+70h] [rbp+18h]
  __int16 v25; // [rsp+78h] [rbp+20h]

  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = 174LL * dword_140303D4C;
  v2 = HIDWORD(PpmCurrentProfile[v1 + 15]);
  v3 = PpmCurrentProfile[v1 + 15];
  v23 = BYTE6(PpmCurrentProfile[v1 + 14]);
  v24 = BYTE5(PpmCurrentProfile[v1 + 14]);
  v19 = BYTE3(PpmCurrentProfile[v1 + 14]);
  if ( PpmCheckCurrentPipelineId == 5 )
  {
    v3 = 0;
    v2 = 0;
  }
  v4 = PpmParkNumNodes;
  v5 = 0;
  v25 = 0;
  v20 = PpmParkNumNodes;
  if ( !PpmParkNumNodes )
    return 1;
  v6 = (char *)PpmParkNodes;
  v7 = PpmParkGranularity;
  v21 = (char *)PpmParkNodes;
  v22 = PpmParkUnparkCores;
  do
  {
    v8 = &v6[120 * v5];
    if ( (v8[114] & 1) != 0 )
      goto LABEL_46;
    ++*(_DWORD *)v8;
    v9 = 0;
    v10 = *(_DWORD *)v8;
    v11 = 0LL;
    do
    {
      v12 = v8[v11 + 96];
      if ( v12 && ((unsigned __int8)(1 << (v9 + 1)) & (unsigned __int8)v8[114]) == 0 )
      {
        v13 = v8[108];
        v14 = v7;
        if ( v22 )
          v14 = 1;
        if ( v13 < v12 && (unsigned __int8)v8[109] > v19 )
          ++v13;
        v15 = v8[v11 + 106];
        v16 = v15 <= v13;
        if ( v15 < v13 )
        {
          if ( v15 < v12 && v10 >= v2 )
          {
            *(_DWORD *)v8 = 0;
            if ( v23 )
            {
              switch ( v23 )
              {
                case 1:
                  v15 += v14;
                  break;
                case 2:
                  goto LABEL_42;
                case 3:
                  v17 = (unsigned __int8)v8[113];
                  if ( v17 + v15 >= v12 )
                    v15 = v12;
                  else
                    v15 += v17;
                  break;
              }
LABEL_41:
              if ( v15 < v12 )
              {
LABEL_43:
                v8[v11 + 106] = v15;
                goto LABEL_44;
              }
LABEL_42:
              v15 = v12;
              goto LABEL_43;
            }
            goto LABEL_40;
          }
          v16 = v15 <= v13;
        }
        if ( v16 || v15 <= v14 || v10 < v3 )
          goto LABEL_41;
        *(_DWORD *)v8 = 0;
        if ( v24 )
        {
          switch ( v24 )
          {
            case 1:
              v15 -= v14;
              break;
            case 2:
              v15 = v14;
              break;
            case 3:
              v18 = (unsigned __int8)v8[113];
              if ( v15 <= v18 + v7 )
                v15 = v7;
              else
                v15 -= v18;
              break;
          }
          goto LABEL_41;
        }
LABEL_40:
        v15 = v13;
        goto LABEL_41;
      }
LABEL_44:
      ++v9;
      ++v11;
    }
    while ( v9 < 2u );
    v5 = v25;
    v4 = v20;
    v6 = v21;
LABEL_46:
    v25 = ++v5;
  }
  while ( v5 < v4 );
  return 1;
}
