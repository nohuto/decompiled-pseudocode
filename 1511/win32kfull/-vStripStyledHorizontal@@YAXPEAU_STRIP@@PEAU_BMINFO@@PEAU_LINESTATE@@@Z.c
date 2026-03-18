/*
 * XREFs of ?vStripStyledHorizontal@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02CE0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripStyledHorizontal(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  int v4; // ebx
  int v5; // r9d
  int *v6; // rdi
  int v7; // r13d
  int v8; // esi
  int v9; // r11d
  __int64 v10; // r12
  int v11; // r9d
  int v12; // ebx
  __int64 v13; // rax
  int v14; // [rsp+38h] [rbp+8h]
  char *v15; // [rsp+40h] [rbp+10h]

  v3 = (char *)a1 + 28;
  v4 = *((_DWORD *)a1 + 6);
  v5 = 4 * *((_DWORD *)a1 + 2);
  v15 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v5 = -4 * *((_DWORD *)a1 + 2);
  v6 = (int *)*((_QWORD *)a1 + 2);
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 22);
  v9 = *((_DWORD *)a3 + 12);
  v14 = *((_DWORD *)a3 + 1);
  v10 = v5;
  do
  {
    v11 = *(_DWORD *)v3;
    do
    {
      if ( !v8 )
        *v6 = v14 & *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v4) ^ *v6 & (v7 | ~*(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v4));
      v12 = v4 + 1;
      v9 -= *((_DWORD *)a3 + 2);
      v13 = v12;
      v4 = *((_DWORD *)a2 + 7) & v12;
      v6 += v13 >> *((_BYTE *)a2 + 24);
      if ( v9 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v9 += **((_DWORD **)a3 + 5);
        v8 = v8 == 0;
      }
      --v11;
    }
    while ( v11 );
    v9 -= *((_DWORD *)a3 + 3);
    v6 = (int *)((char *)v6 + v10);
    if ( v9 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v9 += **((_DWORD **)a3 + 5);
      v8 = v8 == 0;
    }
    v3 += 4;
  }
  while ( v3 != v15 );
  *((_DWORD *)a1 + 6) = v4;
  *((_QWORD *)a1 + 2) = v6;
  *((_DWORD *)a3 + 22) = v8;
  *((_DWORD *)a3 + 12) = v9;
}
