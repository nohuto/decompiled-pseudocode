/*
 * XREFs of ?vGradientFill32BGRA@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C013A140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill32BGRA(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  __int64 v2; // r8
  struct _TRIANGLEDATA *v3; // rbx
  int v4; // edx
  struct SURFACE *v5; // r15
  char *v6; // rsi
  __int64 v7; // rdi
  int v8; // ecx
  __int64 v9; // r14
  int v10; // ebp
  int v11; // r11d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  _DWORD *v16; // r12
  int v17; // r10d
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r9
  int v22; // r11d
  int v23; // r11d
  unsigned __int64 v24; // r9
  int v25; // r11d
  unsigned __int64 v26; // r9
  __int64 v27; // [rsp+0h] [rbp-78h]
  __int64 v28; // [rsp+8h] [rbp-70h]
  char *v29; // [rsp+10h] [rbp-68h]
  __int64 v30; // [rsp+18h] [rbp-60h]
  __int64 v31; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+90h] [rbp+18h]
  __int64 v35; // [rsp+98h] [rbp+20h]

  v2 = *((int *)a1 + 22);
  v3 = a2;
  v4 = *((_DWORD *)a2 + 28);
  v5 = a1;
  v6 = (char *)v3 + 168;
  v29 = (char *)v3 + 168;
  v7 = *((_QWORD *)a1 + 10) + (int)v2 * v4;
  v8 = *((_DWORD *)v3 + 29);
  v34 = *((_QWORD *)v3 + 2);
  if ( *((_DWORD *)v3 + 3) < v8 )
    v8 = *((_DWORD *)v3 + 3);
  v35 = *((_QWORD *)v3 + 3);
  v27 = *((_QWORD *)v3 + 4);
  v28 = *((_QWORD *)v3 + 5);
  if ( v4 < v8 )
  {
    v31 = v2;
    v9 = (unsigned int)(v8 - v4);
    v30 = v9;
    do
    {
      v10 = *(_DWORD *)v3;
      v11 = *((_DWORD *)v3 + 2);
      v12 = *((_QWORD *)v6 + 1);
      v13 = *((_QWORD *)v6 + 2);
      if ( *(_DWORD *)v6 > *(_DWORD *)v3 )
        v10 = *(_DWORD *)v6;
      v14 = *((_QWORD *)v6 + 3);
      if ( *((_DWORD *)v6 + 1) < v11 )
        v11 = *((_DWORD *)v6 + 1);
      v15 = *((_QWORD *)v6 + 4);
      if ( v10 < v11 && *((_QWORD *)v5 + 9) <= (unsigned __int64)(v10 + v7) )
      {
        v16 = (_DWORD *)(v7 + 4LL * v10);
        v17 = *(_DWORD *)v3 - *(_DWORD *)v6;
        v18 = v7 + 4LL * v11;
        if ( v17 > 0 )
        {
          v12 += v34 * v17;
          v13 += v35 * v17;
          v14 += v27 * v17;
          v15 += v28 * v17;
        }
        v19 = 0LL;
        v20 = (v18 - (unsigned __int64)v16 + 3) >> 2;
        if ( (unsigned __int64)v16 > v18 )
          v20 = 0LL;
        if ( v20 )
        {
          do
          {
            v21 = v12;
            v12 += v34;
            v22 = HIBYTE(v15) << 8;
            v15 += v28;
            ++v19;
            v23 = HIBYTE(v21) | v22;
            v24 = HIBYTE(v13);
            v13 += v35;
            v25 = v24 | (v23 << 8);
            v26 = HIBYTE(v14);
            v14 += v27;
            *v16++ = v26 | (v25 << 8);
          }
          while ( v19 < v20 );
          v3 = a2;
          v6 = v29;
          v9 = v30;
          v5 = a1;
        }
      }
      v7 += v31;
      v6 += 40;
      --v9;
      v29 = v6;
      v30 = v9;
    }
    while ( v9 );
  }
}
