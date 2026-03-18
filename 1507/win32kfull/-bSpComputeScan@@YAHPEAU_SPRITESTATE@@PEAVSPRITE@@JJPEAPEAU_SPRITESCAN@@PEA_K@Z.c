/*
 * XREFs of ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1C00F5D3C
 * Callers:
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F5B88 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 * Callees:
 *     ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1C00F5E28 (-pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall bSpComputeScan(
        struct _SPRITESTATE *a1,
        struct SPRITE *a2,
        int a3,
        int a4,
        struct _SPRITESCAN **a5,
        unsigned __int64 *a6)
{
  int v6; // ebx
  int v8; // ebp
  struct _SPRITESCAN **v10; // r13
  int v11; // r15d
  struct _SPRITESCAN *v12; // r10
  __int64 v13; // rax
  struct _SPRITERANGE *v14; // rax
  struct _SPRITESCAN **v15; // rdx
  int v16; // esi
  struct SPRITE *v17; // rdi
  struct _SPRITESCAN *v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 result; // rax
  int v21; // ecx
  struct _SPRITERANGE *v22; // rcx
  struct _SPRITESCAN *v23; // [rsp+50h] [rbp+8h] BYREF

  v6 = *((_DWORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 12);
  v10 = a5;
  v11 = v6;
  v13 = *a6;
  v23 = *a5;
  v12 = v23;
  *(_DWORD *)v23 = a3;
  *((_DWORD *)v12 + 1) = a4;
  *((_QWORD *)v12 + 2) = v13;
  v14 = (struct _SPRITESCAN *)((char *)v12 + 24);
  v15 = (struct _SPRITESCAN **)(*((_QWORD *)a1 + 19) - 56LL);
  a5 = v15;
  while ( 1 )
  {
    v16 = 0;
    v17 = a2;
    if ( a2 )
    {
      do
      {
        v21 = *((_DWORD *)v17 + 20);
        if ( v21 > v8 )
        {
          if ( v21 <= v6 )
            v6 = *((_DWORD *)v17 + 20);
        }
        else if ( *((_DWORD *)v17 + 22) > v8 )
        {
          ++v16;
          if ( v14 >= (struct _SPRITERANGE *)v15 )
          {
            v14 = pSpGrowRanges(a1, v14, &v23, (struct _SPRITERANGE **)&a5);
            if ( !v14 )
              return 0LL;
            v15 = a5;
          }
          *((_QWORD *)v14 + 1) = v17;
          v14 = (struct _SPRITERANGE *)((char *)v14 + 16);
          if ( *((_DWORD *)v17 + 22) <= v6 )
            v6 = *((_DWORD *)v17 + 22);
        }
        v17 = (struct SPRITE *)*((_QWORD *)v17 + 7);
      }
      while ( v17 );
      if ( v16 )
      {
        v22 = v14;
        do
        {
          v22 = (struct _SPRITERANGE *)((char *)v22 - 16);
          *(_DWORD *)v22 = v8;
          *((_DWORD *)v22 + 1) = v6;
          --v16;
        }
        while ( v16 );
        goto LABEL_5;
      }
    }
    if ( v14 >= (struct _SPRITERANGE *)v15 )
      break;
LABEL_4:
    *((_QWORD *)v14 + 1) = 0LL;
    *(_DWORD *)v14 = v8;
    *((_DWORD *)v14 + 1) = v6;
    v14 = (struct _SPRITERANGE *)((char *)v14 + 16);
LABEL_5:
    v8 = v6;
    v6 = v11;
    if ( v8 >= v11 )
    {
      v18 = v23;
      v19 = v14 - v23;
      *v10 = v14;
      result = 1LL;
      *((_QWORD *)v18 + 1) = v19;
      *a6 = v19;
      return result;
    }
  }
  v14 = pSpGrowRanges(a1, v14, &v23, (struct _SPRITERANGE **)&a5);
  if ( v14 )
  {
    v15 = a5;
    goto LABEL_4;
  }
  return 0LL;
}
