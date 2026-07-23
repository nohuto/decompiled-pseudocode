/*
 * XREFs of PnpNeedToReleaseBootResources @ 0x14055B95C
 * Callers:
 *     IopReleaseFilteredBootResources @ 0x14055B87C (IopReleaseFilteredBootResources.c)
 * Callees:
 *     PnpIsRangeWithin @ 0x14055BAAC (PnpIsRangeWithin.c)
 */

__int64 __fastcall PnpNeedToReleaseBootResources(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int *v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  _DWORD *v6; // rax
  unsigned int v7; // r15d
  _DWORD *v8; // rdi
  unsigned int v9; // r12d
  unsigned __int8 v10; // r14
  _DWORD *v11; // rsi
  int v12; // r13d
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v17; // [rsp+20h] [rbp-58h]
  int v18; // [rsp+24h] [rbp-54h]
  unsigned int v19; // [rsp+28h] [rbp-50h]
  unsigned int v20; // [rsp+2Ch] [rbp-4Ch]
  _DWORD *v21; // [rsp+88h] [rbp+10h]

  v21 = a2;
  v3 = *(unsigned int **)(a1 + 544);
  v4 = 0;
  *a3 = 0;
  if ( *a2 == 1 )
  {
    if ( v3 )
    {
      v5 = *v3;
      if ( *v3 )
      {
        v6 = v3 + 1;
        v7 = 0;
LABEL_5:
        v8 = v6 + 4;
        v9 = 0;
        v20 = v6[3];
        if ( !v20 )
          goto LABEL_23;
LABEL_6:
        v10 = *(_BYTE *)v8;
        if ( !*(_BYTE *)v8 )
          goto LABEL_21;
        if ( *(_BYTE *)v8 == 5 )
        {
          v15 = (unsigned int)v8[1];
          goto LABEL_22;
        }
        if ( v10 >= 8u )
          goto LABEL_21;
        v11 = a2 + 5;
        v18 = 0;
        v12 = 1;
        v17 = 0;
        v13 = 0;
        v19 = a2[4];
        if ( v19 )
        {
          while ( 1 )
          {
            if ( *(_BYTE *)v11 == 5 )
            {
              v14 = (unsigned int)v11[1];
            }
            else
            {
              if ( v10 == *(_BYTE *)v11 )
              {
                v18 = 1;
                if ( (unsigned int)PnpIsRangeWithin(v8, v11) )
                {
                  v12 = 0;
LABEL_18:
                  if ( !v18 )
                    return 1;
                  if ( v12 )
                  {
                    *a3 = 1;
                    return v4;
                  }
                  a2 = v21;
LABEL_21:
                  v15 = 0LL;
LABEL_22:
                  ++v9;
                  v8 = (_DWORD *)((char *)v8 + v15 + 20);
                  if ( v9 >= v20 )
                  {
LABEL_23:
                    ++v7;
                    v6 = v8;
                    if ( v7 >= v5 )
                      return v4;
                    goto LABEL_5;
                  }
                  goto LABEL_6;
                }
                v13 = v17;
              }
              v14 = 0LL;
            }
            ++v13;
            v11 = (_DWORD *)((char *)v11 + v14 + 20);
            v17 = v13;
            if ( v13 >= v19 )
              goto LABEL_18;
          }
        }
        return 1;
      }
    }
  }
  return v4;
}
