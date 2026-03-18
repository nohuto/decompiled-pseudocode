/*
 * XREFs of ?BltLnkPatMaskCopy8@@YAXPEAUBLTINFO@@KPEAKE@Z @ 0x1C02D34A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkPatMaskCopy8(struct BLTINFO *a1, char a2, unsigned int *a3, unsigned __int8 a4)
{
  int v4; // edi
  __int64 v6; // rbp
  __int64 v8; // rsi
  int v10; // ebx
  _BYTE *v11; // r8
  int v12; // r14d
  char v13; // cl
  unsigned int v14; // edx
  int v15; // r9d
  unsigned int v16; // edx

  v4 = *((_DWORD *)a1 + 8);
  v6 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  while ( v4 )
  {
    --v4;
    v10 = *((_DWORD *)a1 + 7);
    v11 = (_BYTE *)(v8 + *((int *)a1 + 14));
    v12 = *((_DWORD *)a1 + 12);
    if ( v10 > 0 )
    {
      while ( 1 )
      {
        v13 = 0;
        v14 = a4 ^ *(unsigned __int8 *)(((__int64)v12 >> 3) + v6);
        v15 = 8 - (v12 & 7);
        if ( v15 > v10 )
        {
          v15 = v10;
          v13 = 8 - (v12 & 7) - v10;
        }
        v10 -= v15;
        v12 += v15;
        if ( v14 == 255 )
          goto LABEL_37;
        v16 = v14 >> v13;
        switch ( v15 )
        {
          case 1:
            goto LABEL_35;
          case 2:
            goto LABEL_32;
          case 3:
            goto LABEL_29;
          case 4:
            goto LABEL_26;
          case 5:
            goto LABEL_23;
          case 6:
            goto LABEL_20;
          case 7:
            goto LABEL_17;
        }
        if ( v15 == 8 )
          break;
LABEL_37:
        v11 += v15;
        if ( v10 <= 0 )
          goto LABEL_38;
      }
      if ( (v16 & 1) == 0 )
        v11[7] = a2;
      v16 >>= 1;
LABEL_17:
      if ( (v16 & 1) == 0 )
        v11[6] = a2;
      v16 >>= 1;
LABEL_20:
      if ( (v16 & 1) == 0 )
        v11[5] = a2;
      v16 >>= 1;
LABEL_23:
      if ( (v16 & 1) == 0 )
        v11[4] = a2;
      v16 >>= 1;
LABEL_26:
      if ( (v16 & 1) == 0 )
        v11[3] = a2;
      v16 >>= 1;
LABEL_29:
      if ( (v16 & 1) == 0 )
        v11[2] = a2;
      v16 >>= 1;
LABEL_32:
      if ( (v16 & 1) == 0 )
        v11[1] = a2;
      v16 >>= 1;
LABEL_35:
      if ( (v16 & 1) == 0 )
        *v11 = a2;
      goto LABEL_37;
    }
LABEL_38:
    v8 += *((int *)a1 + 11);
    v6 += *((int *)a1 + 10);
  }
}
