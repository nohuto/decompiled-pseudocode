/*
 * XREFs of EtwpEventNameFilterSearch @ 0x140229B6C
 * Callers:
 *     EtwpApplyEventNameFilter @ 0x140229810 (EtwpApplyEventNameFilter.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpEventNameFilterSearch(const char *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // r11
  unsigned __int8 *v6; // r10
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r11d
  int v12; // r11d
  int v13; // r11d
  int v14; // r11d
  int v15; // r11d
  int v16; // r11d
  int v17; // r11d
  __int64 v18; // rbx
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v22; // [rsp+8h] [rbp+8h]

  v3 = a2;
  v6 = (unsigned __int8 *)a1;
  v7 = 314159LL;
  if ( a2 >= 8uLL )
  {
    v8 = (unsigned __int64)a2 >> 3;
    v3 = a2 - 8 * v8;
    do
    {
      v9 = v6[6] + 37 * (v6[5] + 37 * (v6[4] + 37 * (v6[3] + 37 * (v6[2] + 37 * (v6[1] + 37 * (*v6 + 37 * v7))))));
      v10 = v6[7];
      v6 += 8;
      v7 = v10 + 37 * v9;
      --v8;
    }
    while ( v8 );
  }
  if ( (unsigned __int64)(v3 - 1) <= 6 )
  {
    v11 = v3 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
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
                if ( v16 != 1 )
                  goto LABEL_19;
                v7 = *v6++ + 37 * v7;
              }
              v7 = *v6++ + 37 * v7;
            }
            v7 = *v6++ + 37 * v7;
          }
          v7 = *v6++ + 37 * v7;
        }
        v7 = *v6++ + 37 * v7;
      }
      v7 = *v6++ + 37 * v7;
    }
    v7 = *v6 + 37 * v7;
  }
LABEL_19:
  v17 = *(_DWORD *)(a3 + 28) >> 5;
  v18 = -1LL << (*(_BYTE *)(a3 + 28) & 0x1F);
  v19 = v18 & v7;
  if ( v17 )
  {
    v22 = v18 & v7;
    v20 = *(_QWORD *)(a3 + 32)
        + 8LL
        * ((37
          * (BYTE6(v22)
           + 37
           * (BYTE5(v22)
            + 37
            * (BYTE4(v22)
             + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v22)) & (unsigned int)(v17 - 1));
    do
    {
      v20 = *(_QWORD *)v20;
      if ( (v20 & 1) != 0 )
        goto LABEL_28;
    }
    while ( v19 != (v18 & *(_QWORD *)(v20 + 8)) );
LABEL_29:
    while ( v20 )
    {
      if ( !strcmp(a1, *(const char **)(v20 + 16)) )
        return 1;
      while ( 1 )
      {
        v20 = *(_QWORD *)v20;
        if ( (v20 & 1) != 0 )
          break;
        if ( (v7 & (-1LL << (*(_BYTE *)(a3 + 28) & 0x1F))) == ((-1LL << (*(_BYTE *)(a3 + 28) & 0x1F)) & *(_QWORD *)(v20 + 8)) )
          goto LABEL_29;
      }
LABEL_28:
      v20 = 0LL;
    }
  }
  return 0;
}
