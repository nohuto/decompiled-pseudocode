/*
 * XREFs of ?vSrcCopyS8D8@@YAXPEAUBLTINFO@@@Z @ 0x1C0143E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS8D8(struct BLTINFO *a1)
{
  unsigned int v1; // r10d
  _BYTE *v2; // r8
  unsigned __int8 *v3; // rdx
  unsigned int v4; // ebx
  signed int v5; // ebp
  signed int v6; // r14d
  int v7; // esi
  __int64 v8; // r9
  unsigned int v9; // edi
  int v10; // r10d
  unsigned int v11; // edi
  unsigned int i; // r11d
  unsigned int j; // r11d
  int v14; // ecx
  __int64 v15; // rax
  int k; // r11d
  __int64 v17; // rax
  __int64 v18; // rax

  v1 = *((_DWORD *)a1 + 7);
  v2 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v3 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v4 = -(*((_DWORD *)a1 + 4) + *((_DWORD *)a1 + 14)) & 3;
  v5 = *((_DWORD *)a1 + 10) - v1;
  v6 = *((_DWORD *)a1 + 11) - v1;
  v7 = *((_DWORD *)a1 + 8);
  if ( v4 > v1 )
    v4 = *((_DWORD *)a1 + 7);
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v9 = v1 - v4;
  v10 = (v1 - v4) & 3;
  v11 = v9 >> 2;
  while ( 1 )
  {
    for ( i = v4; i; --i )
    {
      v18 = *v3++;
      *v2++ = *(_BYTE *)(v8 + 4 * v18);
    }
    for ( j = v11; j; --j )
    {
      v14 = *(_DWORD *)(v8 + 4LL * v3[1]) | ((*(_DWORD *)(v8 + 4LL * v3[2]) | (*(_DWORD *)(v8 + 4LL * v3[3]) << 8)) << 8);
      v15 = *v3;
      v3 += 4;
      *(_DWORD *)v2 = *(_DWORD *)(v8 + 4 * v15) | (v14 << 8);
      v2 += 4;
    }
    for ( k = v10; k; --k )
    {
      v17 = *v3++;
      *v2++ = *(_BYTE *)(v8 + 4 * v17);
    }
    if ( !--v7 )
      break;
    v3 += v5;
    v2 += v6;
  }
}
