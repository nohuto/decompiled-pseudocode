/*
 * XREFs of bReloadGlyphSet @ 0x1C00AC128
 * Callers:
 *     ttfdQueryFontTree @ 0x1C00AC098 (ttfdQueryFontTree.c)
 * Callees:
 *     fs_OpenFonts @ 0x1C00ABED8 (fs_OpenFonts.c)
 *     fs_Initialize @ 0x1C00ABF2C (fs_Initialize.c)
 *     bLoadGlyphSet @ 0x1C00AC344 (bLoadGlyphSet.c)
 *     fs_NewSfnt @ 0x1C00AD08C (fs_NewSfnt.c)
 *     vGetVerticalGSet @ 0x1C0159978 (vGetVerticalGSet.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall bReloadGlyphSet(__int64 *a1, int a2)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // r12d
  __int64 v12; // rax
  int v14; // eax
  ULONG *v15; // rdx
  __int64 v16; // rcx
  PVOID v17; // rax
  void *v18; // rcx
  void *v19; // rcx
  int v20; // [rsp+30h] [rbp-158h]
  __int128 v21; // [rsp+50h] [rbp-138h] BYREF
  int v22[60]; // [rsp+60h] [rbp-128h] BYREF

  v4 = 0;
  v20 = 0;
  if ( a2 != 1 )
  {
    v14 = *((_DWORD *)a1 + 27);
    if ( !v14 )
      goto LABEL_3;
    *((_DWORD *)a1 + 27) = v14 + 1;
    return 1LL;
  }
  v5 = *((_DWORD *)a1 + 26);
  if ( v5 )
  {
    *((_DWORD *)a1 + 26) = v5 + 1;
    return 1LL;
  }
LABEL_3:
  if ( a2 != 1 )
  {
    v15 = (ULONG *)a1[11];
    if ( v15 )
    {
      if ( !*((_DWORD *)a1 + 12) )
      {
        v16 = *a1;
        a1[8] = *(_QWORD *)(v16 + 16);
        *((_DWORD *)a1 + 18) = *(_DWORD *)(v16 + 24);
      }
      v17 = EngAllocMem(0, *v15, 0x64667454u);
      a1[12] = (__int64)v17;
      if ( v17 )
      {
        memmove(v17, (const void *)a1[11], *(unsigned int *)a1[11]);
        vGetVerticalGSet(a1[11], a1);
        *((_DWORD *)a1 + 27) = 1;
      }
      LOBYTE(v4) = a1[12] != 0;
      return v4;
    }
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v6 = *a1;
    a1[8] = *(_QWORD *)(v6 + 16);
    *((_DWORD *)a1 + 18) = *(_DWORD *)(v6 + 24);
    v7 = EngAllocMem(0, 0x538u, 0x64667454u);
    v8 = v7;
    if ( v7 )
    {
      v20 = 1;
      if ( !(unsigned int)fs_OpenFonts(v7, (__int64)v22) )
      {
        v9[1] = v9 + 21;
        v9[2] = 0LL;
        v9[3] = 0LL;
        if ( !(unsigned int)fs_Initialize((__int64)v9, v22) )
        {
          v8[10] = a1[8];
          v8[12] = a1;
          *((_DWORD *)v8 + 22) = 1;
          *((_DWORD *)v8 + 23) = 1;
          *((_WORD *)v8 + 52) = *((_WORD *)a1 + 155);
          *((_WORD *)v8 + 53) = *((_WORD *)a1 + 156);
          if ( !(unsigned int)fs_NewSfnt(v8, v22) )
            goto LABEL_9;
        }
        v9 = v8;
      }
      EngFreeMem(v9);
    }
    return 0LL;
  }
  v8 = (_QWORD *)a1[3];
LABEL_9:
  v10 = a1[8] + *((unsigned int *)a1 + 76);
  v21 = *(_OWORD *)((char *)a1 + 332);
  v11 = 0;
  v12 = (__int64)(a1 + 11);
  if ( a2 != 1 )
    v12 = (__int64)(a1 + 12);
  if ( (unsigned int)bLoadGlyphSet((_DWORD)a1, v10, (_DWORD)v8, (unsigned int)&v21, v12) )
  {
    if ( a2 != 1 )
      vGetVerticalGSet(a1[12], a1);
    v11 = 1;
  }
  if ( v20 )
    EngFreeMem(v8);
  if ( v11 )
  {
    if ( a2 == 1 )
      *((_DWORD *)a1 + 26) = 1;
    else
      *((_DWORD *)a1 + 27) = 1;
  }
  else if ( a2 == 1 )
  {
    v19 = (void *)a1[11];
    if ( v19 )
    {
      EngFreeMem(v19);
      a1[11] = 0LL;
    }
  }
  else
  {
    v18 = (void *)a1[12];
    if ( v18 )
    {
      EngFreeMem(v18);
      a1[12] = 0LL;
    }
  }
  return v11;
}
