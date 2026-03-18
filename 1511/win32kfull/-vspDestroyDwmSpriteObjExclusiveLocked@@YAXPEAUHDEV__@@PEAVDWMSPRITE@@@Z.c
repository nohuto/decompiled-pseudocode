/*
 * XREFs of ?vspDestroyDwmSpriteObjExclusiveLocked@@YAXPEAUHDEV__@@PEAVDWMSPRITE@@@Z @ 0x1C02608C4
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007D810 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vspDestroyDwmSpriteObjExclusiveLocked(HDEV a1, struct DWMSPRITE *a2)
{
  vspDestroyDwmSpriteObjInternal(a1, 1, a2);
}
