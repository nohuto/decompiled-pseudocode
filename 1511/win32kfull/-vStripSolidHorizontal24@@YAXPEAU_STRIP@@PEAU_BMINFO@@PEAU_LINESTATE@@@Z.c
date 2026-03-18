/*
 * XREFs of ?vStripSolidHorizontal24@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02CD700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidHorizontal24(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // r10
  int v5; // edx
  char *v6; // r11
  int v7; // ebx
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r15
  int v11; // edx

  v3 = (int *)((char *)a1 + 28);
  v5 = 4 * *((_DWORD *)a1 + 2);
  v6 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v5 = -4 * *((_DWORD *)a1 + 2);
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_QWORD *)a1 + 2);
  v10 = v5;
  do
  {
    v11 = *v3;
    do
    {
      *(_WORD *)v9 = v8 ^ v7 & *(_WORD *)v9;
      *(_BYTE *)(v9 + 2) = BYTE2(v8) ^ BYTE2(v7) & *(_BYTE *)(v9 + 2);
      v9 += 3LL;
      --v11;
    }
    while ( v11 );
    v9 += v10;
    ++v3;
  }
  while ( v3 < (int *)v6 );
  *((_QWORD *)a1 + 2) = v9;
}
