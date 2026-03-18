/*
 * XREFs of ?vSrcCopyS1D32@@YAXPEAUBLTINFO@@@Z @ 0x140166680
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D32(struct BLTINFO *a1)
{
  unsigned int v1; // r8d
  int v2; // r11d
  int v4; // r14d
  unsigned int v5; // r15d
  int *v6; // rdx
  _BYTE *v7; // rdi
  _DWORD *v8; // rbp
  _BYTE *v9; // rdx
  _DWORD *v10; // rax
  unsigned int v11; // r9d
  char v12; // r10
  unsigned __int64 v13; // r11
  _BYTE *v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp+8h]
  int v18; // [rsp+24h] [rbp+Ch]

  LOBYTE(v1) = 0;
  v2 = *((_DWORD *)a1 + 12);
  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_DWORD *)a1 + 7);
  v6 = *(int **)(*(_QWORD *)a1 + 16LL);
  v7 = (_BYTE *)(*((_QWORD *)a1 + 1) + ((__int64)v2 >> 3));
  v17 = *v6;
  v18 = v6[1];
  v8 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  if ( v4 )
  {
    while ( 1 )
    {
      --v4;
      v9 = v7;
      v10 = v8;
      v11 = v5;
      v12 = v2 & 7;
      if ( (v2 & 7) != 0 )
        LOBYTE(v1) = *v7 << v12;
      else
        v9 = v7 - 1;
      if ( v5 )
        break;
LABEL_14:
      v7 += *((int *)a1 + 10);
      v8 = (_DWORD *)((char *)v8 + *((int *)a1 + 11));
      if ( !v4 )
        return;
    }
    while ( 1 )
    {
      if ( !v12 )
      {
        ++v9;
        if ( v11 >= 8 )
        {
          v13 = (unsigned __int64)v11 >> 3;
          do
          {
            v1 = (unsigned __int8)*v9;
            v14 = v9;
            v15 = (unsigned __int8)*v9++;
            v11 -= 8;
            *v10 = *(&v17 + (v15 >> 7));
            v10[1] = *(&v17 + ((v1 >> 6) & 1));
            v10[2] = *(&v17 + ((v1 >> 5) & 1));
            v10[3] = *(&v17 + ((v1 >> 4) & 1));
            v10[4] = *(&v17 + ((v1 >> 3) & 1));
            v10[5] = *(&v17 + ((v1 >> 2) & 1));
            v10[6] = *(&v17 + ((v1 >> 1) & 1));
            v10[7] = *(&v17 + (v1 & 1));
            v10 += 8;
            --v13;
          }
          while ( v13 );
          v9 = v14;
          goto LABEL_12;
        }
        LOBYTE(v1) = *v9;
      }
      v16 = (unsigned __int64)(unsigned __int8)v1 >> 7;
      LOBYTE(v1) = 2 * v1;
      v12 = (v12 + 1) & 7;
      *v10++ = *(&v17 + v16);
      --v11;
LABEL_12:
      if ( !v11 )
      {
        LOBYTE(v2) = *((_BYTE *)a1 + 48);
        goto LABEL_14;
      }
    }
  }
}
