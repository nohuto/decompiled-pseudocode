/*
 * XREFs of ?BltLnkSrcCopyMsk24@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C0141B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk24(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // eax
  struct _BLTLNK_MASKINFO *v5; // r10
  int v6; // r11d
  struct BLTINFO *v7; // rsi
  __int64 v8; // rdi
  unsigned __int8 v9; // dl
  int v10; // r15d
  __int64 v11; // r12
  __int64 v12; // r13
  int v13; // r14d
  int v14; // ebp
  _BYTE *v15; // r8
  _BYTE *v16; // r9
  int v17; // r10d
  char v18; // cl
  unsigned int v19; // edx
  int v20; // ebx
  int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  unsigned __int8 v24; // [rsp+0h] [rbp-48h]
  int v25; // [rsp+4h] [rbp-44h]

  v4 = *((_DWORD *)a2 + 6);
  v5 = a2;
  v6 = *((_DWORD *)a2 + 5);
  v7 = a1;
  v8 = *(_QWORD *)a2;
  v9 = *((_BYTE *)a2 + 36);
  v10 = *((_DWORD *)a1 + 8);
  v11 = *((_QWORD *)a1 + 1);
  v12 = *((_QWORD *)a1 + 2);
  v24 = v9;
  v25 = v4;
  while ( v10 )
  {
    --v10;
    v13 = *((_DWORD *)v7 + 7);
    v14 = *((_DWORD *)v5 + 7);
    v15 = (_BYTE *)(v11 + 3 * *((_DWORD *)v7 + 12));
    v16 = (_BYTE *)(v12 + 3 * *((_DWORD *)v7 + 14));
    if ( v13 > 0 )
    {
      v17 = v9;
      while ( 1 )
      {
        v18 = 0;
        v19 = v17 ^ *(unsigned __int8 *)(((__int64)v14 >> 3) + v8);
        v20 = 8 - (v14 & 7);
        v21 = v25 - v14;
        if ( v20 > v13 )
        {
          v20 = v13;
          v18 = 8 - (v14 & 7) - v13;
        }
        if ( v20 > v21 )
        {
          v18 += v20 - v21;
          v20 = v25 - v14;
        }
        v13 -= v20;
        v14 += v20;
        if ( !v19 )
          goto LABEL_40;
        v22 = v19 >> v18;
        switch ( v20 )
        {
          case 1:
            goto LABEL_38;
          case 2:
            goto LABEL_35;
          case 3:
            goto LABEL_32;
          case 4:
            goto LABEL_29;
          case 5:
            goto LABEL_26;
          case 6:
            goto LABEL_23;
          case 7:
            goto LABEL_20;
        }
        if ( v20 == 8 )
          break;
LABEL_40:
        v23 = 3 * v20;
        v15 += v23;
        v16 += v23;
        if ( v14 == v25 )
          v14 = 0;
        if ( v13 <= 0 )
        {
          v5 = a2;
          v7 = a1;
          v9 = v24;
          goto LABEL_44;
        }
      }
      if ( (v22 & 1) != 0 )
      {
        v16[23] = v15[23];
        v16[22] = v15[22];
        v16[21] = v15[21];
      }
      v22 >>= 1;
LABEL_20:
      if ( (v22 & 1) != 0 )
      {
        v16[20] = v15[20];
        v16[19] = v15[19];
        v16[18] = v15[18];
      }
      v22 >>= 1;
LABEL_23:
      if ( (v22 & 1) != 0 )
      {
        v16[17] = v15[17];
        v16[16] = v15[16];
        v16[15] = v15[15];
      }
      v22 >>= 1;
LABEL_26:
      if ( (v22 & 1) != 0 )
      {
        v16[14] = v15[14];
        v16[13] = v15[13];
        v16[12] = v15[12];
      }
      v22 >>= 1;
LABEL_29:
      if ( (v22 & 1) != 0 )
      {
        v16[11] = v15[11];
        v16[10] = v15[10];
        v16[9] = v15[9];
      }
      v22 >>= 1;
LABEL_32:
      if ( (v22 & 1) != 0 )
      {
        v16[8] = v15[8];
        v16[7] = v15[7];
        v16[6] = v15[6];
      }
      v22 >>= 1;
LABEL_35:
      if ( (v22 & 1) != 0 )
      {
        v16[5] = v15[5];
        v16[4] = v15[4];
        v16[3] = v15[3];
      }
      v22 >>= 1;
LABEL_38:
      if ( (v22 & 1) != 0 )
      {
        v16[2] = v15[2];
        v16[1] = v15[1];
        *v16 = *v15;
      }
      goto LABEL_40;
    }
LABEL_44:
    v12 += *((int *)v7 + 11);
    v11 += *((int *)v7 + 10);
    if ( *((int *)v7 + 9) <= 0 )
    {
      if ( v6 )
      {
        --v6;
        v8 += *((int *)v5 + 8);
      }
      else
      {
        v6 = *((_DWORD *)v5 + 4) - 1;
        v8 = *((_QWORD *)v5 + 1) + v6 * *((_DWORD *)v5 + 8);
      }
    }
    else
    {
      ++v6;
      v8 += *((int *)v5 + 8);
      if ( v6 >= *((_DWORD *)v5 + 4) )
      {
        v8 = *((_QWORD *)v5 + 1);
        v6 = 0;
      }
    }
  }
}
