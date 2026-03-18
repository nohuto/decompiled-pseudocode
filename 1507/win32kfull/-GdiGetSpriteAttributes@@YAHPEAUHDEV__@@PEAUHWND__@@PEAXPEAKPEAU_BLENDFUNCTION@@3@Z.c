/*
 * XREFs of ?GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z @ 0x1C026CB90
 * Callers:
 *     GreGetSpriteAttributes @ 0x1C000BC90 (GreGetSpriteAttributes.c)
 * Callees:
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0272F64 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0272FBC (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GdiGetSpriteAttributes(
        HDEV a1,
        HWND a2,
        void *a3,
        unsigned int *a4,
        struct _BLENDFUNCTION *a5,
        unsigned int *a6)
{
  unsigned int v8; // ebx
  const struct _SPRITESTATE *v9; // rcx
  struct _METASPRITE *MetaSprite; // rax
  struct SPRITE *Sprite; // rax
  char v13; // [rsp+30h] [rbp+8h] BYREF
  HDEV v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = a1;
  v8 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v13, (struct PDEVOBJ *)&v14);
  v9 = (const struct _SPRITESTATE *)(v14 + 24);
  if ( *((_DWORD *)v14 + 41) )
  {
    MetaSprite = pSpGetMetaSprite(v9, a2, 0LL);
    if ( !MetaSprite )
      goto LABEL_7;
    Sprite = (struct SPRITE *)*((_QWORD *)MetaSprite + 4);
  }
  else
  {
    Sprite = pSpGetSprite(v9, a2, 0LL);
  }
  if ( Sprite )
  {
    v8 = 1;
    *a4 = *((_DWORD *)Sprite + 58);
    *a5 = *(struct _BLENDFUNCTION *)((char *)Sprite + 228);
    *a6 = *((_DWORD *)Sprite + 56);
  }
LABEL_7:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v13);
  return v8;
}
