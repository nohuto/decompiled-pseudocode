/*
 * XREFs of ?vStripStyledVertical24@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1401D72A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripStyledVertical24(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // rdi
  __int64 v5; // r10
  int v6; // r15d
  int v7; // r12d
  int v8; // r11d
  int v9; // r9d
  char *v10; // rbp
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // rax
  _DWORD *v15; // rax

  v3 = (int *)((char *)a1 + 28);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a3 + 1);
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 20);
  v9 = *((_DWORD *)a3 + 5);
  v10 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = 4 * *((_DWORD *)a1 + 2);
  v12 = -4 * *((_DWORD *)a1 + 2);
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v12 = v11;
  do
  {
    v13 = *v3;
    do
    {
      if ( !v8 )
      {
        *(_WORD *)v5 = v6 ^ v7 & *(_WORD *)v5;
        *(_BYTE *)(v5 + 2) = BYTE2(v6) ^ *(_BYTE *)(v5 + 2) & BYTE2(v7);
      }
      v9 -= *((_DWORD *)a3 + 2);
      v5 += v12;
      if ( v9 <= 0 )
      {
        *((_QWORD *)a3 + 7) += 4LL;
        v14 = (_DWORD *)*((_QWORD *)a3 + 7);
        if ( (unsigned __int64)v14 > *((_QWORD *)a3 + 6) )
        {
          v14 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v14;
        }
        v9 += *v14;
        v8 = v8 == 0;
      }
      --v13;
    }
    while ( v13 );
    v9 -= *((_DWORD *)a3 + 3);
    v5 += 3LL;
    if ( v9 <= 0 )
    {
      *((_QWORD *)a3 + 7) += 4LL;
      v15 = (_DWORD *)*((_QWORD *)a3 + 7);
      if ( (unsigned __int64)v15 > *((_QWORD *)a3 + 6) )
      {
        v15 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v15;
      }
      v9 += *v15;
      v8 = v8 == 0;
    }
    ++v3;
  }
  while ( v3 < (int *)v10 );
  *((_QWORD *)a1 + 2) = v5;
  *((_DWORD *)a3 + 20) = v8;
  *((_DWORD *)a3 + 5) = v9;
}
