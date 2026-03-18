/*
 * XREFs of ?vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CA850
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
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
  const void *v12; // r12
  _BYTE *v13; // r8
  _BYTE *v14; // rcx
  char v15; // rax^6
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  char *i; // rbx
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rax
  _BYTE *v24; // rdx
  _BYTE *v25; // r8
  _BYTE *v26; // rax
  __int64 v28; // [rsp+70h] [rbp+48h]
  __int64 v29; // [rsp+78h] [rbp+50h]
  char v30; // [rsp+7Eh] [rbp+56h]
  __int64 v31; // [rsp+80h] [rbp+58h]
  char v32; // [rsp+86h] [rbp+5Eh]
  __int64 v33; // [rsp+88h] [rbp+60h]
  char v34; // [rsp+8Eh] [rbp+66h]

  v3 = *((_QWORD *)a2 + 6);
  v4 = *((_QWORD *)a2 + 7);
  v5 = *((_QWORD *)a2 + 8);
  v6 = *((int *)a1 + 22);
  v7 = *((_DWORD *)a2 + 11);
  v30 = BYTE6(v3);
  v32 = BYTE6(v4);
  v34 = BYTE6(v5);
  if ( *((_DWORD *)a2 + 38) )
  {
    v19 = *((_QWORD *)a2 + 10);
    v20 = *((_QWORD *)a2 + 11);
    v21 = *((_QWORD *)a2 + 12);
    v22 = *((_QWORD *)a1 + 10) + (int)v6 * *((_DWORD *)a2 + 9);
    v23 = *((int *)a2 + 45);
    if ( (int)v23 > 0 )
    {
      v3 += v19 * v23;
      v4 += v20 * v23;
      v30 = BYTE6(v3);
      v32 = BYTE6(v4);
      v5 += v21 * *((int *)a2 + 45);
      v34 = BYTE6(v5);
    }
    v24 = (_BYTE *)(3 * *((_DWORD *)a2 + 8) + v22);
    if ( v7 )
    {
      v28 = *((int *)a1 + 22);
      do
      {
        --v7;
        v25 = v24;
        v26 = &v24[3 * *((_DWORD *)a2 + 10)];
        if ( v24 != v26 )
        {
          do
          {
            *v25 = v34;
            v25[1] = v32;
            v25[2] = v30;
            v25 += 3;
          }
          while ( v25 != v26 );
        }
        v24 += v28;
        v3 += v19;
        v4 += v20;
        v30 = BYTE6(v3);
        v5 += v21;
        v32 = BYTE6(v4);
        v34 = BYTE6(v5);
      }
      while ( v7 );
    }
  }
  else
  {
    v8 = *((int *)a2 + 44);
    v9 = *((_QWORD *)a2 + 14);
    v29 = v9;
    v31 = *((_QWORD *)a2 + 15);
    v33 = *((_QWORD *)a2 + 16);
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
      v12 = (const void *)v11;
      if ( v11 )
      {
        v13 = (_BYTE *)v11;
        v14 = (_BYTE *)(v11 + 3 * *((_DWORD *)a2 + 10));
        if ( (_BYTE *)v11 != v14 )
        {
          do
          {
            v15 = BYTE6(v5);
            v5 += v33;
            *v13 = v15;
            v16 = HIWORD(v4);
            v4 += v31;
            v13[1] = v16;
            v17 = HIWORD(v3);
            v3 += v29;
            v13[2] = v17;
            v13 += 3;
          }
          while ( v13 != v14 );
        }
        for ( i = (char *)(*((_QWORD *)a1 + 10) + 3 * *((_DWORD *)a2 + 8) + (__int64)((int)v6 * *((_DWORD *)a2 + 9)));
              v7;
              --v7 )
        {
          memmove(i, v12, 3 * *((_DWORD *)a2 + 10));
          i += v6;
        }
        FreeTmpBuffer(v12);
      }
    }
  }
}
