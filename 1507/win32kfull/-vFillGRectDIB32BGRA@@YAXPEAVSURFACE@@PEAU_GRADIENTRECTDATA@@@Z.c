/*
 * XREFs of ?vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C00D5BC0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

void __fastcall vFillGRectDIB32BGRA(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // ebp
  __int64 v3; // rsi
  int v5; // r15d
  __int64 v6; // r12
  int v7; // ecx
  int *v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // r8
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r11
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  int v20; // r10d
  unsigned __int64 v21; // rax
  int v22; // r9d
  int v23; // r10d
  char *v24; // rdi
  char *i; // rsi
  __int64 v26; // rax
  __int64 v27; // r11
  __int64 v28; // r14
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // r13
  __int64 v35; // r11
  void *v36; // r12
  unsigned int v37; // ebp
  unsigned __int64 v38; // r14
  __int64 v39; // [rsp+20h] [rbp-68h]
  unsigned __int64 v40; // [rsp+30h] [rbp-58h]
  __int64 v41; // [rsp+90h] [rbp+8h]
  int v42; // [rsp+98h] [rbp+10h]
  __int64 v43; // [rsp+98h] [rbp+10h]
  __int64 v44; // [rsp+A0h] [rbp+18h]
  __int64 v45; // [rsp+A0h] [rbp+18h]
  __int64 v46; // [rsp+A8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = 0LL;
  v5 = *((_DWORD *)a2 + 11);
  v42 = v5;
  if ( !*((_DWORD *)a2 + 38) )
  {
    v6 = *((_QWORD *)a1 + 10) + v2 * *((_DWORD *)a2 + 9);
    v7 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v7 - 1) <= 0x9C3FFF )
    {
      v40 = AllocFreeTmpBuffer((unsigned int)(4 * v7));
      v8 = (int *)v40;
      if ( v40 )
      {
        v9 = *((_QWORD *)a2 + 6);
        v10 = *((_QWORD *)a2 + 7);
        v11 = *((_QWORD *)a2 + 8);
        v12 = *((_QWORD *)a2 + 9);
        v13 = *((_QWORD *)a2 + 14);
        v44 = *((_QWORD *)a2 + 17);
        v14 = *((int *)a2 + 44);
        v39 = *((_QWORD *)a2 + 16);
        if ( (int)v14 > 0 )
        {
          v9 += v13 * v14;
          v10 += *((_QWORD *)a2 + 15) * v14;
          v11 += *((_QWORD *)a2 + 16) * v14;
          v12 += v44 * v14;
        }
        v15 = *((int *)a2 + 10);
        v16 = v40 + 4 * v15;
        v17 = (unsigned __int64)(4 * v15 + 3) >> 2;
        if ( v40 > v16 )
          v17 = 0LL;
        if ( v17 )
        {
          v18 = *((_QWORD *)a2 + 15);
          do
          {
            ++v3;
            v19 = HIWORD(v12);
            v12 += v44;
            v20 = (unsigned __int8)v19;
            v21 = HIWORD(v9);
            v9 += v13;
            BYTE6(v21) = BYTE6(v10);
            v10 += v18;
            v22 = BYTE6(v21);
            BYTE6(v21) = BYTE6(v11);
            v11 += v39;
            v23 = (v22 | (((unsigned __int8)v21 | (v20 << 8)) << 8)) << 8;
            v16 = BYTE6(v21);
            *v8++ = BYTE6(v21) | v23;
          }
          while ( v3 != v17 );
          v8 = (int *)v40;
          v5 = v42;
        }
        v24 = (char *)(v6 + 4LL * *((int *)a2 + 8));
        for ( i = &v24[v2 * v5]; v24 != i; v24 += v2 )
          memmove(v24, v8, 4 * *((_DWORD *)a2 + 10));
        FreeTmpBuffer(v8, v10, v12, v16);
      }
    }
    return;
  }
  v26 = *((int *)a2 + 45);
  v27 = *((_QWORD *)a2 + 11);
  v28 = *((_QWORD *)a2 + 12);
  v29 = *((_QWORD *)a2 + 13);
  v30 = *((_QWORD *)a2 + 6);
  v31 = *((_QWORD *)a2 + 7);
  v32 = *((_QWORD *)a2 + 8);
  v33 = *((_QWORD *)a2 + 9);
  v34 = *((_QWORD *)a2 + 10);
  v41 = *((_QWORD *)a2 + 11);
  v43 = v28;
  v45 = v29;
  if ( (int)v26 > 0 )
  {
    v30 += v34 * v26;
    v31 += v27 * v26;
    v32 += v28 * v26;
    v33 += v29 * v26;
  }
  v35 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(v2 * *((_DWORD *)a2 + 9));
  if ( v5 )
  {
    v46 = *((int *)a1 + 22);
    while ( 1 )
    {
      --v5;
      v36 = (void *)v35;
      v37 = BYTE6(v32) | ((BYTE6(v31) | ((BYTE6(v30) | (BYTE6(v33) << 8)) << 8)) << 8);
      v38 = (unsigned __int64)(4 * *((_DWORD *)a2 + 10)) >> 2;
      if ( v38 )
      {
        if ( (v35 & 4) == 0 )
          goto LABEL_22;
        *(_DWORD *)v35 = v37;
        if ( --v38 )
          break;
      }
LABEL_24:
      v31 += v41;
      v30 += v34;
      v32 += v43;
      v33 += v45;
      v35 += v46;
      if ( !v5 )
        return;
    }
    v36 = (void *)(v35 + 4);
LABEL_22:
    memset64(v36, v37 | ((unsigned __int64)v37 << 32), v38 >> 1);
    if ( (v38 & 1) != 0 )
      *((_DWORD *)v36 + v38 - 1) = v37;
    goto LABEL_24;
  }
}
