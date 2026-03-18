/*
 * XREFs of ?vStripSolidHorizontal@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1401ACAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidHorizontal(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rbx
  __int64 v5; // rbp
  int v6; // edi
  int v8; // esi
  int *v9; // r8
  char *v10; // r15
  int v11; // r9d
  int v12; // ecx
  int v13; // r10d
  __int64 v14; // r12
  int v15; // edx
  unsigned int v16; // r9d
  int v17; // edx
  int v18; // r14d
  int v19; // ecx
  __int64 v20; // rdx
  int v21; // eax

  v3 = (char *)a1 + 28;
  v5 = *((int *)a1 + 6);
  v6 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = (int *)*((_QWORD *)a1 + 2);
  v10 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = 4 * *((_DWORD *)a1 + 2);
  v12 = -4 * *((_DWORD *)a1 + 2);
  v13 = *(_DWORD *)(*(_QWORD *)a2 + 4 * v5);
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v12 = v11;
  v14 = v12;
  do
  {
    v15 = v5 + *(_DWORD *)v3;
    v16 = v15 >> *((_DWORD *)a2 + 6);
    LODWORD(v5) = v15 & *((_DWORD *)a2 + 7);
    v17 = *v9;
    v18 = *(_DWORD *)(*(_QWORD *)a2 + 4LL * (int)v5);
    v19 = ~v18;
    if ( !v16 )
    {
      v21 = v8 & v19 & v13 ^ v17 & (v6 | ~(v19 & v13));
LABEL_12:
      *v9 = v21;
      goto LABEL_9;
    }
    *v9++ = v8 & v13 ^ v17 & (v6 | ~v13);
    if ( v16 > 1 )
    {
      v20 = v16 - 1;
      do
      {
        *v9 = v8 ^ v6 & *v9;
        ++v9;
        --v20;
      }
      while ( v20 );
    }
    if ( v18 != -1 )
    {
      v21 = v8 & v19 ^ *v9 & (v6 | v18);
      goto LABEL_12;
    }
LABEL_9:
    v9 = (int *)((char *)v9 + v14);
    v3 += 4;
    v13 = v18;
  }
  while ( v3 < v10 );
  *((_DWORD *)a1 + 6) = v5;
  *((_QWORD *)a1 + 2) = v9;
}
