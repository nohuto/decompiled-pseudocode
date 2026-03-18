/*
 * XREFs of ?vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02C9BE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

void __fastcall vFillGRectDIB24BGR(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r13
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r9
  const void *v13; // r12
  _BYTE *v14; // r8
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  char v17; // rax^6
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  char *i; // rbx
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24; // rdx
  __int64 v25; // rax
  _BYTE *v26; // rdx
  _BYTE *v27; // r8
  _BYTE *v28; // rax
  __int64 v30; // [rsp+70h] [rbp+48h]
  __int64 v31; // [rsp+78h] [rbp+50h]
  char v32; // [rsp+7Eh] [rbp+56h]
  __int64 v33; // [rsp+80h] [rbp+58h]
  char v34; // [rsp+86h] [rbp+5Eh]
  __int64 v35; // [rsp+88h] [rbp+60h]
  char v36; // [rsp+8Eh] [rbp+66h]

  v3 = *((_QWORD *)a2 + 6);
  v4 = *((_QWORD *)a2 + 7);
  v5 = *((_QWORD *)a2 + 8);
  v6 = *((int *)a1 + 22);
  v7 = *((_DWORD *)a2 + 11);
  v32 = BYTE6(v3);
  v34 = BYTE6(v4);
  v36 = BYTE6(v5);
  if ( *((_DWORD *)a2 + 38) )
  {
    v21 = *((_QWORD *)a2 + 10);
    v22 = *((_QWORD *)a2 + 11);
    v23 = *((_QWORD *)a2 + 12);
    v24 = *((_QWORD *)a1 + 10) + (int)v6 * *((_DWORD *)a2 + 9);
    v25 = *((int *)a2 + 45);
    if ( (int)v25 > 0 )
    {
      v3 += v21 * v25;
      v4 += v22 * v25;
      v32 = BYTE6(v3);
      v34 = BYTE6(v4);
      v5 += v23 * *((int *)a2 + 45);
      v36 = BYTE6(v5);
    }
    v26 = (_BYTE *)(3 * *((_DWORD *)a2 + 8) + v24);
    if ( v7 )
    {
      v30 = *((int *)a1 + 22);
      do
      {
        --v7;
        v27 = v26;
        v28 = &v26[3 * *((_DWORD *)a2 + 10)];
        if ( v26 != v28 )
        {
          do
          {
            *v27 = v36;
            v27[1] = v34;
            v27[2] = v32;
            v27 += 3;
          }
          while ( v27 != v28 );
        }
        v26 += v30;
        v3 += v21;
        v4 += v22;
        v32 = BYTE6(v3);
        v5 += v23;
        v34 = BYTE6(v4);
        v36 = BYTE6(v5);
      }
      while ( v7 );
    }
  }
  else
  {
    v8 = *((int *)a2 + 44);
    v9 = *((_QWORD *)a2 + 14);
    v31 = v9;
    v33 = *((_QWORD *)a2 + 15);
    v35 = *((_QWORD *)a2 + 16);
    if ( (int)v8 > 0 )
    {
      v3 += v9 * v8;
      v4 += *((_QWORD *)a2 + 15) * v8;
      v5 += *((_QWORD *)a2 + 16) * v8;
    }
    v10 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v10 - 1) <= 0xD05554 )
    {
      v11 = AllocFreeTmpBuffer((unsigned int)(3 * v10));
      v13 = (const void *)v11;
      if ( v11 )
      {
        v14 = (_BYTE *)v11;
        v15 = (unsigned int)(3 * *((_DWORD *)a2 + 10));
        v16 = (_BYTE *)(v11 + (int)v15);
        if ( (_BYTE *)v11 != v16 )
        {
          v15 = v31;
          v12 = v33;
          do
          {
            v17 = BYTE6(v5);
            v5 += v35;
            *v14 = v17;
            v18 = HIWORD(v4);
            v4 += v33;
            v14[1] = v18;
            v19 = HIWORD(v3);
            v3 += v31;
            v14[2] = v19;
            v14 += 3;
          }
          while ( v14 != v16 );
        }
        for ( i = (char *)(*((_QWORD *)a1 + 10) + 3 * *((_DWORD *)a2 + 8) + (__int64)((int)v6 * *((_DWORD *)a2 + 9)));
              v7;
              --v7 )
        {
          memmove(i, v13, 3 * *((_DWORD *)a2 + 10));
          i += v6;
        }
        FreeTmpBuffer(v13, v15, v14, v12);
      }
    }
  }
}
