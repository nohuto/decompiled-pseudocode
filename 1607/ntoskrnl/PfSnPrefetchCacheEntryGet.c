/*
 * XREFs of PfSnPrefetchCacheEntryGet @ 0x1403EA154
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x1403E8FC4 (PfSnCheckActionsNeeded.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1403EB1DC (PfSnPrefetchCacheEntryUpdate.c)
 * Callees:
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PfSnPrefetchCacheCtxStart @ 0x1405792E4 (PfSnPrefetchCacheCtxStart.c)
 */

__int64 __fastcall PfSnPrefetchCacheEntryGet(__int64 a1, _OWORD *a2, __int64 a3, int *a4)
{
  unsigned int v4; // r13d
  __int64 v7; // rbx
  __int64 v8; // r15
  int v9; // esi
  __int64 v10; // r14
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  _QWORD *v18; // rax
  __int64 *v19; // rbx
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int128 v22; // xmm1
  unsigned int v23; // r8d
  char v24; // al
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // [rsp+80h] [rbp+40h]
  __int64 v28; // [rsp+80h] [rbp+40h]
  __int64 v29; // [rsp+80h] [rbp+40h]
  _OWORD *Buf2; // [rsp+88h] [rbp+48h]

  Buf2 = a2;
  v4 = *(_DWORD *)(a1 + 4);
  v7 = 0LL;
  v8 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v9 = 1;
  v10 = a3 & v8;
  v27 = a3 & v8;
  while ( 1 )
  {
    if ( v7 )
      goto LABEL_5;
    if ( !(v4 >> 5) )
      break;
    a2 = Buf2;
    v7 = *(_QWORD *)(a1 + 8)
       + 8LL
       * ((37
         * (BYTE6(v27)
          + 37
          * (BYTE5(v27)
           + 37
           * (BYTE4(v27)
            + 37 * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v10 + 11623883)))))))
         + HIBYTE(v27)) & ((v4 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v10 == (v8 & *(_QWORD *)(v7 + 8)) )
        goto LABEL_7;
    }
    v7 = 0LL;
LABEL_7:
    if ( !v7 )
      break;
    v11 = memcmp((const void *)(v7 + 32), a2, 0x40uLL);
    a2 = Buf2;
    if ( !v11 )
    {
      v12 = (_QWORD *)(v7 + 16);
      v13 = *(_QWORD *)(v7 + 16);
      v14 = *(_QWORD **)(v7 + 24);
      if ( *(_QWORD *)(v13 + 8) != v7 + 16 || (_QWORD *)*v14 != v12 )
        __fastfail(3u);
      *v14 = v13;
      v15 = a1 + 16;
      *(_QWORD *)(v13 + 8) = v14;
      v16 = *(_QWORD **)(v15 + 8);
      if ( *v16 != v15 )
        __fastfail(3u);
      v9 = 0;
LABEL_13:
      *v12 = v15;
      v12[1] = v16;
      *v16 = v12;
      *(_QWORD *)(v15 + 8) = v12;
      goto LABEL_14;
    }
  }
  if ( !a4 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 8) || (int)PfSnPrefetchCacheCtxStart(a1) >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 32) = *(_QWORD *)v7;
    }
    else
    {
      v18 = (_QWORD *)(a1 + 16);
      v19 = *(__int64 **)(a1 + 16);
      v20 = *v19;
      if ( v19[1] != a1 + 16 || *(__int64 **)(v20 + 8) != v19 )
        __fastfail(3u);
      *v18 = v20;
      *(_QWORD *)(v20 + 8) = v18;
      v7 = (__int64)(v19 - 2);
      v28 = *(_QWORD *)(v7 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
      v21 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                     + 8LL
                     * ((37
                       * (BYTE6(v28)
                        + 37
                        * (BYTE5(v28)
                         + 37
                         * (BYTE4(v28)
                          + 37
                          * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
                       + HIBYTE(v28)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
      if ( (*(_QWORD *)v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v21 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v28)
                          + 37
                          * (BYTE5(v28)
                           + 37
                           * (BYTE4(v28)
                            + 37
                            * (BYTE3(v28)
                             + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
                         + HIBYTE(v28)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
      while ( (*v21 & 1) == 0 )
      {
        if ( *v21 == v7 )
        {
          *v21 = *(_QWORD *)v7;
          --*(_DWORD *)a1;
          *(_QWORD *)v7 |= 0x8000000000000002uLL;
          break;
        }
        v21 = (_QWORD *)*v21;
      }
    }
    memset((void *)v7, 0, 0x78uLL);
    *(_OWORD *)(v7 + 32) = *Buf2;
    *(_OWORD *)(v7 + 48) = Buf2[1];
    *(_OWORD *)(v7 + 64) = Buf2[2];
    v22 = Buf2[3];
    *(_QWORD *)(v7 + 8) = a3;
    *(_OWORD *)(v7 + 80) = v22;
    v23 = *(_DWORD *)(a1 + 4);
    v24 = v23 & 0x1F;
    v29 = a3 & (-1LL << (v23 & 0x1F));
    v25 = *(_QWORD *)(a1 + 8);
    v26 = (37
         * (BYTE6(v29)
          + 37
          * (BYTE5(v29)
           + 37
           * (BYTE4(v29)
            + 37
            * ((((unsigned int)a3 & (-1 << v24)) >> 24)
             + 37
             * ((unsigned __int8)(((unsigned int)a3 & (-1 << v24)) >> 16)
              + 37
              * ((unsigned __int8)((unsigned __int16)(a3 & (-1 << v24)) >> 8)
               + 37 * ((unsigned __int8)(a3 & (-1 << v24)) + 11623883)))))))
         + HIBYTE(v29)) & ((v23 >> 5) - 1);
    *(_QWORD *)v7 = *(_QWORD *)(v25 + 8 * v26);
    v12 = (_QWORD *)(v7 + 16);
    *(_QWORD *)(v25 + 8 * v26) = v7;
    ++*(_DWORD *)a1;
    v15 = a1 + 16;
    v16 = *(_QWORD **)(v15 + 8);
    if ( *v16 != v15 )
      __fastfail(3u);
    goto LABEL_13;
  }
  v7 = 0LL;
LABEL_14:
  if ( a4 )
    *a4 = v9;
  return v7;
}
