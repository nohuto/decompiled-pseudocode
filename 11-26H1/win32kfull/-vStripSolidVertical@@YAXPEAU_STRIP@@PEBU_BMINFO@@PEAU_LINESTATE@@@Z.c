/*
 * XREFs of ?vStripSolidVertical@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1401B7A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidVertical(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rdi
  int v5; // r11d
  int *v6; // r10
  int v8; // r14d
  int v9; // r15d
  int v10; // r9d
  char *v11; // rbp
  int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // r8d
  int v16; // ecx
  int v17; // edx
  int v18; // r11d
  __int64 v19; // rax

  v3 = (char *)a1 + 28;
  v5 = *((_DWORD *)a1 + 6);
  v6 = (int *)*((_QWORD *)a1 + 2);
  v8 = *((_DWORD *)a3 + 1);
  v9 = *(_DWORD *)a3;
  v10 = 4 * *((_DWORD *)a1 + 2);
  v11 = (char *)a1 + 4 * *(int *)a1 + 28;
  v12 = -4 * *((_DWORD *)a1 + 2);
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v12 = v10;
  v13 = v12;
  do
  {
    v14 = *((_QWORD *)a2 + 1);
    v15 = *(_DWORD *)v3;
    v16 = v8 & *(_DWORD *)(v14 + 4LL * v5);
    v17 = v9 | ~*(_DWORD *)(v14 + 4LL * v5);
    do
    {
      *v6 = v16 ^ *v6 & v17;
      v6 = (int *)((char *)v6 + v13);
      --v15;
    }
    while ( v15 );
    v18 = v5 + 1;
    v19 = v18;
    v3 += 4;
    v5 = *((_DWORD *)a2 + 7) & v18;
    v6 += v19 >> *((_DWORD *)a2 + 6);
  }
  while ( v3 < v11 );
  *((_DWORD *)a1 + 6) = v5;
  *((_QWORD *)a1 + 2) = v6;
}
