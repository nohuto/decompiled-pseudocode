/*
 * XREFs of ?BltLnkSrcCopyMsk32@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C00FF540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk32(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // r10
  int v5; // r15d
  struct _BLTLNK_MASKINFO *v6; // r8
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int8 v9; // cl
  int v10; // r9d
  __int64 v11; // r11
  char v12; // cl
  unsigned int v13; // edx
  int v14; // ebx
  int v15; // eax
  int v16; // r14d
  int v17; // ebp
  unsigned int v18; // edx
  __int64 v19; // rax
  _DWORD *v20; // rdi
  _DWORD *v21; // rsi
  int v22; // r8d
  unsigned __int8 v23; // [rsp+0h] [rbp-48h]
  int v24; // [rsp+4h] [rbp-44h]

  v4 = a1;
  v5 = *((_DWORD *)a1 + 8);
  v6 = a2;
  v7 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_BYTE *)a2 + 36);
  v10 = *((_DWORD *)a2 + 5);
  v11 = *(_QWORD *)a2;
  v23 = v9;
  v24 = *((_DWORD *)a2 + 6);
  while ( v5 )
  {
    --v5;
    v16 = *((_DWORD *)v4 + 7);
    v17 = *((_DWORD *)v6 + 7);
    v20 = (_DWORD *)(v7 + 4LL * *((int *)v4 + 12));
    v21 = (_DWORD *)(v8 + 4LL * *((int *)v4 + 14));
    if ( v16 <= 0 )
      goto LABEL_42;
    v22 = v9;
    do
    {
      v12 = 0;
      v13 = v22 ^ *(unsigned __int8 *)(((__int64)v17 >> 3) + v11);
      v14 = 8 - (v17 & 7);
      v15 = v24 - v17;
      if ( v14 > v16 )
      {
        v14 = v16;
        v12 = 8 - (v17 & 7) - v16;
      }
      if ( v14 > v15 )
      {
        v12 += v14 - v15;
        v14 = v24 - v17;
      }
      v16 -= v14;
      v17 += v14;
      if ( v13 )
      {
        v18 = v13 >> v12;
        if ( v14 != 1 )
        {
          if ( v14 != 2 )
          {
            if ( v14 != 3 )
            {
              if ( v14 != 4 )
              {
                if ( v14 != 5 )
                {
                  if ( v14 != 6 )
                  {
                    if ( v14 != 7 )
                    {
                      if ( v14 != 8 )
                        goto LABEL_38;
                      if ( (v18 & 1) != 0 )
                        v21[7] = v20[7];
                      v18 >>= 1;
                    }
                    if ( (v18 & 1) != 0 )
                      v21[6] = v20[6];
                    v18 >>= 1;
                  }
                  if ( (v18 & 1) != 0 )
                    v21[5] = v20[5];
                  v18 >>= 1;
                }
                if ( (v18 & 1) != 0 )
                  v21[4] = v20[4];
                v18 >>= 1;
              }
              if ( (v18 & 1) != 0 )
                v21[3] = v20[3];
              v18 >>= 1;
            }
            if ( (v18 & 1) != 0 )
              v21[2] = v20[2];
            v18 >>= 1;
          }
          if ( (v18 & 1) != 0 )
            v21[1] = v20[1];
          v18 >>= 1;
        }
        if ( (v18 & 1) != 0 )
          *v21 = *v20;
      }
LABEL_38:
      v19 = 4LL * v14;
      v20 = (_DWORD *)((char *)v20 + v19);
      v21 = (_DWORD *)((char *)v21 + v19);
      if ( v17 == v24 )
        v17 = 0;
    }
    while ( v16 > 0 );
    v6 = a2;
    v4 = a1;
    v9 = v23;
LABEL_42:
    v8 += *((int *)v4 + 11);
    v7 += *((int *)v4 + 10);
    if ( *((int *)v4 + 9) <= 0 )
    {
      if ( v10 )
      {
        --v10;
        v11 += *((int *)v6 + 8);
      }
      else
      {
        v10 = *((_DWORD *)v6 + 4) - 1;
        v11 = *((_QWORD *)v6 + 1) + v10 * *((_DWORD *)v6 + 8);
      }
    }
    else
    {
      ++v10;
      v11 += *((int *)v6 + 8);
      if ( v10 >= *((_DWORD *)v6 + 4) )
      {
        v11 = *((_QWORD *)v6 + 1);
        v10 = 0;
      }
    }
  }
}
