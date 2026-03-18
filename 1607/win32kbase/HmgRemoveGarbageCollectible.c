/*
 * XREFs of HmgRemoveGarbageCollectible @ 0x1C00C0C48
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0027064 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00C04FC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

struct OBJECT *__fastcall HmgRemoveGarbageCollectible(struct HOBJ__ *a1, char a2, unsigned int *a3)
{
  return HmgRemoveObjectImpl(a1, 0, 1, 2, a2, a3);
}
