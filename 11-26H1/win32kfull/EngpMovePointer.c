/*
 * XREFs of EngpMovePointer @ 0x14001AD74
 * Callers:
 *     EngMovePointer @ 0x140344C20 (EngMovePointer.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C868 (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14001C97C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14028DA20 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 */

void __fastcall EngpMovePointer(struct _SURFOBJ *a1, int a2, int a3, __int64 a4, char a5)
{
  HDEV hdev; // rbx
  Gre::Base *v9; // rcx
  struct _RECTL *v10; // r9
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  HSEMAPHORE v12; // rbx
  struct Gre::Base::SESSION_GLOBALS *v13; // rdi
  __int64 v14; // rdi
  struct _RECTL *v15; // r9

  hdev = a1->hdev;
  if ( !(unsigned int)IsDwmActive() )
  {
LABEL_8:
    GdiMovePointer(a1, a2, a3, v10, 0);
    return;
  }
  v11 = Gre::Base::Globals(v9);
  v12 = (HSEMAPHORE)*((_QWORD *)hdev + 7);
  v13 = v11;
  GreAcquireSemaphoreInternal(v12);
  GrepAcquireLockValidate<4>();
  v14 = *(_QWORD *)v13 + 1040LL;
  EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"Sprite", v14);
  GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreSharedStarveExclusiveInternal, v14);
  if ( !(unsigned int)IsDwmActive() )
  {
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v14);
    if ( v12 )
      GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v12);
    goto LABEL_8;
  }
  DwmMovePointer(a1, a2, a3, v15, a5);
  GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v14);
  if ( v12 )
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v12);
}
