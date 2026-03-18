/*
 * XREFs of ?vStripSolidVertical@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C0113AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidVertical(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r10
  int v7; // eax
  char *v8; // rsi
  int v9; // ecx
  int v10; // edx
  int *v11; // r8
  int v12; // r14d
  int v13; // r15d
  __int64 v14; // rbp
  __int64 v15; // rax
  int v16; // edi
  int v17; // ecx
  int v18; // r11d
  int v19; // edx
  __int64 v20; // rax

  v3 = (char *)a1 + 28;
  v7 = *((_DWORD *)a1 + 1);
  v8 = (char *)a1 + 4 * *(int *)a1 + 28;
  v9 = 4 * *((_DWORD *)a1 + 2);
  if ( (v7 & 8) != 0 )
    v9 = -v9;
  v10 = *((_DWORD *)a1 + 6);
  v11 = (int *)*((_QWORD *)a1 + 2);
  v12 = *((_DWORD *)a3 + 1);
  v13 = *(_DWORD *)a3;
  v14 = v9;
  do
  {
    v15 = *((_QWORD *)a2 + 1);
    v16 = *(_DWORD *)v3;
    v17 = v12 & *(_DWORD *)(v15 + 4LL * v10);
    v18 = v13 | ~*(_DWORD *)(v15 + 4LL * v10);
    do
    {
      *v11 = v17 ^ *v11 & v18;
      v11 = (int *)((char *)v11 + v14);
      --v16;
    }
    while ( v16 );
    v19 = v10 + 1;
    v20 = v19;
    v3 += 4;
    v10 = *((_DWORD *)a2 + 7) & v19;
    v11 += v20 >> *((_BYTE *)a2 + 24);
  }
  while ( v3 < v8 );
  *((_DWORD *)a1 + 6) = v10;
  *((_QWORD *)a1 + 2) = v11;
}
