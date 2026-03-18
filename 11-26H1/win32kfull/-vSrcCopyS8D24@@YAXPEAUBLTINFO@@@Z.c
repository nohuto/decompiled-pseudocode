/*
 * XREFs of ?vSrcCopyS8D24@@YAXPEAUBLTINFO@@@Z @ 0x1401D26B0
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS8D24(struct BLTINFO *a1)
{
  unsigned int v1; // r11d
  int v2; // r14d
  unsigned __int8 *v3; // r10
  signed int v4; // r15d
  int v5; // ebp
  __int64 v6; // r9
  __int64 v7; // rbx
  int v8; // r12d
  unsigned int v9; // esi
  int v10; // r11d
  unsigned int v11; // esi
  int i; // edx
  unsigned int j; // edi
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rax
  int k; // edx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  int v21; // ecx

  v1 = *((_DWORD *)a1 + 7);
  v2 = v1;
  v3 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v4 = *((_DWORD *)a1 + 10) - v1;
  v5 = *((_DWORD *)a1 + 8);
  v6 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v8 = *((_DWORD *)a1 + 11) - 3 * v1;
  if ( ((*((_BYTE *)a1 + 16) + 3 * *((_BYTE *)a1 + 56)) & 3u) <= v1 )
    v2 = (*((_BYTE *)a1 + 16) + 3 * *((_BYTE *)a1 + 56)) & 3;
  v9 = v1 - v2;
  v10 = (v1 - v2) & 3;
  v11 = v9 >> 2;
  while ( 1 )
  {
    for ( i = v2; i; --i )
    {
      v20 = *v3++;
      v21 = *(_DWORD *)(v7 + 4 * v20);
      *(_WORD *)v6 = v21;
      *(_BYTE *)(v6 + 2) = BYTE2(v21);
      v6 += 3LL;
    }
    for ( j = v11; j; --j )
    {
      v14 = *(_DWORD *)(v7 + 4LL * v3[1]) >> 8;
      *(_DWORD *)v6 = *(_DWORD *)(v7 + 4LL * *v3) | (*(_DWORD *)(v7 + 4LL * v3[1]) << 24);
      v15 = HIWORD(*(_DWORD *)(v7 + 4LL * v3[2]));
      *(_DWORD *)(v6 + 4) = v14 | (*(_DWORD *)(v7 + 4LL * v3[2]) << 16);
      v16 = v3[3];
      v3 += 4;
      *(_DWORD *)(v6 + 8) = v15 | (*(_DWORD *)(v7 + 4 * v16) << 8);
      v6 += 12LL;
    }
    for ( k = v10; k; --k )
    {
      v18 = *v3++;
      v19 = *(_DWORD *)(v7 + 4 * v18);
      *(_WORD *)v6 = v19;
      *(_BYTE *)(v6 + 2) = BYTE2(v19);
      v6 += 3LL;
    }
    if ( !--v5 )
      break;
    v3 += v4;
    v6 += v8;
  }
}
