/*
 * XREFs of ?vStripStyledVertical@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02CE4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripStyledVertical(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rsi
  int v5; // r9d
  char *v6; // r15
  int v7; // r10d
  int v8; // ebx
  int *v9; // r11
  int v10; // r13d
  int v11; // edi
  int v12; // edx
  __int64 v13; // r12
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r14d
  int v17; // r9d
  int v18; // ebx
  __int64 v19; // rax

  v3 = (char *)a1 + 28;
  v5 = 4 * *((_DWORD *)a1 + 2);
  v6 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v5 = -4 * *((_DWORD *)a1 + 2);
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a1 + 6);
  v9 = (int *)*((_QWORD *)a1 + 2);
  v10 = *((_DWORD *)a3 + 1);
  v11 = *((_DWORD *)a3 + 22);
  v12 = *((_DWORD *)a3 + 12);
  v13 = v5;
  do
  {
    v14 = *((_QWORD *)a2 + 1);
    v15 = *(_DWORD *)v3;
    v16 = v10 & *(_DWORD *)(v14 + 4LL * v8);
    v17 = v7 | ~*(_DWORD *)(v14 + 4LL * v8);
    do
    {
      if ( !v11 )
        *v9 = v16 ^ *v9 & v17;
      v12 -= *((_DWORD *)a3 + 2);
      v9 = (int *)((char *)v9 + v13);
      if ( v12 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v12 += **((_DWORD **)a3 + 5);
        v11 = v11 == 0;
      }
      --v15;
    }
    while ( v15 );
    v18 = v8 + 1;
    v12 -= *((_DWORD *)a3 + 3);
    v19 = v18;
    v8 = *((_DWORD *)a2 + 7) & v18;
    v9 += v19 >> *((_BYTE *)a2 + 24);
    if ( v12 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v12 += **((_DWORD **)a3 + 5);
      v11 = v11 == 0;
    }
    v3 += 4;
  }
  while ( v3 < v6 );
  *((_DWORD *)a1 + 6) = v8;
  *((_QWORD *)a1 + 2) = v9;
  *((_DWORD *)a3 + 22) = v11;
  *((_DWORD *)a3 + 12) = v12;
}
