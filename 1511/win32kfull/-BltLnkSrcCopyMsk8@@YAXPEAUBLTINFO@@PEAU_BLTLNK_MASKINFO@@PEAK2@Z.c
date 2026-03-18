/*
 * XREFs of ?BltLnkSrcCopyMsk8@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02D3FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk8(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // rbx
  int v5; // r15d
  struct _BLTLNK_MASKINFO *v6; // r8
  __int64 v7; // r12
  __int64 v8; // r13
  int v9; // r11d
  __int64 v10; // rdi
  unsigned __int8 v11; // al
  _BYTE *v12; // r9
  int v13; // r14d
  _BYTE *v14; // r10
  int v15; // ebp
  int v16; // r8d
  char v17; // cl
  unsigned int v18; // edx
  int v19; // esi
  int v20; // eax
  unsigned int v21; // edx
  unsigned __int8 v22; // [rsp+0h] [rbp-48h]
  int v23; // [rsp+4h] [rbp-44h]

  v4 = a1;
  v5 = *((_DWORD *)a1 + 8);
  v6 = a2;
  v7 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a2 + 5);
  v10 = *(_QWORD *)a2;
  v23 = *((_DWORD *)a2 + 6);
  v11 = *((_BYTE *)a2 + 36);
  v22 = v11;
  while ( v5 )
  {
    --v5;
    v12 = (_BYTE *)(v7 + *((int *)v4 + 12));
    v13 = *((_DWORD *)v4 + 7);
    v14 = (_BYTE *)(v8 + *((int *)v4 + 14));
    v15 = *((_DWORD *)v6 + 7);
    if ( v13 <= 0 )
      goto LABEL_44;
    v16 = v11;
    do
    {
      v17 = 0;
      v18 = v16 ^ *(unsigned __int8 *)(((__int64)v15 >> 3) + v10);
      v19 = 8 - (v15 & 7);
      v20 = v23 - v15;
      if ( v19 > v13 )
      {
        v19 = v13;
        v17 = 8 - (v15 & 7) - v13;
      }
      if ( v19 > v20 )
      {
        v17 += v19 - v20;
        v19 = v23 - v15;
      }
      v13 -= v19;
      v15 += v19;
      if ( v18 )
      {
        v21 = v18 >> v17;
        if ( v19 != 1 )
        {
          if ( v19 != 2 )
          {
            if ( v19 != 3 )
            {
              if ( v19 != 4 )
              {
                if ( v19 != 5 )
                {
                  if ( v19 != 6 )
                  {
                    if ( v19 != 7 )
                    {
                      if ( v19 != 8 )
                        goto LABEL_40;
                      if ( (v21 & 1) != 0 )
                        v14[7] = v12[7];
                      v21 >>= 1;
                    }
                    if ( (v21 & 1) != 0 )
                      v14[6] = v12[6];
                    v21 >>= 1;
                  }
                  if ( (v21 & 1) != 0 )
                    v14[5] = v12[5];
                  v21 >>= 1;
                }
                if ( (v21 & 1) != 0 )
                  v14[4] = v12[4];
                v21 >>= 1;
              }
              if ( (v21 & 1) != 0 )
                v14[3] = v12[3];
              v21 >>= 1;
            }
            if ( (v21 & 1) != 0 )
              v14[2] = v12[2];
            v21 >>= 1;
          }
          if ( (v21 & 1) != 0 )
            v14[1] = v12[1];
          v21 >>= 1;
        }
        if ( (v21 & 1) != 0 )
          *v14 = *v12;
      }
LABEL_40:
      v12 += v19;
      v14 += v19;
      if ( v15 == v23 )
        v15 = 0;
    }
    while ( v13 > 0 );
    v6 = a2;
    v4 = a1;
LABEL_44:
    v8 += *((int *)v4 + 11);
    v7 += *((int *)v4 + 10);
    if ( *((int *)v4 + 9) <= 0 )
    {
      if ( v9 )
      {
        --v9;
        v10 += *((int *)v6 + 8);
      }
      else
      {
        v9 = *((_DWORD *)v6 + 4) - 1;
        v10 = *((_QWORD *)v6 + 1) + *((_DWORD *)v6 + 8) * v9;
      }
    }
    else
    {
      ++v9;
      v10 += *((int *)v6 + 8);
      if ( v9 >= *((_DWORD *)v6 + 4) )
      {
        v10 = *((_QWORD *)v6 + 1);
        v9 = 0;
      }
    }
    v11 = v22;
  }
}
