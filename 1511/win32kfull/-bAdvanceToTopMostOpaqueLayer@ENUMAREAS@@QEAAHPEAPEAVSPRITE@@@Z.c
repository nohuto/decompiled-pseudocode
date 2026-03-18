/*
 * XREFs of ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C026E27C
 * Callers:
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02763E4 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02768F4 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENUMAREAS::bAdvanceToTopMostOpaqueLayer(ENUMAREAS *this, struct SPRITE **a2)
{
  unsigned int v3; // r9d
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  __int64 result; // rax

  v3 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + *((_QWORD *)this + 8) - 16LL;
  v7 = *((_QWORD *)this + 9);
  if ( gpto )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      if ( (*(_DWORD *)v8 & 8) != 0 )
      {
        v9 = *(_DWORD **)(v8 + 184);
        if ( !v9
          || v9[20] <= 0xA0u
          && v9[22] <= *(_DWORD *)v7
          && v9[24] >= *(_DWORD *)(v7 + 4)
          && v9[23] <= *((_DWORD *)this + 9)
          && v9[25] >= *((_DWORD *)this + 10) )
        {
          v5 = v7;
        }
      }
      if ( v7 >= v6 || *(_DWORD *)(v7 + 16) != *(_DWORD *)v7 )
        break;
      v7 += 16LL;
    }
  }
  if ( v5 && *a2 != *(struct SPRITE **)(v5 + 8) )
  {
    *((_QWORD *)this + 9) = v5;
    v3 = 1;
  }
  result = v3;
  *a2 = *(struct SPRITE **)(*((_QWORD *)this + 9) + 8LL);
  return result;
}
