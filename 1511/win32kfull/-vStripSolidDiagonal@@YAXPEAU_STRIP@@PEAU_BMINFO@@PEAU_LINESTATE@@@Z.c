/*
 * XREFs of ?vStripSolidDiagonal@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02CD490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidDiagonal(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r11
  int v6; // eax
  char *v7; // rbp
  int v8; // ecx
  int v9; // r8d
  int *v10; // r10
  int v11; // r14d
  int v12; // r15d
  int v13; // edi
  int v14; // r8d
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // rax

  v3 = (char *)a1 + 28;
  v6 = *((_DWORD *)a1 + 1);
  v7 = (char *)a1 + 4 * *(int *)a1 + 28;
  v8 = 4 * *((_DWORD *)a1 + 2);
  if ( (v6 & 8) != 0 )
    v8 = -v8;
  v9 = *((_DWORD *)a1 + 6);
  v10 = (int *)*((_QWORD *)a1 + 2);
  v11 = *((_DWORD *)a3 + 1);
  v12 = *(_DWORD *)a3;
  do
  {
    v13 = *(_DWORD *)v3;
    while ( 1 )
    {
      *v10 = v11 & *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v9) ^ *v10 & (v12 | ~*(_DWORD *)(*((_QWORD *)a2 + 1)
                                                                                          + 4LL * v9));
      if ( !--v13 )
        break;
      v14 = v9 + 1;
      v15 = v14;
      v9 = *((_DWORD *)a2 + 7) & v14;
      v10 = (int *)((char *)v10 + 4 * (v15 >> *((_BYTE *)a2 + 24)) + v8);
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v10 = (int *)((char *)v10 + v8);
    }
    else
    {
      v16 = v9 + 1;
      v17 = (__int64)v16 >> *((_BYTE *)a2 + 24);
      v9 = *((_DWORD *)a2 + 7) & v16;
      v10 += v17;
    }
    v3 += 4;
  }
  while ( v3 < v7 );
  *((_DWORD *)a1 + 6) = v9;
  *((_QWORD *)a1 + 2) = v10;
}
