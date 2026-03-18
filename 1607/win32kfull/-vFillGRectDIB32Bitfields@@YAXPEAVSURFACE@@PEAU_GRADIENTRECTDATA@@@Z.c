/*
 * XREFs of ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CE0D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 */

void __fastcall vFillGRectDIB32Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r13d
  struct _GRADIENTRECTDATA *v3; // r14
  __int64 v4; // r11
  int v5; // r15d
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  char *v11; // rdx
  __int64 v12; // rax
  char *v13; // rdi
  unsigned __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 i; // rdi
  int v18; // eax
  char *v19; // rdi
  int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r13
  unsigned int v24; // eax
  void *v25; // r9
  unsigned __int64 v26; // r8
  char *Src; // [rsp+20h] [rbp-88h]
  __int64 v28; // [rsp+28h] [rbp-80h]
  __int64 v29; // [rsp+30h] [rbp-78h]
  char *v30; // [rsp+50h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp+8h]
  int v33; // [rsp+C0h] [rbp+18h]
  __int64 v34; // [rsp+C0h] [rbp+18h]
  char *v35; // [rsp+C8h] [rbp+20h]
  __int64 v36; // [rsp+C8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = a2;
  v33 = v2;
  v4 = *((_QWORD *)a2 + 21);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v28 = v4;
  if ( !*((_DWORD *)a2 + 38) )
  {
    v9 = *((_QWORD *)a1 + 10) + v2 * *((_DWORD *)a2 + 9);
    v10 = *((int *)a2 + 44);
    if ( (int)v10 > 0 )
    {
      v6 += *((_QWORD *)a2 + 14) * v10;
      v7 += *((_QWORD *)a2 + 15) * v10;
      v8 += *((_QWORD *)a2 + 16) * *((int *)a2 + 44);
    }
    v11 = (char *)(v9 + 4LL * *((int *)a2 + 8));
    v12 = *((int *)v3 + 10);
    Src = v11;
    v13 = (char *)(v9 + 4LL * *((int *)v3 + 8));
    v30 = v11;
    v35 = v11;
    v14 = (unsigned __int64)(4 * v12 + 3) >> 2;
    if ( v11 > &v11[4 * v12] )
      v14 = 0LL;
    if ( v14 )
    {
      v29 = *((_QWORD *)v3 + 14);
      v15 = *((_QWORD *)v3 + 15);
      v16 = *((_QWORD *)v3 + 16);
      for ( i = 0LL; i != v14; ++i )
      {
        v18 = XEPALOBJ::ulDispatchGFPEFunction(
                v4,
                *(unsigned int *)(*(_QWORD *)v4 + 100LL),
                BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
        v6 += v29;
        v4 = v28;
        v7 += v15;
        v8 += v16;
        *(_DWORD *)v35 = v18;
        v35 += 4;
      }
      v13 = v30;
      v3 = a2;
      v11 = v30;
      v2 = v33;
    }
    v19 = &v13[v2];
    v20 = v5 - 1;
    while ( v20 > 0 )
    {
      --v20;
      memmove(v19, v11, 4 * *((_DWORD *)v3 + 10));
      v11 = Src;
      v19 += v2;
    }
    return;
  }
  v21 = *((int *)a2 + 45);
  v31 = *((_QWORD *)a2 + 11);
  v34 = *((_QWORD *)a2 + 12);
  if ( (int)v21 > 0 )
  {
    v6 += *((_QWORD *)a2 + 10) * v21;
    v7 += *((_QWORD *)a2 + 11) * v21;
    v8 += *((_QWORD *)a2 + 12) * v21;
  }
  v22 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(v2 * *((_DWORD *)a2 + 9));
  if ( v5 )
  {
    v36 = *((int *)a1 + 22);
    v23 = *((_QWORD *)a2 + 10);
    while ( 1 )
    {
      --v5;
      v24 = XEPALOBJ::ulDispatchGFPEFunction(
              v4,
              *(unsigned int *)(*(_QWORD *)v4 + 100LL),
              BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
      v25 = (void *)v22;
      v26 = (unsigned __int64)(4 * *((_DWORD *)v3 + 10)) >> 2;
      if ( v26 )
      {
        if ( (v22 & 4) == 0 )
          goto LABEL_22;
        *(_DWORD *)v22 = v24;
        if ( --v26 )
          break;
      }
LABEL_24:
      v7 += v31;
      v6 += v23;
      v8 += v34;
      v22 += v36;
      v4 = v28;
      if ( !v5 )
        return;
    }
    v25 = (void *)(v22 + 4);
LABEL_22:
    memset64(v25, v24 | ((unsigned __int64)v24 << 32), v26 >> 1);
    if ( (v26 & 1) != 0 )
      *((_DWORD *)v25 + v26 - 1) = v24;
    goto LABEL_24;
  }
}
