/*
 * XREFs of ?vStripSolidDiagonal24@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x140340B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidDiagonal24(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // r9
  int v4; // ebx
  int v6; // edi
  int v7; // r11d
  char *v8; // r12
  _BYTE *v9; // rdx
  int v10; // esi
  int v11; // ebp
  int v12; // r14d
  int v13; // r15d
  int v14; // r8d
  _BYTE *v15; // rcx

  v3 = (int *)((char *)a1 + 28);
  v4 = *((_DWORD *)a3 + 1);
  v6 = *(_DWORD *)a3;
  v7 = -4 * *((_DWORD *)a1 + 2);
  v8 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v7 = 4 * *((_DWORD *)a1 + 2);
  v9 = (_BYTE *)*((_QWORD *)a1 + 2);
  v10 = *((_DWORD *)a3 + 1) >> 8;
  v11 = *(_DWORD *)a3 >> 8;
  v12 = HIWORD(*((_DWORD *)a3 + 1));
  v13 = HIWORD(*(_DWORD *)a3);
  do
  {
    v14 = *v3;
    *v9 = v4 ^ v6 & *v9;
    v9[1] = v10 ^ v11 & v9[1];
    v9[2] = v12 ^ v13 & v9[2];
    for ( v9 += 3; --v14; v9 = v15 + 3 )
    {
      v15 = &v9[v7];
      *v15 = v4 ^ v6 & *v15;
      v15[1] = v10 ^ v11 & v15[1];
      v15[2] = v12 ^ v13 & v15[2];
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
      v9 += v7 - 3;
    ++v3;
  }
  while ( v3 < (int *)v8 );
  *((_QWORD *)a1 + 2) = v9;
}
