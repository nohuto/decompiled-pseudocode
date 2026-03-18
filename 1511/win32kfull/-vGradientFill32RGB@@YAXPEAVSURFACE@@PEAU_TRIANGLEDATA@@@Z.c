/*
 * XREFs of ?vGradientFill32RGB@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02CCC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill32RGB(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // r8d
  char *v3; // rdi
  struct _TRIANGLEDATA *v4; // r11
  struct SURFACE *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rbp
  __int64 v10; // r13
  int v11; // esi
  int v12; // r10d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  _DWORD *v16; // r14
  int v17; // r9d
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r8
  int v22; // r10d
  int v23; // r10d
  unsigned __int64 v24; // r8
  __int64 v25; // [rsp+0h] [rbp-58h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+70h] [rbp+18h]
  __int64 v30; // [rsp+78h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = a2;
  v5 = a1;
  v6 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v2;
  v29 = *((_QWORD *)a2 + 2);
  v30 = *((_QWORD *)a2 + 3);
  v7 = *((_QWORD *)a2 + 4);
  v8 = *((_DWORD *)a2 + 29);
  v25 = v7;
  if ( *((_DWORD *)v4 + 3) < v8 )
    v8 = *((_DWORD *)v4 + 3);
  if ( v2 < v8 )
  {
    v26 = *((int *)a1 + 22);
    v9 = (unsigned int)(v8 - v2);
    v10 = v26;
    do
    {
      v11 = *(_DWORD *)v4;
      v12 = *((_DWORD *)v4 + 2);
      v13 = *((_QWORD *)v3 + 1);
      v14 = *((_QWORD *)v3 + 2);
      if ( *(_DWORD *)v3 > *(_DWORD *)v4 )
        v11 = *(_DWORD *)v3;
      v15 = *((_QWORD *)v3 + 3);
      if ( *((_DWORD *)v3 + 1) < v12 )
        v12 = *((_DWORD *)v3 + 1);
      if ( *((_QWORD *)v5 + 9) <= (unsigned __int64)(v11 + v6) && v11 < v12 )
      {
        v16 = (_DWORD *)(v6 + 4LL * v11);
        v17 = *(_DWORD *)v4 - *(_DWORD *)v3;
        v18 = v6 + 4LL * v12;
        if ( v17 > 0 )
        {
          v13 += v29 * v17;
          v14 += v30 * v17;
          v15 += v25 * v17;
        }
        v19 = 0LL;
        v20 = (v18 - (unsigned __int64)v16 + 3) >> 2;
        if ( (unsigned __int64)v16 > v18 )
          v20 = 0LL;
        if ( v20 )
        {
          do
          {
            v21 = v14;
            v14 += v30;
            v22 = HIBYTE(v15) << 8;
            v15 += v25;
            ++v19;
            v23 = HIBYTE(v21) | v22;
            v24 = HIBYTE(v13);
            v13 += v29;
            *v16++ = v24 | (v23 << 8);
          }
          while ( v19 < v20 );
          v4 = a2;
          v5 = a1;
          v10 = v26;
        }
      }
      v6 += v10;
      v3 += 40;
      --v9;
    }
    while ( v9 );
  }
}
