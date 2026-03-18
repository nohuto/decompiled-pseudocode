/*
 * XREFs of ?vStripStyledDiagonal24@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02CDAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripStyledDiagonal24(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // rdi
  int v4; // edx
  char *v5; // rbp
  int v6; // r14d
  int v7; // r15d
  int v8; // ebx
  int v9; // r10d
  __int64 v10; // r9
  int v11; // esi

  v3 = (int *)((char *)a1 + 28);
  v4 = 4 * *((_DWORD *)a1 + 2);
  v5 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v4 = -4 * *((_DWORD *)a1 + 2);
  v6 = *((_DWORD *)a3 + 1);
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 22);
  v9 = *((_DWORD *)a3 + 12);
  v10 = *((_QWORD *)a1 + 2);
  do
  {
    v11 = *v3;
    while ( 1 )
    {
      if ( !v8 )
      {
        *(_WORD *)v10 = v6 ^ v7 & *(_WORD *)v10;
        *(_BYTE *)(v10 + 2) = BYTE2(v6) ^ *(_BYTE *)(v10 + 2) & BYTE2(v7);
      }
      v10 += 3LL;
      if ( !--v11 )
        break;
      v9 -= *((_DWORD *)a3 + 4);
      v10 += v4;
      if ( v9 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v9 += **((_DWORD **)a3 + 5);
        v8 = v8 == 0;
      }
    }
    v9 -= *((_DWORD *)a3 + 2);
    if ( v9 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v9 += **((_DWORD **)a3 + 5);
      v8 = v8 == 0;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
      v10 += v4 - 3;
    ++v3;
  }
  while ( v3 < (int *)v5 );
  *((_QWORD *)a1 + 2) = v10;
  *((_DWORD *)a3 + 22) = v8;
  *((_DWORD *)a3 + 12) = v9;
}
