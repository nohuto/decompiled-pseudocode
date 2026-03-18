/*
 * XREFs of pvHandleKerningPairs @ 0x1C0247298
 * Callers:
 *     ttfdQueryFontTree @ 0x1C00AC098 (ttfdQueryFontTree.c)
 * Callees:
 *     fs_OpenFonts @ 0x1C00ABED8 (fs_OpenFonts.c)
 *     fs_Initialize @ 0x1C00ABF2C (fs_Initialize.c)
 *     fs_NewSfnt @ 0x1C00AD08C (fs_NewSfnt.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     cQueryKerningPairs @ 0x1C0246C68 (cQueryKerningPairs.c)
 *     fs_GetGlyphIDs @ 0x1C02D8438 (fs_GetGlyphIDs.c)
 */

__int64 __fastcall pvHandleKerningPairs(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  unsigned int KerningPairs; // eax
  __int64 v9; // rdx
  unsigned int v10; // r14d
  _QWORD *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  char *v17; // rax
  void *v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int16 v23; // [rsp+34h] [rbp-CCh]
  _QWORD v24[11]; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+9Ch] [rbp-64h]
  __int64 v27; // [rsp+A0h] [rbp-60h]
  __int16 v28; // [rsp+A8h] [rbp-58h]
  __int16 v29; // [rsp+AAh] [rbp-56h]
  int v30[60]; // [rsp+F0h] [rbp-10h] BYREF
  char v31; // [rsp+1E0h] [rbp+E0h] BYREF

  *a2 = 0LL;
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
  {
    v22 = v5 - 16;
    ++*(_DWORD *)(v22 + 4);
    *a2 = v22;
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
        if ( (unsigned int)fs_OpenFonts(v24, (__int64)v30) )
          return 0LL;
        v24[2] = 0LL;
        v24[1] = &v31;
        v24[3] = 0LL;
        if ( (unsigned int)fs_Initialize((__int64)v24, v30) )
          return 0LL;
        v24[10] = *(_QWORD *)(a1 + 64);
        v28 = *(_WORD *)(a1 + 310);
        v29 = *(_WORD *)(a1 + 312);
        v27 = a1;
        v25 = 1;
        v26 = 1;
        if ( (unsigned int)fs_NewSfnt((__int64)v24, (__int64)v30, v13, v14) )
          return 0LL;
        v12 = v24;
      }
      if ( !(unsigned int)fs_GetGlyphIDs(v12, v9, 32LL) && !(unsigned int)fs_GetGlyphIDs(v12, v15, 160LL) && v23 )
        *(_DWORD *)(a1 + 300) |= 0x10u;
      if ( !(unsigned int)fs_GetGlyphIDs(v12, v15, 45LL) && !(unsigned int)fs_GetGlyphIDs(v12, v16, 173LL) )
      {
        if ( v23 )
          *(_DWORD *)(a1 + 300) |= 0x20u;
      }
    }
    v17 = (char *)EngAllocMem(0, 6 * v10 + 22, 0x64667454u);
    v18 = v17;
    if ( !v17 )
      return 0LL;
    *(_QWORD *)(a1 + 80) = v17 + 16;
    *((_QWORD *)v17 + 1) = a1;
    *(_DWORD *)v17 = 0;
    *((_DWORD *)v17 + 1) = 1;
    *a2 = v17;
    v19 = cQueryKerningPairs(a1, v10, *(unsigned __int16 **)(a1 + 80), a3);
    if ( v19 == -1 )
    {
      EngFreeMem(v18);
      *(_QWORD *)(a1 + 80) = 0LL;
      return 0LL;
    }
    v20 = 3LL * v19;
    v21 = *(_QWORD *)(a1 + 80);
    *(_DWORD *)(v21 + 2 * v20) = 0;
    *(_WORD *)(v21 + 2 * v20 + 4) = 0;
  }
  return *(_QWORD *)(a1 + 80);
}
