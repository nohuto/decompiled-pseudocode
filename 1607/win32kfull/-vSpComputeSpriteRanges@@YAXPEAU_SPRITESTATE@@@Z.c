/*
 * XREFs of ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011C818
 * Callers:
 *     ?vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C004A7EC (-vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011BBB0 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011C4C8 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0278404 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 * Callees:
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C011C8F4 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1C011C9CC (-bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall vSpComputeSpriteRanges(struct _SPRITESTATE *a1)
{
  struct _SPRITESCAN *v2; // rax
  __int64 v3; // rsi
  int v4; // ebx
  int v5; // r14d
  int v6; // edx
  __int64 v7; // rdi
  _BYTE *v8; // rcx
  int v9; // eax
  _BYTE *v10; // rcx
  _BYTE *v11; // r8
  bool v12; // cc
  unsigned __int64 v13; // [rsp+30h] [rbp-148h] BYREF
  struct _SPRITESCAN *v14; // [rsp+38h] [rbp-140h] BYREF
  _BYTE v15[56]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v16; // [rsp+78h] [rbp-100h]

  v13 = 0LL;
  v2 = (struct _SPRITESCAN *)*((_QWORD *)a1 + 18);
  v3 = 0LL;
  v4 = *((_DWORD *)a1 + 15);
  v5 = v4;
  v6 = *((_DWORD *)a1 + 13);
  v7 = *((_QWORD *)a1 + 4);
  v16 = 0LL;
  v14 = v2;
  while ( v7 && *(_DWORD *)(v7 + 92) <= v6 )
    v7 = *(_QWORD *)(v7 + 40);
  while ( 1 )
  {
    v8 = v15;
    if ( v3 )
    {
      do
      {
        v9 = *(_DWORD *)(v3 + 92);
        if ( v9 == v6 )
        {
          *((_QWORD *)v8 + 7) = *(_QWORD *)(v3 + 56);
        }
        else
        {
          v8 = (_BYTE *)v3;
          if ( v9 <= v4 )
            v4 = *(_DWORD *)(v3 + 92);
        }
        v3 = *((_QWORD *)v8 + 7);
      }
      while ( v3 );
      v3 = v16;
    }
    if ( v7 )
    {
      while ( *(_DWORD *)(v7 + 84) == v6 )
      {
        v10 = v15;
        do
        {
          v11 = v10;
          v10 = (_BYTE *)*((_QWORD *)v10 + 7);
        }
        while ( v10 && *((_DWORD *)v10 + 16) < *(_DWORD *)(v7 + 64) );
        *((_QWORD *)v11 + 7) = v7;
        v12 = *(_DWORD *)(v7 + 92) <= v4;
        *(_QWORD *)(v7 + 56) = v10;
        if ( v12 )
          v4 = *(_DWORD *)(v7 + 92);
        v7 = *(_QWORD *)(v7 + 40);
        if ( !v7 )
          goto LABEL_27;
      }
      if ( *(_DWORD *)(v7 + 84) <= v4 )
        v4 = *(_DWORD *)(v7 + 84);
LABEL_27:
      v3 = v16;
    }
    if ( !(unsigned int)bSpComputeScan(a1, (struct SPRITE *)v3, v6, v4, &v14, &v13) )
      break;
    v6 = v4;
    v4 = v5;
    if ( v6 >= v5 )
    {
      *((_DWORD *)a1 + 31) = 1;
      vSpComputeUncoveredRegion(a1, 1);
      return;
    }
  }
}
