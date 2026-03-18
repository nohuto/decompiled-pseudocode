/*
 * XREFs of ?bSpSpriteOnTopOfWndObjInZ@@YAHPEAVSPRITE@@PEAVEWNDOBJ@@@Z @ 0x1C026FBCC
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0279348 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bSpSpriteOnTopOfWndObjInZ(struct SPRITE *a1, struct EWNDOBJ *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r8
  bool v5; // zf

  v2 = *((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 9) )
    return 0LL;
  v3 = *(_QWORD *)(v2 + 16);
  v4 = *(_QWORD *)(v2 + 1096);
  v5 = v3 == v4;
  if ( v3 != v4 )
  {
    do
    {
      if ( *(_QWORD *)(v3 + 72) == *((_QWORD *)a2 + 22) )
        break;
      v3 = *(_QWORD *)(v3 + 24);
    }
    while ( v3 != v4 );
    v5 = v3 == v4;
  }
  if ( v5 )
    v3 = 0LL;
  return !v3 || *((_DWORD *)a1 + 16) > *(_DWORD *)(v3 + 64);
}
