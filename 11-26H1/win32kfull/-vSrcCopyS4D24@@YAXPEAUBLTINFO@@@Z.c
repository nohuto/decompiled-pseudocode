/*
 * XREFs of ?vSrcCopyS4D24@@YAXPEAUBLTINFO@@@Z @ 0x140218470
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D24(struct BLTINFO *a1)
{
  int *v1; // rbx
  unsigned int v2; // r14d
  int v3; // r13d
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // ecx
  __int64 v8; // rdi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  int v11; // r14d
  int v12; // r11d
  __int64 v13; // r10
  unsigned __int8 *v14; // r9
  unsigned int i; // edx
  unsigned int v16; // r15d
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned int v22; // ecx
  unsigned int v23; // r8d
  int v24; // edx
  int v25; // r8d
  unsigned __int64 v26; // rcx
  unsigned __int8 *v27; // r8
  unsigned __int64 v28; // rcx
  int v29; // ecx
  _BYTE *v30; // r10
  unsigned __int64 v31; // rcx
  unsigned __int8 *v32; // rdi
  int v33; // edx
  unsigned __int64 v34; // rcx
  int v35; // ecx
  unsigned int v37; // [rsp+48h] [rbp+10h]
  __int64 v38; // [rsp+50h] [rbp+18h]

  v1 = (int *)a1;
  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = *((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1);
  v6 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v7 = v2;
  v8 = *(_QWORD *)(v4 + 16);
  v38 = v8;
  if ( ((unsigned __int8)v6 & 3u) <= v2 )
    v7 = v6 & 3;
  v9 = v2 - v7;
  v37 = v7;
  v10 = v9 >> 2;
  v11 = v9 & 3;
  while ( 1 )
  {
    v12 = v1[12];
    v13 = v6;
    v14 = (unsigned __int8 *)v5;
    for ( i = v7; i; --i )
    {
      v26 = *v14;
      v27 = v14;
      if ( (v12 & 1) != 0 )
        v28 = v26 & 0xF;
      else
        v28 = v26 >> 4;
      v29 = *(_DWORD *)(v8 + 4 * v28);
      ++v14;
      *(_BYTE *)v13 = v29;
      if ( (v12 & 1) == 0 )
        v14 = v27;
      LOBYTE(v12) = v12 + 1;
      *(_BYTE *)(v13 + 1) = BYTE1(v29);
      *(_BYTE *)(v13 + 2) = BYTE2(v29);
      v13 += 3LL;
    }
    v16 = v10;
    if ( v10 )
    {
      do
      {
        v17 = *v14;
        v18 = (unsigned __int64)v14[1] >> 4;
        v19 = *v14 & 0xF;
        v20 = v14[1] & 0xF;
        v14 += 2;
        if ( (v12 & 1) != 0 )
        {
          v21 = v19;
          v19 = v18;
          v18 = v20;
          v20 = (unsigned __int64)*v14 >> 4;
        }
        else
        {
          v21 = v17 >> 4;
        }
        v22 = *(_DWORD *)(v38 + 4 * v19);
        LOBYTE(v12) = v12 + 4;
        v23 = *(_DWORD *)(v38 + 4 * v18);
        v24 = *(_DWORD *)(v38 + 4 * v20);
        *(_DWORD *)v13 = *(_DWORD *)(v38 + 4 * v21) | (v22 << 24);
        *(_DWORD *)(v13 + 4) = (v23 << 16) | (v22 >> 8);
        *(_DWORD *)(v13 + 8) = (v24 << 8) | HIWORD(v23);
        v13 += 12LL;
        --v16;
      }
      while ( v16 );
      v1 = (int *)a1;
    }
    v25 = v11;
    if ( v11 )
    {
      v30 = (_BYTE *)(v13 + 2);
      do
      {
        v31 = *v14;
        v32 = v14;
        v33 = v12 & 1;
        if ( (v12 & 1) != 0 )
          v34 = v31 & 0xF;
        else
          v34 = v31 >> 4;
        v35 = *(_DWORD *)(v38 + 4 * v34);
        ++v14;
        *(v30 - 2) = v35;
        LOBYTE(v12) = v12 + 1;
        *(v30 - 1) = BYTE1(v35);
        *v30 = BYTE2(v35);
        v30 += 3;
        if ( !v33 )
          v14 = v32;
        --v25;
      }
      while ( v25 );
    }
    if ( !--v3 )
      break;
    v8 = v38;
    v5 += v1[10];
    v7 = v37;
    v6 += v1[11];
  }
}
