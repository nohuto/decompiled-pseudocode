/*
 * XREFs of ?vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CA5E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

void __fastcall vFillGRectDIB32RGB(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  __int64 v2; // r13
  __int64 v4; // r15
  int v5; // r9d
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rdx
  char *v12; // r12
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // rax
  char *v18; // r11
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  int v21; // edx
  unsigned __int64 v22; // rax
  char *v23; // rdi
  char *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r8
  void *v27; // r12
  unsigned int v28; // r11d
  unsigned __int64 v29; // r10
  int v30; // [rsp+70h] [rbp+8h]
  __int64 v31; // [rsp+70h] [rbp+8h]
  __int64 v32; // [rsp+78h] [rbp+10h]
  __int64 v33; // [rsp+78h] [rbp+10h]
  __int64 v34; // [rsp+80h] [rbp+18h]
  __int64 v35; // [rsp+88h] [rbp+20h]

  v2 = *((int *)a1 + 22);
  v4 = 0LL;
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v30 = v5;
  if ( !*((_DWORD *)a2 + 38) )
  {
    v9 = *((_QWORD *)a1 + 10) + (int)v2 * *((_DWORD *)a2 + 9);
    v10 = *((_DWORD *)a2 + 10);
    v32 = v9;
    if ( (unsigned int)(v10 - 1) <= 0x9C3FFF )
    {
      v12 = (char *)AllocFreeTmpBuffer((unsigned int)(4 * v10));
      if ( v12 )
      {
        v13 = *((int *)a2 + 44);
        v14 = *((_QWORD *)a2 + 14);
        v15 = *((_QWORD *)a2 + 15);
        v16 = *((_QWORD *)a2 + 16);
        if ( (int)v13 > 0 )
        {
          v11 = v16 * *((int *)a2 + 44);
          v6 += v14 * v13;
          v7 += v15 * v13;
          v8 += v11;
        }
        v17 = *((int *)a2 + 10);
        v18 = v12;
        v19 = (unsigned __int64)(4 * v17 + 3) >> 2;
        if ( v12 > &v12[4 * v17] )
          v19 = 0LL;
        if ( v19 )
        {
          do
          {
            ++v4;
            v20 = HIWORD(v8);
            v8 += v16;
            v21 = (unsigned __int8)v20;
            v22 = HIWORD(v7);
            v7 += v15;
            BYTE6(v22) = BYTE6(v6);
            v6 += v14;
            v11 = BYTE6(v22) | (((unsigned __int8)v22 | (unsigned int)(v21 << 8)) << 8);
            *(_DWORD *)v18 = v11;
            v18 += 4;
          }
          while ( v4 != v19 );
        }
        v23 = (char *)(v32 + 4LL * *((int *)a2 + 8));
        v24 = &v23[(int)v2 * v30];
        while ( v23 != v24 )
        {
          memmove(v23, v12, 4 * *((_DWORD *)a2 + 10));
          v23 += v2;
        }
        FreeTmpBuffer(v12, v11, v14, v15);
      }
    }
    return;
  }
  v25 = *((int *)a2 + 45);
  v33 = *((_QWORD *)a2 + 11);
  v34 = *((_QWORD *)a2 + 12);
  if ( (int)v25 > 0 )
  {
    v6 += *((_QWORD *)a2 + 10) * v25;
    v7 += *((_QWORD *)a2 + 11) * v25;
    v8 += *((_QWORD *)a2 + 12) * v25;
  }
  v26 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)((int)v2 * *((_DWORD *)a2 + 9));
  if ( v5 )
  {
    v35 = *((int *)a1 + 22);
    v31 = *((_QWORD *)a2 + 10);
    while ( 1 )
    {
      --v5;
      v27 = (void *)v26;
      v28 = BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8);
      v29 = (unsigned __int64)(4 * *((_DWORD *)a2 + 10)) >> 2;
      if ( v29 )
      {
        if ( (v26 & 4) == 0 )
          goto LABEL_22;
        *(_DWORD *)v26 = v28;
        if ( --v29 )
          break;
      }
LABEL_24:
      v7 += v33;
      v6 += v31;
      v8 += v34;
      v26 += v35;
      if ( !v5 )
        return;
    }
    v27 = (void *)(v26 + 4);
LABEL_22:
    memset64(v27, v28 | ((unsigned __int64)v28 << 32), v29 >> 1);
    if ( (v29 & 1) != 0 )
      *((_DWORD *)v27 + v29 - 1) = v28;
    goto LABEL_24;
  }
}
