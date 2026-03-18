/*
 * XREFs of ?vDirectStretch8Narrow@@YAXPEAU_STR_BLT@@@Z @ 0x1C02D09C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vDirectStretch8Narrow(struct _STR_BLT *a1)
{
  struct _STR_BLT *v1; // r8
  char *v2; // r10
  char *v3; // r9
  int v4; // ebx
  int v5; // edx
  int v6; // r13d
  unsigned int v7; // r11d
  __int64 v8; // r15
  unsigned int v9; // r14d
  unsigned int v10; // edi
  char *v11; // rbp
  char *v12; // rsi
  bool v13; // cf
  struct _STR_BLT *v14; // [rsp+0h] [rbp-58h]
  int v15; // [rsp+60h] [rbp+8h]
  int v16; // [rsp+68h] [rbp+10h]
  __int64 v17; // [rsp+70h] [rbp+18h]

  v1 = a1;
  v2 = (char *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 7));
  v3 = (char *)(*(_QWORD *)a1 + *((int *)a1 + 3));
  v4 = *((_DWORD *)a1 + 9);
  LODWORD(a1) = *((_DWORD *)a1 + 8) - *((_DWORD *)a1 + 7);
  v5 = *((_DWORD *)v1 + 6) - (_DWORD)a1;
  v6 = *((_DWORD *)v1 + 13);
  v7 = *((_DWORD *)v1 + 15);
  v15 = *((_DWORD *)v1 + 11);
  v16 = v6;
  if ( v4 > 0 )
  {
    a1 = (struct _STR_BLT *)(int)a1;
    v14 = (struct _STR_BLT *)(int)a1;
    v17 = *((unsigned int *)v1 + 10);
    v8 = *((_DWORD *)v1 + 2) * *((_DWORD *)v1 + 12);
    do
    {
      v9 = *((_DWORD *)v1 + 14);
      v10 = v7 + v6;
      v11 = &v2[(_QWORD)a1];
      v12 = v3;
      do
      {
        *v2 = *v12;
        v13 = v9 + v15 < v9;
        v9 += v15;
        ++v2;
        v12 += v17 + v13;
      }
      while ( v2 != v11 );
      v3 += v8;
      v6 = v16;
      if ( v10 < v7 )
        v3 += *((int *)v1 + 2);
      a1 = v14;
      v2 += v5;
      v7 = v10;
      --v4;
    }
    while ( v4 );
  }
}
