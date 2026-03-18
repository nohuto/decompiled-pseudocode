/*
 * XREFs of ?pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C02704B0
 * Callers:
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0269A38 (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C0269EF0 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 * Callees:
 *     <none>
 */

struct _METASPRITE *__fastcall pSpGetMetaSpriteDelayDelete(const struct _SPRITESTATE *a1, HWND a2, _QWORD *i)
{
  if ( !i && a2 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a1 + 10); i && ((HWND)i[1] != a2 || (*(_DWORD *)i & 0x400) == 0); i = (_QWORD *)i[2] )
      ;
  }
  return (struct _METASPRITE *)i;
}
