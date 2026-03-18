/*
 * XREFs of ?BltLnkPatMaskCopy32@@YAXPEAUBLTINFO@@KPEAKE@Z @ 0x1C00F2A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkPatMaskCopy32(struct BLTINFO *a1, int a2, unsigned int *a3, unsigned __int8 a4)
{
  int v4; // edi
  __int64 v6; // rbp
  __int64 v8; // rsi
  char v10; // cl
  unsigned int v11; // edx
  int v12; // r9d
  int v13; // ebx
  int v14; // r14d
  _DWORD *v15; // r8
  unsigned int v16; // edx

  v4 = *((_DWORD *)a1 + 8);
  v6 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  while ( v4 )
  {
    --v4;
    v13 = *((_DWORD *)a1 + 7);
    v14 = *((_DWORD *)a1 + 12);
    v15 = (_DWORD *)(v8 + 4LL * *((int *)a1 + 14));
    if ( v13 > 0 )
    {
      while ( 1 )
      {
        v10 = 0;
        v11 = a4 ^ *(unsigned __int8 *)(((__int64)v14 >> 3) + v6);
        v12 = 8 - (v14 & 7);
        if ( v12 > v13 )
        {
          v12 = v13;
          v10 = 8 - (v14 & 7) - v13;
        }
        v13 -= v12;
        v14 += v12;
        if ( v11 == 255 )
          goto LABEL_5;
        v16 = v11 >> v10;
        switch ( v12 )
        {
          case 1:
            goto LABEL_39;
          case 2:
            goto LABEL_36;
          case 3:
            goto LABEL_33;
          case 4:
            goto LABEL_30;
          case 5:
            goto LABEL_27;
          case 6:
            goto LABEL_24;
          case 7:
            goto LABEL_21;
        }
        if ( v12 == 8 )
          break;
LABEL_5:
        v15 += v12;
        if ( v13 <= 0 )
          goto LABEL_6;
      }
      if ( (v16 & 1) == 0 )
        v15[7] = a2;
      v16 >>= 1;
LABEL_21:
      if ( (v16 & 1) == 0 )
        v15[6] = a2;
      v16 >>= 1;
LABEL_24:
      if ( (v16 & 1) == 0 )
        v15[5] = a2;
      v16 >>= 1;
LABEL_27:
      if ( (v16 & 1) == 0 )
        v15[4] = a2;
      v16 >>= 1;
LABEL_30:
      if ( (v16 & 1) == 0 )
        v15[3] = a2;
      v16 >>= 1;
LABEL_33:
      if ( (v16 & 1) == 0 )
        v15[2] = a2;
      v16 >>= 1;
LABEL_36:
      if ( (v16 & 1) == 0 )
        v15[1] = a2;
      v16 >>= 1;
LABEL_39:
      if ( (v16 & 1) == 0 )
        *v15 = a2;
      goto LABEL_5;
    }
LABEL_6:
    v8 += *((int *)a1 + 11);
    v6 += *((int *)a1 + 10);
  }
}
