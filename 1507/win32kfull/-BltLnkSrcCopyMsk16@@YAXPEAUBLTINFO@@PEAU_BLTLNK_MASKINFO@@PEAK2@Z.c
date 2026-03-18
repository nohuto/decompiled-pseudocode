/*
 * XREFs of ?BltLnkSrcCopyMsk16@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02D2780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk16(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // r10
  int v5; // r15d
  struct _BLTLNK_MASKINFO *v6; // r8
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int8 v9; // cl
  int v10; // r9d
  __int64 v11; // r11
  int v12; // r14d
  int v13; // ebp
  _WORD *v14; // rdi
  _WORD *v15; // rsi
  int v16; // r8d
  char v17; // cl
  unsigned int v18; // edx
  int v19; // ebx
  int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rax
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
    v12 = *((_DWORD *)v4 + 7);
    v13 = *((_DWORD *)v6 + 7);
    v14 = (_WORD *)(v7 + 2LL * *((int *)v4 + 12));
    v15 = (_WORD *)(v8 + 2LL * *((int *)v4 + 14));
    if ( v12 > 0 )
    {
      v16 = v9;
      while ( 1 )
      {
        v17 = 0;
        v18 = v16 ^ *(unsigned __int8 *)(((__int64)v13 >> 3) + v11);
        v19 = 8 - (v13 & 7);
        v20 = v24 - v13;
        if ( v19 > v12 )
        {
          v19 = v12;
          v17 = 8 - (v13 & 7) - v12;
        }
        if ( v19 > v20 )
        {
          v17 += v19 - v20;
          v19 = v24 - v13;
        }
        v12 -= v19;
        v13 += v19;
        if ( !v18 )
          goto LABEL_40;
        v21 = v18 >> v17;
        switch ( v19 )
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
        if ( v19 == 8 )
          break;
LABEL_40:
        v22 = 2LL * v19;
        v14 = (_WORD *)((char *)v14 + v22);
        v15 = (_WORD *)((char *)v15 + v22);
        if ( v13 == v24 )
          v13 = 0;
        if ( v12 <= 0 )
        {
          v6 = a2;
          v4 = a1;
          v9 = v23;
          goto LABEL_44;
        }
      }
      if ( (v21 & 1) != 0 )
        v15[7] = v14[7];
      v21 >>= 1;
LABEL_20:
      if ( (v21 & 1) != 0 )
        v15[6] = v14[6];
      v21 >>= 1;
LABEL_23:
      if ( (v21 & 1) != 0 )
        v15[5] = v14[5];
      v21 >>= 1;
LABEL_26:
      if ( (v21 & 1) != 0 )
        v15[4] = v14[4];
      v21 >>= 1;
LABEL_29:
      if ( (v21 & 1) != 0 )
        v15[3] = v14[3];
      v21 >>= 1;
LABEL_32:
      if ( (v21 & 1) != 0 )
        v15[2] = v14[2];
      v21 >>= 1;
LABEL_35:
      if ( (v21 & 1) != 0 )
        v15[1] = v14[1];
      v21 >>= 1;
LABEL_38:
      if ( (v21 & 1) != 0 )
        *v15 = *v14;
      goto LABEL_40;
    }
LABEL_44:
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
