/*
 * XREFs of ?BltLnkPatMaskCopy16@@YAXPEAUBLTINFO@@KPEAKE@Z @ 0x1C02D63F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkPatMaskCopy16(struct BLTINFO *a1, __int16 a2, unsigned int *a3, unsigned __int8 a4)
{
  int v4; // edi
  __int64 v6; // rbp
  __int64 v8; // rsi
  int v10; // ebx
  int v11; // r14d
  _WORD *v12; // r8
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
    v11 = *((_DWORD *)a1 + 12);
    v12 = (_WORD *)(v8 + 2LL * *((int *)a1 + 14));
    if ( v10 > 0 )
    {
      while ( 1 )
      {
        v13 = 0;
        v14 = a4 ^ *(unsigned __int8 *)(((__int64)v11 >> 3) + v6);
        v15 = 8 - (v11 & 7);
        if ( v15 > v10 )
        {
          v15 = v10;
          v13 = 8 - (v11 & 7) - v10;
        }
        v10 -= v15;
        v11 += v15;
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
        v12 += v15;
        if ( v10 <= 0 )
          goto LABEL_38;
      }
      if ( (v16 & 1) == 0 )
        v12[7] = a2;
      v16 >>= 1;
LABEL_17:
      if ( (v16 & 1) == 0 )
        v12[6] = a2;
      v16 >>= 1;
LABEL_20:
      if ( (v16 & 1) == 0 )
        v12[5] = a2;
      v16 >>= 1;
LABEL_23:
      if ( (v16 & 1) == 0 )
        v12[4] = a2;
      v16 >>= 1;
LABEL_26:
      if ( (v16 & 1) == 0 )
        v12[3] = a2;
      v16 >>= 1;
LABEL_29:
      if ( (v16 & 1) == 0 )
        v12[2] = a2;
      v16 >>= 1;
LABEL_32:
      if ( (v16 & 1) == 0 )
        v12[1] = a2;
      v16 >>= 1;
LABEL_35:
      if ( (v16 & 1) == 0 )
        *v12 = a2;
      goto LABEL_37;
    }
LABEL_38:
    v8 += *((int *)a1 + 11);
    v6 += *((int *)a1 + 10);
  }
}
