/*
 * XREFs of GreDisableMirrorRendering @ 0x14028B728
 * Callers:
 *     NtUserSetMirrorRendering @ 0x140216990 (NtUserSetMirrorRendering.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x14009C768 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x140255B38 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x140316840 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall GreDisableMirrorRendering(Gre::Base *a1, HWND a2)
{
  unsigned int v3; // edi
  HSEMAPHORE v4; // r15
  Gre::Base *v5; // rsi
  const struct _SPRITESTATE *v6; // rcx
  struct _METASPRITE *MetaSprite; // rax
  unsigned int v8; // r9d
  struct _METASPRITE *v9; // r14
  __int64 v10; // r12
  __int64 v11; // rax
  struct SPRITE *Sprite; // rbx
  Gre::Base *v14; // [rsp+50h] [rbp+8h] BYREF
  char v15; // [rsp+60h] [rbp+18h] BYREF

  v14 = a1;
  v3 = 0;
  v4 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 1144LL);
  GreAcquireSemaphoreInternal(v4);
  GrepAcquireLockValidate<2>();
  if ( v14 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v15, (struct PDEVOBJ *)&v14);
    v5 = v14;
    v6 = (Gre::Base *)((char *)v14 + 80);
    if ( *((_DWORD *)v14 + 35) )
    {
      MetaSprite = pSpGetMetaSprite(v6, a2, 0LL, 0);
      v9 = MetaSprite;
      if ( MetaSprite )
      {
        *((_DWORD *)MetaSprite + 4) |= 0x100u;
        v3 = v8 + 1;
        v10 = 0LL;
        if ( *((_DWORD *)v5 + 35) > v8 )
        {
          do
          {
            vSpCreateExMirror(*(HDEV *)(*((_QWORD *)v5 + 18) + 8 * v10));
            **((_DWORD **)v9 + v10 + 3) |= 0x100u;
            v11 = *((_QWORD *)v9 + v10 + 3);
            v10 = v3 + (unsigned int)v10;
            *(_DWORD *)(v11 + 224) |= 0x10000000u;
          }
          while ( (unsigned int)v10 < *((_DWORD *)v5 + 35) );
        }
      }
    }
    else
    {
      Sprite = pSpGetSprite(v6, a2, 0LL);
      if ( Sprite )
      {
        vSpCreateExMirror(*((HDEV *)v5 + 10));
        *(_DWORD *)Sprite |= 0x100u;
        v3 = 1;
        *((_DWORD *)Sprite + 56) |= 0x10000000u;
      }
    }
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v15);
  }
  if ( v4 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      (__int64)v4);
  return v3;
}
