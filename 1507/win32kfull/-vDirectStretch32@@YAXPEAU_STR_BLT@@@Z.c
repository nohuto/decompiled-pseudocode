/*
 * XREFs of ?vDirectStretch32@@YAXPEAU_STR_BLT@@@Z @ 0x1C00C35B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vDirectStretch32(struct _STR_BLT *a1)
{
  __int64 v1; // r8
  int v2; // ebx
  int v3; // r15d
  __int64 v4; // rdi
  int v5; // r11d
  __int64 v6; // rsi
  unsigned int v7; // r14d
  int v8; // edx
  char *v9; // r9
  int v10; // r10d
  __int64 v11; // r13
  __int64 v12; // rbx
  unsigned int v13; // eax
  _DWORD *v14; // rdx
  char *v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  struct _STR_BLT *v18; // [rsp+50h] [rbp+8h]
  int v19; // [rsp+58h] [rbp+10h]
  unsigned int v20; // [rsp+60h] [rbp+18h]
  __int64 v21; // [rsp+68h] [rbp+20h]

  v18 = a1;
  v1 = *((int *)a1 + 7);
  v2 = *((_DWORD *)a1 + 12);
  v3 = *((_DWORD *)a1 + 9);
  v4 = *((unsigned int *)a1 + 10);
  v5 = *((_DWORD *)a1 + 11);
  v6 = *(_QWORD *)a1 + 4LL * *((int *)a1 + 3);
  v7 = *((_DWORD *)a1 + 15);
  v8 = *((_DWORD *)a1 + 8) - v1;
  v20 = *((_DWORD *)a1 + 10);
  v9 = (char *)(*((_QWORD *)a1 + 2) + 4 * v1);
  v10 = 0;
  v19 = *((_DWORD *)a1 + 13);
  if ( v3 > 0 )
  {
    if ( v2 )
      v10 = v2 * *((_DWORD *)a1 + 2);
    v11 = *((_DWORD *)a1 + 6) - 4 * v8;
    v12 = 4LL * v8;
    v21 = v12;
    do
    {
      v13 = *((_DWORD *)a1 + 14);
      v14 = (_DWORD *)v6;
      v15 = &v9[v12];
      v16 = 0LL;
      v17 = (unsigned __int64)(v12 + 3) >> 2;
      if ( v9 > v15 )
        v17 = 0LL;
      if ( v17 )
      {
        do
        {
          ++v16;
          *(_DWORD *)v9 = *v14;
          v9 += 4;
          v14 += v4 + (v13 + v5 < v13);
          v13 += v5;
        }
        while ( v16 != v17 );
        v4 = v20;
      }
      a1 = v18;
      v6 += v10;
      if ( v7 + v19 < v7 )
        v6 += *((int *)v18 + 2);
      v12 = v21;
      v9 += v11;
      v7 += v19;
      --v3;
    }
    while ( v3 );
  }
}
