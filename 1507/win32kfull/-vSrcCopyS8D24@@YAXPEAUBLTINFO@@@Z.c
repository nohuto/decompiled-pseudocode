/*
 * XREFs of ?vSrcCopyS8D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02C4D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS8D24(struct BLTINFO *a1)
{
  unsigned int v1; // r11d
  unsigned __int8 *v2; // r10
  signed int v3; // r15d
  int v4; // r14d
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned int v7; // edi
  int v8; // r12d
  unsigned int v9; // ebp
  int v10; // r11d
  unsigned int v11; // ebp
  unsigned int i; // edx
  __int64 v13; // rax
  int v14; // ecx
  unsigned int j; // esi
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rax
  int k; // edx
  __int64 v20; // rax
  int v21; // ecx

  v1 = *((_DWORD *)a1 + 7);
  v2 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v3 = *((_DWORD *)a1 + 10) - v1;
  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v7 = (*((_BYTE *)a1 + 16) + 3 * *((_BYTE *)a1 + 56)) & 3;
  v8 = *((_DWORD *)a1 + 11) - 3 * v1;
  if ( v7 > v1 )
    v7 = *((_DWORD *)a1 + 7);
  v9 = v1 - v7;
  v10 = (v1 - v7) & 3;
  v11 = v9 >> 2;
  while ( 1 )
  {
    for ( i = v7; i; --i )
    {
      v13 = *v2++;
      v14 = *(_DWORD *)(v6 + 4 * v13);
      *(_WORD *)v5 = v14;
      *(_BYTE *)(v5 + 2) = BYTE2(v14);
      v5 += 3LL;
    }
    for ( j = v11; j; --j )
    {
      v16 = *(_DWORD *)(v6 + 4LL * v2[1]) >> 8;
      *(_DWORD *)v5 = (*(_DWORD *)(v6 + 4LL * v2[1]) << 24) | *(_DWORD *)(v6 + 4LL * *v2);
      v17 = HIWORD(*(_DWORD *)(v6 + 4LL * v2[2]));
      *(_DWORD *)(v5 + 4) = (*(_DWORD *)(v6 + 4LL * v2[2]) << 16) | v16;
      v18 = v2[3];
      v2 += 4;
      *(_DWORD *)(v5 + 8) = v17 | (*(_DWORD *)(v6 + 4 * v18) << 8);
      v5 += 12LL;
    }
    for ( k = v10; k; --k )
    {
      v20 = *v2++;
      v21 = *(_DWORD *)(v6 + 4 * v20);
      *(_WORD *)v5 = v21;
      *(_BYTE *)(v5 + 2) = BYTE2(v21);
      v5 += 3LL;
    }
    if ( !--v4 )
      break;
    v2 += v3;
    v5 += v8;
  }
}
