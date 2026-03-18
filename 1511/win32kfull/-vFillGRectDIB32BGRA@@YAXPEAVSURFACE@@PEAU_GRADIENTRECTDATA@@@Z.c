/*
 * XREFs of ?vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C00DAFD0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
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
  unsigned __int64 v16; // r11
  __int64 v17; // r15
  unsigned __int64 v18; // rax
  int v19; // r10d
  unsigned __int64 v20; // rax
  int v21; // r9d
  char *v22; // rdi
  char *i; // rsi
  __int64 v24; // rax
  __int64 v25; // r11
  __int64 v26; // r14
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // r13
  __int64 v33; // r11
  void *v34; // r12
  unsigned int v35; // ebp
  unsigned __int64 v36; // r14
  __int64 v37; // [rsp+20h] [rbp-68h]
  unsigned __int64 v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+90h] [rbp+8h]
  int v40; // [rsp+98h] [rbp+10h]
  __int64 v41; // [rsp+98h] [rbp+10h]
  __int64 v42; // [rsp+A0h] [rbp+18h]
  __int64 v43; // [rsp+A0h] [rbp+18h]
  __int64 v44; // [rsp+A8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = 0LL;
  v5 = *((_DWORD *)a2 + 11);
  v40 = v5;
  if ( !*((_DWORD *)a2 + 38) )
  {
    v6 = *((_QWORD *)a1 + 10) + v2 * *((_DWORD *)a2 + 9);
    v7 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v7 - 1) <= 0x9C3FFF )
    {
      v38 = AllocFreeTmpBuffer((unsigned int)(4 * v7));
      v8 = (int *)v38;
      if ( v38 )
      {
        v9 = *((_QWORD *)a2 + 6);
        v10 = *((_QWORD *)a2 + 7);
        v11 = *((_QWORD *)a2 + 8);
        v12 = *((_QWORD *)a2 + 9);
        v13 = *((_QWORD *)a2 + 14);
        v42 = *((_QWORD *)a2 + 17);
        v14 = *((int *)a2 + 44);
        v37 = *((_QWORD *)a2 + 16);
        if ( (int)v14 > 0 )
        {
          v9 += v13 * v14;
          v10 += *((_QWORD *)a2 + 15) * v14;
          v11 += *((_QWORD *)a2 + 16) * v14;
          v12 += v42 * v14;
        }
        v15 = *((int *)a2 + 10);
        v16 = (unsigned __int64)(4 * v15 + 3) >> 2;
        if ( v38 > v38 + 4 * v15 )
          v16 = 0LL;
        if ( v16 )
        {
          v17 = *((_QWORD *)a2 + 15);
          do
          {
            ++v3;
            v18 = HIWORD(v12);
            v12 += v42;
            v19 = (unsigned __int8)v18;
            v20 = HIWORD(v9);
            v9 += v13;
            BYTE6(v20) = BYTE6(v10);
            v10 += v17;
            v21 = BYTE6(v20);
            BYTE6(v20) = BYTE6(v11);
            v11 += v37;
            *v8++ = BYTE6(v20) | ((v21 | (((unsigned __int8)v20 | (v19 << 8)) << 8)) << 8);
          }
          while ( v3 != v16 );
          v8 = (int *)v38;
          v5 = v40;
        }
        v22 = (char *)(v6 + 4LL * *((int *)a2 + 8));
        for ( i = &v22[v2 * v5]; v22 != i; v22 += v2 )
          memmove(v22, v8, 4 * *((_DWORD *)a2 + 10));
        FreeTmpBuffer(v8);
      }
    }
    return;
  }
  v24 = *((int *)a2 + 45);
  v25 = *((_QWORD *)a2 + 11);
  v26 = *((_QWORD *)a2 + 12);
  v27 = *((_QWORD *)a2 + 13);
  v28 = *((_QWORD *)a2 + 6);
  v29 = *((_QWORD *)a2 + 7);
  v30 = *((_QWORD *)a2 + 8);
  v31 = *((_QWORD *)a2 + 9);
  v32 = *((_QWORD *)a2 + 10);
  v39 = *((_QWORD *)a2 + 11);
  v41 = v26;
  v43 = v27;
  if ( (int)v24 > 0 )
  {
    v28 += v32 * v24;
    v29 += v25 * v24;
    v30 += v26 * v24;
    v31 += v27 * v24;
  }
  v33 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(v2 * *((_DWORD *)a2 + 9));
  if ( v5 )
  {
    v44 = *((int *)a1 + 22);
    while ( 1 )
    {
      --v5;
      v34 = (void *)v33;
      v35 = BYTE6(v30) | ((BYTE6(v29) | ((BYTE6(v28) | (BYTE6(v31) << 8)) << 8)) << 8);
      v36 = (unsigned __int64)(4 * *((_DWORD *)a2 + 10)) >> 2;
      if ( v36 )
      {
        if ( (v33 & 4) == 0 )
          goto LABEL_22;
        *(_DWORD *)v33 = v35;
        if ( --v36 )
          break;
      }
LABEL_24:
      v29 += v39;
      v28 += v32;
      v30 += v41;
      v31 += v43;
      v33 += v44;
      if ( !v5 )
        return;
    }
    v34 = (void *)(v33 + 4);
LABEL_22:
    memset64(v34, v35 | ((unsigned __int64)v35 << 32), v36 >> 1);
    if ( (v36 & 1) != 0 )
      *((_DWORD *)v34 + v36 - 1) = v35;
    goto LABEL_24;
  }
}
