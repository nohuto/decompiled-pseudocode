/*
 * XREFs of ?BltLnkPatMaskCopy24@@YAXPEAUBLTINFO@@KPEAKE@Z @ 0x1C0145E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkPatMaskCopy24(struct BLTINFO *a1, unsigned int a2, unsigned int *a3, unsigned __int8 a4)
{
  int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // r14
  char v7; // r10
  unsigned int v8; // r11d
  unsigned int v10; // ebx
  char v11; // cl
  unsigned int v12; // r8d
  int v13; // r9d
  int v14; // esi
  int v15; // r12d
  _BYTE *v16; // rdx
  int v17; // r13d
  unsigned int v18; // r8d
  unsigned __int8 v19; // [rsp+48h] [rbp+20h]

  v19 = a4;
  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v7 = a2;
  v8 = a2 >> 8;
  v10 = HIWORD(a2);
  while ( v4 )
  {
    --v4;
    v14 = *((_DWORD *)a1 + 7);
    v15 = *((_DWORD *)a1 + 12);
    v16 = (_BYTE *)(v6 + 3 * *((_DWORD *)a1 + 14));
    if ( v14 > 0 )
    {
      v17 = a4;
      while ( 1 )
      {
        v11 = 0;
        v12 = v17 ^ *(unsigned __int8 *)(((__int64)v15 >> 3) + v5);
        v13 = 8 - (v15 & 7);
        if ( v13 > v14 )
        {
          v13 = v14;
          v11 = 8 - (v15 & 7) - v14;
        }
        v14 -= v13;
        v15 += v13;
        if ( v12 == 255 )
          goto LABEL_5;
        v18 = v12 >> v11;
        switch ( v13 )
        {
          case 1:
            goto LABEL_40;
          case 2:
            goto LABEL_37;
          case 3:
            goto LABEL_34;
          case 4:
            goto LABEL_31;
          case 5:
            goto LABEL_28;
          case 6:
            goto LABEL_25;
          case 7:
            goto LABEL_22;
        }
        if ( v13 == 8 )
          break;
LABEL_5:
        v16 += 3 * v13;
        if ( v14 <= 0 )
        {
          a4 = v19;
          goto LABEL_7;
        }
      }
      if ( (v18 & 1) == 0 )
      {
        v16[23] = v10;
        v16[22] = v8;
        v16[21] = v7;
      }
      v18 >>= 1;
LABEL_22:
      if ( (v18 & 1) == 0 )
      {
        v16[20] = v10;
        v16[19] = v8;
        v16[18] = v7;
      }
      v18 >>= 1;
LABEL_25:
      if ( (v18 & 1) == 0 )
      {
        v16[17] = v10;
        v16[16] = v8;
        v16[15] = v7;
      }
      v18 >>= 1;
LABEL_28:
      if ( (v18 & 1) == 0 )
      {
        v16[14] = v10;
        v16[13] = v8;
        v16[12] = v7;
      }
      v18 >>= 1;
LABEL_31:
      if ( (v18 & 1) == 0 )
      {
        v16[11] = v10;
        v16[10] = v8;
        v16[9] = v7;
      }
      v18 >>= 1;
LABEL_34:
      if ( (v18 & 1) == 0 )
      {
        v16[8] = v10;
        v16[7] = v8;
        v16[6] = v7;
      }
      v18 >>= 1;
LABEL_37:
      if ( (v18 & 1) == 0 )
      {
        v16[5] = v10;
        v16[4] = v8;
        v16[3] = v7;
      }
      v18 >>= 1;
LABEL_40:
      if ( (v18 & 1) == 0 )
      {
        v16[2] = v10;
        v16[1] = v8;
        *v16 = v7;
      }
      goto LABEL_5;
    }
LABEL_7:
    v6 += *((int *)a1 + 11);
    v5 += *((int *)a1 + 10);
  }
}
