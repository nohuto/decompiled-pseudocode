/*
 * XREFs of EtwpAllocateEventNameFilter @ 0x1406A85CC
 * Callers:
 *     EtwpValidateFilterDescriptors @ 0x1406A9544 (EtwpValidateFilterDescriptors.c)
 * Callees:
 *     strnlen @ 0x14014F1C4 (strnlen.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpFreeEventNameFilter @ 0x1406A9370 (EtwpFreeEventNameFilter.c)
 */

__int64 __fastcall EtwpAllocateEventNameFilter(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // ebx
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int v7; // r13d
  __int64 v8; // r15
  char *PoolWithTag; // rsi
  unsigned __int64 *v10; // rdi
  char v11; // al
  __int64 v12; // rax
  char *v13; // r15
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned int v16; // edi
  const char *v17; // r15
  unsigned int v18; // eax
  unsigned int v19; // r14d
  __int64 v20; // r10
  unsigned __int8 *v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // r11
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r10d
  int v27; // r10d
  int v28; // r10d
  int v29; // r10d
  int v30; // r10d
  int v31; // r10d
  _QWORD *v32; // r10
  unsigned int v33; // r8d
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // [rsp+70h] [rbp+8h]
  _QWORD *v38; // [rsp+80h] [rbp+18h]
  __int64 v39; // [rsp+80h] [rbp+18h]
  char *v40; // [rsp+88h] [rbp+20h]

  v2 = a1[2];
  v3 = 0;
  if ( v2 < 0x18 )
    return 3221225485LL;
  v5 = *(_QWORD *)a1;
  v6 = v2 - 20;
  v7 = *(unsigned __int16 *)(*(_QWORD *)a1 + 18LL);
  v8 = 24 * v7;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8 + v6 + 40, 0x46777445u);
  if ( !PoolWithTag )
    return 3221225495LL;
  v10 = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x46777445u);
  if ( !v10 )
  {
    v3 = -1073741801;
    goto LABEL_43;
  }
  *PoolWithTag = *(_BYTE *)(v5 + 17);
  v11 = *(_BYTE *)(v5 + 16);
  if ( !v11 )
    v11 = -1;
  PoolWithTag[1] = v11;
  v12 = *(_QWORD *)v5;
  if ( !*(_QWORD *)v5 )
    v12 = -1LL;
  *((_QWORD *)PoolWithTag + 1) = v12;
  *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)(v5 + 8);
  v13 = &PoolWithTag[v8 + 40];
  v38 = PoolWithTag + 40;
  v40 = v13;
  memmove(v13, (const void *)(v5 + 20), (unsigned int)v6);
  *((_DWORD *)PoolWithTag + 6) = 0;
  *((_QWORD *)PoolWithTag + 4) = v10;
  *((_DWORD *)PoolWithTag + 7) = 1024;
  v14 = 32LL;
  v15 = 0LL;
  if ( v10 >= v10 + 32 )
    v14 = 0LL;
  if ( v14 )
  {
    do
    {
      ++v15;
      *v10++ = (unsigned __int64)(PoolWithTag + 24) | 1;
    }
    while ( v15 < v14 );
  }
  v36 = 0;
  v16 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( v16 >= (int)v6 - 1 )
        goto LABEL_42;
      v17 = &v13[v16];
      v18 = v17 ? strnlen(v17, (unsigned int)v6 - v16) : 0;
      v19 = v18 + 1;
      if ( v18 + 1 > (unsigned int)v6 - v16 || v18 == -1 )
        goto LABEL_42;
      v20 = v18;
      v21 = (unsigned __int8 *)v17;
      v22 = 314159LL;
      if ( v18 >= 8uLL )
      {
        v23 = (unsigned __int64)v18 >> 3;
        v20 = v18 - 8 * v23;
        do
        {
          v24 = v21[6]
              + 37 * (v21[5] + 37 * (v21[4] + 37 * (v21[3] + 37 * (v21[2] + 37 * (v21[1] + 37 * (*v21 + 37 * v22))))));
          v25 = v21[7];
          v21 += 8;
          v22 = v25 + 37 * v24;
          --v23;
        }
        while ( v23 );
      }
      if ( (unsigned __int64)(v20 - 1) <= 6 )
      {
        v26 = v20 - 1;
        if ( !v26 )
          goto LABEL_39;
        v27 = v26 - 1;
        if ( !v27 )
          goto LABEL_38;
        v28 = v27 - 1;
        if ( !v28 )
          goto LABEL_37;
        v29 = v28 - 1;
        if ( !v29 )
          goto LABEL_36;
        v30 = v29 - 1;
        if ( !v30 )
          goto LABEL_35;
        v31 = v30 - 1;
        if ( !v31 )
          goto LABEL_34;
        if ( v31 == 1 )
          break;
      }
LABEL_40:
      v32 = v38;
      v16 += v19;
      v38[2] = v17;
      v13 = v40;
      v38[1] = v22;
      v33 = *((_DWORD *)PoolWithTag + 7);
      v39 = v22 & (-1LL << (v33 & 0x1F));
      v34 = *((_QWORD *)PoolWithTag + 4);
      v35 = (37
           * (BYTE6(v39)
            + 37
            * (BYTE5(v39)
             + 37
             * (BYTE4(v39)
              + 37
              * ((((unsigned int)v22 & (-1 << (v33 & 0x1F))) >> 24)
               + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
           + HIBYTE(v39)) & ((v33 >> 5) - 1);
      *v32 = *(_QWORD *)(v34 + 8 * v35);
      *(_QWORD *)(v34 + 8 * v35) = v32;
      ++*((_DWORD *)PoolWithTag + 6);
      ++v36;
      v38 = v32 + 3;
      if ( v36 >= v7 )
        goto LABEL_41;
    }
    v22 = *v21++ + 37 * v22;
LABEL_34:
    v22 = *v21++ + 37 * v22;
LABEL_35:
    v22 = *v21++ + 37 * v22;
LABEL_36:
    v22 = *v21++ + 37 * v22;
LABEL_37:
    v22 = *v21++ + 37 * v22;
LABEL_38:
    v22 = *v21++ + 37 * v22;
LABEL_39:
    v22 = *v21 + 37 * v22;
    goto LABEL_40;
  }
LABEL_41:
  if ( v16 == (_DWORD)v6 )
  {
    *a2 = PoolWithTag;
    return v3;
  }
LABEL_42:
  v3 = -1073741811;
LABEL_43:
  EtwpFreeEventNameFilter(PoolWithTag);
  return v3;
}
