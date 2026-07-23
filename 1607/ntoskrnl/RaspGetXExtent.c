/*
 * XREFs of RaspGetXExtent @ 0x1401410C8
 * Callers:
 *     BcpGetCharacterMaxResourceProfile @ 0x1401419E8 (BcpGetCharacterMaxResourceProfile.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x14023A970 (BgpRasGetGlyphAdvanceWidth.c)
 * Callees:
 *     RaspRasterize @ 0x1401294D0 (RaspRasterize.c)
 *     RaspAllocateMemory @ 0x140129A3C (RaspAllocateMemory.c)
 *     RaspFreeMemory @ 0x140129BE8 (RaspFreeMemory.c)
 *     RaspGetCacheEntry @ 0x140129FE4 (RaspGetCacheEntry.c)
 *     RaspAddCacheEntry @ 0x140728370 (RaspAddCacheEntry.c)
 */

__int64 __fastcall RaspGetXExtent(unsigned __int16 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, __int64 a6)
{
  _QWORD *v6; // r14
  int v7; // esi
  __int64 v8; // rdi
  int v9; // r9d
  bool v10; // zf
  bool v13; // r15
  int v14; // r8d
  __int64 v15; // r8
  int v16; // r9d
  char *Memory; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // ecx
  char *v22; // [rsp+58h] [rbp-59h] BYREF
  __int64 v23[3]; // [rsp+60h] [rbp-51h] BYREF
  char v24; // [rsp+78h] [rbp-39h] BYREF
  int v25; // [rsp+108h] [rbp+57h] BYREF
  _DWORD *v26; // [rsp+118h] [rbp+67h]
  __int64 v27; // [rsp+120h] [rbp+6Fh] BYREF

  v26 = a3;
  v6 = (_QWORD *)a6;
  v7 = 0;
  memset(v23, 0, sizeof(v23));
  v22 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v27 = 0LL;
  v10 = *(_QWORD *)a6 == 0LL;
  a5 = 0;
  v13 = v10;
  if ( a1 >= 0x20u )
  {
    v14 = *(_DWORD *)(a2 + 16);
    a6 = *(_QWORD *)(a2 + 8);
    RaspGetCacheEntry((__int64 **)&RaspBitmapCache, a1, v14, *(_DWORD *)(a6 + 40), a6, &v22);
    Memory = v22;
    if ( v22 )
    {
LABEL_3:
      v9 = *((_DWORD *)Memory + 11);
      v6[2] = *(_QWORD *)(Memory + 62);
      goto LABEL_4;
    }
    v7 = RaspRasterize(a2, a1, v15, v16, 0, &v27, &a5, &v25, (__int64)v6);
    if ( v7 >= 0 )
    {
      if ( !v13 )
      {
        Memory = &v24;
LABEL_10:
        v19 = v6[2];
        v20 = a6;
        v8 = v27;
        v21 = *(_DWORD *)(a6 + 40);
        *((_DWORD *)Memory + 10) = *(_DWORD *)(a2 + 16);
        *((_DWORD *)Memory + 11) = a5;
        *((_DWORD *)Memory + 12) = v25;
        *((_DWORD *)Memory + 13) = 4;
        *((_DWORD *)Memory + 14) = 4;
        *((_WORD *)Memory + 30) = a1;
        *((_DWORD *)Memory + 9) = v21;
        *((_QWORD *)Memory + 3) = v20;
        *((_QWORD *)Memory + 2) = v8;
        *(_QWORD *)(Memory + 62) = v19;
        if ( v13 )
          RaspAddCacheEntry(&RaspBitmapCache, Memory);
        goto LABEL_3;
      }
      Memory = (char *)RaspAllocateMemory(0x46uLL, v23);
      if ( Memory )
        goto LABEL_10;
      v7 = -1073741801;
    }
    v8 = v27;
    v9 = a5;
  }
LABEL_4:
  *v26 = v9;
  if ( !v13 || v7 < 0 )
  {
    if ( v8 )
      RaspFreeMemory(v8, v6);
  }
  return (unsigned int)v7;
}
