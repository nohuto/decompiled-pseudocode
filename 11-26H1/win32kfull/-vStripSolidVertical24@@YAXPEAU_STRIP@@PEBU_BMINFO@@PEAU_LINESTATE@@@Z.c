/*
 * XREFs of ?vStripSolidVertical24@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x14020C600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidVertical24(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // r10
  _WORD *v5; // r9
  int v6; // edi
  int v7; // r8d
  int v8; // edx
  char *v9; // rbx
  int v10; // ecx
  __int64 v11; // r12
  int v12; // edx
  _BYTE *v13; // rcx

  v3 = (int *)((char *)a1 + 28);
  v5 = (_WORD *)*((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a3 + 1);
  v7 = *(_DWORD *)a3;
  v8 = 4 * *((_DWORD *)a1 + 2);
  v9 = (char *)a1 + 4 * *(int *)a1 + 28;
  v10 = -4 * *((_DWORD *)a1 + 2);
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v10 = v8;
  v11 = v10 - 2;
  do
  {
    v12 = *v3;
    do
    {
      v13 = v5 + 1;
      *v5 = v6 ^ v7 & *v5;
      v5 = (_WORD *)((char *)v5 + v11 + 2);
      *v13 = BYTE2(v6) ^ BYTE2(v7) & *v13;
      --v12;
    }
    while ( v12 );
    v5 = (_WORD *)((char *)v5 + 3);
    ++v3;
  }
  while ( v3 < (int *)v9 );
  *((_QWORD *)a1 + 2) = v5;
}
