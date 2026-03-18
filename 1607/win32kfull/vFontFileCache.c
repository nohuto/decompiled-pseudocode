/*
 * XREFs of vFontFileCache @ 0x1C0157994
 * Callers:
 *     bLoadFontFile @ 0x1C002025C (bLoadFontFile.c)
 * Callees:
 *     EngFntCacheAlloc @ 0x1C0157C70 (EngFntCacheAlloc.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     EngFntCacheFault @ 0x1C027BAC0 (EngFntCacheFault.c)
 */

void __fastcall vFontFileCache(__int64 a1, ULONG a2, int a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // r9d
  __int64 i; // rdx
  unsigned int v9; // ebx
  ULONG v10; // edx
  _DWORD *v11; // rax
  _DWORD *v12; // rsi
  __int64 v13; // r12
  char *v14; // r13
  __int64 j; // r14
  __int64 v16; // r8
  _DWORD *v17; // rbx
  __int64 v18; // rax
  __int64 (__fastcall *v19)(); // rcx
  __int64 v20; // [rsp+30h] [rbp-38h]
  _DWORD *v21; // [rsp+88h] [rbp+20h]

  if ( a2 )
  {
    v6 = 0;
    v7 = 0;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
    {
      if ( *(_DWORD *)(a1 + 16LL * (unsigned int)i + 44) == 1 )
      {
        if ( v7 + ((*(_DWORD *)(*(_QWORD *)(a1 + 16 * (i + 3)) + 352LL) + 7) & 0xFFFFFFF8) + 240 < v7 )
          return;
        v7 += ((*(_DWORD *)(*(_QWORD *)(a1 + 16 * (i + 3)) + 352LL) + 7) & 0xFFFFFFF8) + 240;
      }
    }
    v9 = (4 * *(_DWORD *)(a1 + 8) + 23) & 0xFFFFFFF8;
    v10 = v9 + v7;
    if ( v9 + v7 >= v7 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 300LL) & 0x100) != 0 )
      {
        v6 = v9 + v7;
        if ( v10 + ((**(_DWORD **)(a1 + 32) + 7) & 0xFFFFFFF8) < v10 )
          return;
        v10 += (**(_DWORD **)(a1 + 32) + 7) & 0xFFFFFFF8;
      }
      v11 = EngFntCacheAlloc(a2, v10);
      v12 = v11;
      if ( v11 )
      {
        v13 = 0LL;
        *v11 = 1416914532;
        v11[1] = a3;
        v11[2] = *(_DWORD *)(a1 + 8);
        v11[3] = v6;
        v14 = (char *)v11 + v9;
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 12); j = (unsigned int)(j + 1) )
        {
          v16 = *(_QWORD *)(a1 + 16 * (j + 3));
          v20 = v16;
          if ( *(_DWORD *)(a1 + 16LL * (unsigned int)j + 44) == 1 )
          {
            v21 = v14;
            v12[v13 + 4] = (_DWORD)v14 - (_DWORD)v12;
            *(_OWORD *)(v14 + 4) = *(_OWORD *)(v16 + 112);
            *(_OWORD *)(v14 + 20) = *(_OWORD *)(v16 + 128);
            *(_OWORD *)(v14 + 36) = *(_OWORD *)(v16 + 144);
            *(_OWORD *)(v14 + 52) = *(_OWORD *)(v16 + 160);
            *(_OWORD *)(v14 + 68) = *(_OWORD *)(v16 + 176);
            *(_OWORD *)(v14 + 84) = *(_OWORD *)(v16 + 192);
            *(_OWORD *)(v14 + 100) = *(_OWORD *)(v16 + 208);
            *(_OWORD *)(v14 + 116) = *(_OWORD *)(v16 + 224);
            *(_OWORD *)(v14 + 132) = *(_OWORD *)(v16 + 240);
            *(_OWORD *)(v14 + 148) = *(_OWORD *)(v16 + 256);
            *(_OWORD *)(v14 + 164) = *(_OWORD *)(v16 + 272);
            *(_OWORD *)(v14 + 180) = *(_OWORD *)(v16 + 288);
            *(_OWORD *)(v14 + 196) = *(_OWORD *)(v16 + 304);
            *(_OWORD *)(v14 + 212) = *(_OWORD *)(v16 + 320);
            *(_QWORD *)(v14 + 228) = *(_QWORD *)(v16 + 336);
            *((_DWORD *)v14 + 59) = *(_DWORD *)(v16 + 344);
            v17 = (_DWORD *)(v16 + 352);
            memmove(v14 + 240, (const void *)(v16 + 352), *(unsigned int *)(v16 + 352));
            v14 += ((*v17 + 7) & 0xFFFFFFF8) + 240;
            if ( *(_DWORD *)(v20 + 284) == 2 )
            {
              v19 = *(__int64 (__fastcall **)())(v20 + 8);
              if ( v19 == SearchMortTable )
                *v21 = 2;
              else
                *v21 = (char *)v19 == (char *)SearchGsubTable;
            }
            else
            {
              *v21 = 0;
            }
            v13 = (unsigned int)(v13 + 1);
          }
        }
        v18 = (unsigned int)v12[3];
        if ( (_DWORD)v18 )
          memmove((char *)v12 + v18, *(const void **)(a1 + 32), **(unsigned int **)(a1 + 32));
      }
    }
  }
}
