/*
 * XREFs of ?vDirectStretch32@@YAXPEAU_STR_BLT@@@Z @ 0x1C00C3440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vDirectStretch32(struct _STR_BLT *a1)
{
  __int64 v1; // r8
  int v2; // ebx
  int v3; // r10d
  int v4; // r15d
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // edx
  int v8; // r11d
  unsigned int v9; // ebp
  _DWORD *v10; // r9
  int v11; // r8d
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r10
  unsigned int v15; // eax
  __int64 v16; // r8
  _DWORD *v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // [rsp+0h] [rbp-58h]
  struct _STR_BLT *v20; // [rsp+60h] [rbp+8h]
  int v21; // [rsp+68h] [rbp+10h]
  unsigned int v22; // [rsp+70h] [rbp+18h]
  __int64 v23; // [rsp+78h] [rbp+20h]

  v20 = a1;
  v1 = *((int *)a1 + 7);
  v2 = *((_DWORD *)a1 + 12);
  v3 = *((_DWORD *)a1 + 8) - v1;
  v4 = *((_DWORD *)a1 + 9);
  v5 = *((unsigned int *)a1 + 10);
  v6 = *(_QWORD *)a1 + 4LL * *((int *)a1 + 3);
  v7 = 0;
  v8 = *((_DWORD *)a1 + 11);
  v9 = *((_DWORD *)a1 + 15);
  v22 = *((_DWORD *)a1 + 10);
  v10 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * v1);
  v21 = *((_DWORD *)a1 + 13);
  v11 = *((_DWORD *)a1 + 6) - 4 * v3;
  if ( v4 > 0 )
  {
    if ( v2 )
      v7 = v2 * *((_DWORD *)a1 + 2);
    v12 = v11;
    v13 = v7;
    v23 = v11;
    v14 = 4LL * v3;
    v19 = v14;
    do
    {
      v15 = *((_DWORD *)a1 + 14);
      v16 = 0LL;
      v17 = (_DWORD *)v6;
      v18 = (unsigned __int64)(v14 + 3) >> 2;
      if ( v10 > (_DWORD *)((char *)v10 + v14) )
        v18 = 0LL;
      if ( v18 )
      {
        do
        {
          ++v16;
          *v10++ = *v17;
          v17 += v5 + (v15 + v8 < v15);
          v15 += v8;
        }
        while ( v16 != v18 );
        v12 = v23;
        v5 = v22;
        v14 = v19;
      }
      a1 = v20;
      v6 += v13;
      if ( v9 + v21 < v9 )
        v6 += *((int *)v20 + 2);
      v10 = (_DWORD *)((char *)v10 + v12);
      v9 += v21;
      --v4;
    }
    while ( v4 );
  }
}
