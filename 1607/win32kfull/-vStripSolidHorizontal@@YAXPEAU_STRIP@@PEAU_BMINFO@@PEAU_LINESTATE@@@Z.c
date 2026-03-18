/*
 * XREFs of ?vStripSolidHorizontal@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C01456B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidHorizontal(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rdi
  __int64 v5; // r11
  int v7; // r10d
  char *v8; // r15
  int v9; // esi
  int v10; // ebp
  int *v11; // rdx
  int v12; // r8d
  __int64 v13; // r12
  int v14; // ebx
  unsigned int v15; // ebx
  int v16; // r10d
  __int64 v17; // rcx

  v3 = (char *)a1 + 28;
  v5 = *((int *)a1 + 6);
  v7 = 4 * *((_DWORD *)a1 + 2);
  v8 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v7 = -4 * *((_DWORD *)a1 + 2);
  v9 = *(_DWORD *)a3;
  v10 = *((_DWORD *)a3 + 1);
  v11 = (int *)*((_QWORD *)a1 + 2);
  v12 = *(_DWORD *)(*(_QWORD *)a2 + 4 * v5);
  v13 = v7;
  do
  {
    v14 = *(_DWORD *)v3 + v5;
    LODWORD(v5) = *((_DWORD *)a2 + 7) & v14;
    v15 = v14 >> *((_DWORD *)a2 + 6);
    v16 = ~*(_DWORD *)(*(_QWORD *)a2 + 4LL * (int)v5);
    if ( v15 )
    {
      *v11 = v10 & v12 ^ *v11 & (v9 | ~v12);
      ++v11;
      if ( v15 > 1 )
      {
        v17 = v15 - 1;
        do
        {
          *v11 = v10 ^ v9 & *v11;
          ++v11;
          --v17;
        }
        while ( v17 );
      }
      if ( v16 )
        *v11 = v10 & v16 ^ *v11 & (v9 | ~v16);
    }
    else
    {
      *v11 = v10 & v12 & v16 ^ *v11 & (v9 | ~(v12 & v16));
    }
    v11 = (int *)((char *)v11 + v13);
    v3 += 4;
    v12 = ~v16;
  }
  while ( v3 < v8 );
  *((_DWORD *)a1 + 6) = v5;
  *((_QWORD *)a1 + 2) = v11;
}
