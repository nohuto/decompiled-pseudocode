/*
 * XREFs of ?vDirectStretch32@@YAXPEAU_STR_BLT@@@Z @ 0x1C0038F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vDirectStretch32(struct _STR_BLT *a1)
{
  __int64 v1; // r8
  struct _STR_BLT *v2; // rdi
  int v3; // ebx
  int v4; // r10d
  int v5; // r15d
  int v6; // r14d
  __int64 v7; // rsi
  int v8; // edx
  int v9; // r11d
  unsigned int v10; // ebp
  char *v11; // r9
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rcx
  unsigned int v15; // eax
  char *v16; // rcx
  unsigned int v17; // r14d
  _DWORD *v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  unsigned int v22; // [rsp+58h] [rbp+10h]
  int v23; // [rsp+60h] [rbp+18h]

  v1 = *((int *)a1 + 7);
  v2 = a1;
  v3 = *((_DWORD *)a1 + 12);
  v4 = *((_DWORD *)a1 + 8) - v1;
  v5 = *((_DWORD *)a1 + 9);
  v6 = *((_DWORD *)a1 + 13);
  v7 = *(_QWORD *)a1 + 4LL * *((int *)a1 + 3);
  v8 = 0;
  v9 = *((_DWORD *)a1 + 11);
  v10 = *((_DWORD *)a1 + 15);
  v23 = v6;
  v11 = (char *)(*((_QWORD *)a1 + 2) + 4 * v1);
  v22 = *((_DWORD *)a1 + 10);
  if ( v5 > 0 )
  {
    if ( v3 )
      v8 = v3 * *((_DWORD *)a1 + 2);
    v12 = v8;
    v13 = *((_DWORD *)a1 + 6) - 4 * v4;
    v14 = 4LL * v4;
    do
    {
      v15 = *((_DWORD *)v2 + 14);
      v16 = &v11[v14];
      v17 = v10 + v6;
      v18 = (_DWORD *)v7;
      v19 = 0LL;
      v20 = (unsigned __int64)(v16 - v11 + 3) >> 2;
      if ( v11 > v16 )
        v20 = 0LL;
      if ( v20 )
      {
        do
        {
          ++v19;
          *(_DWORD *)v11 = *v18;
          v11 += 4;
          v18 += v22 + (unsigned __int64)(v15 + v9 < v15);
          v15 += v9;
        }
        while ( v19 != v20 );
        v2 = a1;
      }
      v7 += v12;
      if ( v17 < v10 )
        v7 += *((int *)v2 + 2);
      v14 = 4LL * v4;
      v11 += v13;
      v10 = v17;
      v6 = v23;
      --v5;
    }
    while ( v5 );
  }
}
