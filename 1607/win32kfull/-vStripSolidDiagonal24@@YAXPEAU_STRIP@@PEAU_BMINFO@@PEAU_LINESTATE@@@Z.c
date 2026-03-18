/*
 * XREFs of ?vStripSolidDiagonal24@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02D0530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidDiagonal24(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // r11
  int v5; // r9d
  char *v6; // r15
  int v7; // ebx
  int v8; // r8d
  __int64 v9; // rdx
  int v10; // ecx

  v3 = (int *)((char *)a1 + 28);
  v5 = 4 * *((_DWORD *)a1 + 2);
  v6 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v5 = -4 * *((_DWORD *)a1 + 2);
  v7 = *((_DWORD *)a3 + 1);
  v8 = *(_DWORD *)a3;
  v9 = *((_QWORD *)a1 + 2);
  do
  {
    v10 = *v3;
    while ( 1 )
    {
      *(_WORD *)v9 = v7 ^ v8 & *(_WORD *)v9;
      *(_BYTE *)(v9 + 2) = BYTE2(v7) ^ BYTE2(v8) & *(_BYTE *)(v9 + 2);
      v9 += 3LL;
      if ( !--v10 )
        break;
      v9 += v5;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
      v9 += v5 - 3;
    ++v3;
  }
  while ( v3 < (int *)v6 );
  *((_QWORD *)a1 + 2) = v9;
}
