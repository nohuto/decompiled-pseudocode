/*
 * XREFs of pvHandleKerningPairs @ 0x1C0247330
 * Callers:
 *     ttfdQueryFontTree @ 0x1C00A3B48 (ttfdQueryFontTree.c)
 * Callees:
 *     fs_OpenFonts @ 0x1C00A3984 (fs_OpenFonts.c)
 *     fs_Initialize @ 0x1C00A39D8 (fs_Initialize.c)
 *     fs_NewSfnt @ 0x1C00A50AC (fs_NewSfnt.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     cQueryKerningPairs @ 0x1C0246D94 (cQueryKerningPairs.c)
 *     fs_GetGlyphIDs @ 0x1C02D97E0 (fs_GetGlyphIDs.c)
 */

__int64 __fastcall pvHandleKerningPairs(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  unsigned int KerningPairs; // eax
  __int64 v9; // rdx
  unsigned int v10; // r14d
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  char *v15; // rax
  void *v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int16 v21; // [rsp+34h] [rbp-CCh]
  _QWORD v22[11]; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+9Ch] [rbp-64h]
  __int64 v25; // [rsp+A0h] [rbp-60h]
  __int16 v26; // [rsp+A8h] [rbp-58h]
  __int16 v27; // [rsp+AAh] [rbp-56h]
  int v28[60]; // [rsp+F0h] [rbp-10h] BYREF
  char v29; // [rsp+1E0h] [rbp+E0h] BYREF

  *a2 = 0LL;
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
  {
    v20 = v5 - 16;
    ++*(_DWORD *)(v20 + 4);
    *a2 = v20;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v7 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 64) = *(_QWORD *)(v7 + 16);
      *(_DWORD *)(a1 + 72) = *(_DWORD *)(v7 + 24);
    }
    KerningPairs = cQueryKerningPairs(a1, 0, 0LL, a3);
    v10 = KerningPairs;
    if ( KerningPairs == -1 )
      return 0LL;
    if ( KerningPairs && *(_WORD *)(a1 + 310) == 3 && *(_WORD *)(a1 + 312) == 1 )
    {
      v12 = *(_QWORD **)(a1 + 24);
      if ( !*(_DWORD *)(a1 + 48) )
      {
        if ( (unsigned int)fs_OpenFonts(v22, (__int64)v28) )
          return 0LL;
        v22[2] = 0LL;
        v22[1] = &v29;
        v22[3] = 0LL;
        if ( (unsigned int)fs_Initialize((__int64)v22, v28) )
          return 0LL;
        v22[10] = *(_QWORD *)(a1 + 64);
        v26 = *(_WORD *)(a1 + 310);
        v27 = *(_WORD *)(a1 + 312);
        v25 = a1;
        v23 = 1;
        v24 = 1;
        if ( (unsigned int)fs_NewSfnt((__int64)v22, (__int64)v28) )
          return 0LL;
        v12 = v22;
      }
      if ( !(unsigned int)fs_GetGlyphIDs(v12, v9, 32LL) && !(unsigned int)fs_GetGlyphIDs(v12, v13, 160LL) && v21 )
        *(_DWORD *)(a1 + 300) |= 0x10u;
      if ( !(unsigned int)fs_GetGlyphIDs(v12, v13, 45LL) && !(unsigned int)fs_GetGlyphIDs(v12, v14, 173LL) )
      {
        if ( v21 )
          *(_DWORD *)(a1 + 300) |= 0x20u;
      }
    }
    v15 = (char *)EngAllocMem(0, 6 * v10 + 22, 0x64667454u);
    v16 = v15;
    if ( !v15 )
      return 0LL;
    *(_QWORD *)(a1 + 80) = v15 + 16;
    *((_QWORD *)v15 + 1) = a1;
    *(_DWORD *)v15 = 0;
    *((_DWORD *)v15 + 1) = 1;
    *a2 = v15;
    v17 = cQueryKerningPairs(a1, v10, *(unsigned __int16 **)(a1 + 80), a3);
    if ( v17 == -1 )
    {
      EngFreeMem(v16);
      *(_QWORD *)(a1 + 80) = 0LL;
      return 0LL;
    }
    v18 = 3LL * v17;
    v19 = *(_QWORD *)(a1 + 80);
    *(_DWORD *)(v19 + 2 * v18) = 0;
    *(_WORD *)(v19 + 2 * v18 + 4) = 0;
  }
  return *(_QWORD *)(a1 + 80);
}
