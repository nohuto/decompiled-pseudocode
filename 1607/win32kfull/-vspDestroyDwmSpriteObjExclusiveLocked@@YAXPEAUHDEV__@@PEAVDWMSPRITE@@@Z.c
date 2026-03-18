/*
 * XREFs of ?vspDestroyDwmSpriteObjExclusiveLocked@@YAXPEAUHDEV__@@PEAVDWMSPRITE@@@Z @ 0x1C025E1C0
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0065268 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vspDestroyDwmSpriteObjExclusiveLocked(HDEV a1, struct DWMSPRITE *a2)
{
  vspDestroyDwmSpriteObjInternal(a1, 1, a2);
}
