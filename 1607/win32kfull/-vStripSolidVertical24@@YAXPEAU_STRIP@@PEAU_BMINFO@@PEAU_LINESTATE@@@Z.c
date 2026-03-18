/*
 * XREFs of ?vStripSolidVertical24@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02D0A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidVertical24(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // r10
  int v5; // edx
  char *v6; // r11
  int v7; // ebx
  int v8; // r8d
  _WORD *v9; // rcx
  __int64 v10; // r15
  int v11; // edx
  _BYTE *v12; // rcx

  v3 = (int *)((char *)a1 + 28);
  v5 = 4 * *((_DWORD *)a1 + 2);
  v6 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v5 = -4 * *((_DWORD *)a1 + 2);
  v7 = *((_DWORD *)a3 + 1);
  v8 = *(_DWORD *)a3;
  v9 = (_WORD *)*((_QWORD *)a1 + 2);
  v10 = v5 - 2;
  do
  {
    v11 = *v3;
    do
    {
      *v9 = v7 ^ v8 & *v9;
      v12 = v9 + 1;
      *v12 = BYTE2(v7) ^ BYTE2(v8) & *v12;
      v9 = &v12[v10];
      --v11;
    }
    while ( v11 );
    v9 = (_WORD *)((char *)v9 + 3);
    ++v3;
  }
  while ( v3 < (int *)v6 );
  *((_QWORD *)a1 + 2) = v9;
}
