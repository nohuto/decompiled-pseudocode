/*
 * XREFs of ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C000CCD8
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C000E520 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0261F20 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vspRemoveStateReferencesForSprite(struct DWMSPRITE *a1)
{
  struct DWMSPRITE **v2; // rdx
  struct DWMSPRITE **v3; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)a1 + 5) )
  {
    Buffer[0] = *((_QWORD *)a1 + 5);
    Buffer[1] = *(_QWORD *)a1;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
  }
  v2 = (struct DWMSPRITE **)*((_QWORD *)a1 + 3);
  v3 = (struct DWMSPRITE **)*((_QWORD *)a1 + 4);
  if ( v2[1] != (struct DWMSPRITE *)((char *)a1 + 24) || *v3 != (struct DWMSPRITE *)((char *)a1 + 24) )
    __fastfail(3u);
  *v3 = (struct DWMSPRITE *)v2;
  v2[1] = (struct DWMSPRITE *)v3;
}
