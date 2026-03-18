/*
 * XREFs of ?vStripStyledDiagonal@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02CDC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripStyledDiagonal(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  int v4; // r10d
  int v5; // ebx
  int *v6; // rdi
  int v7; // r13d
  int v8; // esi
  int v9; // r11d
  int v10; // r15d
  int v11; // ebx
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rax
  int v15; // [rsp+38h] [rbp+8h]
  char *v16; // [rsp+48h] [rbp+18h]

  v3 = (char *)a1 + 28;
  v4 = 4 * *((_DWORD *)a1 + 2);
  v16 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v4 = -4 * *((_DWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 6);
  v6 = (int *)*((_QWORD *)a1 + 2);
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 22);
  v9 = *((_DWORD *)a3 + 12);
  v15 = *(_DWORD *)a3;
  do
  {
    v10 = *(_DWORD *)v3;
    while ( 1 )
    {
      if ( !v8 )
        *v6 = v7 & *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v5) ^ *v6 & (v15 | ~*(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v5));
      if ( !--v10 )
        break;
      v9 -= *((_DWORD *)a3 + 4);
      if ( v9 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v9 += **((_DWORD **)a3 + 5);
        v8 = v8 == 0;
      }
      v11 = v5 + 1;
      v12 = v11;
      v5 = *((_DWORD *)a2 + 7) & v11;
      v6 = (int *)((char *)v6 + 4 * (v12 >> *((_BYTE *)a2 + 24)) + v4);
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
    {
      v6 = (int *)((char *)v6 + v4);
    }
    else
    {
      v13 = v5 + 1;
      v14 = (__int64)v13 >> *((_BYTE *)a2 + 24);
      v5 = *((_DWORD *)a2 + 7) & v13;
      v6 += v14;
    }
    v3 += 4;
  }
  while ( v3 < v16 );
  *((_DWORD *)a1 + 6) = v5;
  *((_QWORD *)a1 + 2) = v6;
  *((_DWORD *)a3 + 22) = v8;
  *((_DWORD *)a3 + 12) = v9;
}
