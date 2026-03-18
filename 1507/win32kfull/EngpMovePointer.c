/*
 * XREFs of EngpMovePointer @ 0x1C02621C4
 * Callers:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C0040A6C (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     EngMovePointer @ 0x1C0262060 (EngMovePointer.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0260028 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C026D01C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 */

void __fastcall EngpMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4)
{
  HDEV hdev; // rcx
  struct _RECTL *v8; // r9
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  struct _RECTL *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = a4;
  hdev = a1->hdev;
  if ( g_pDwmState )
  {
    v9 = *((_QWORD *)hdev + 9);
    GreAcquireSemaphore(v9);
    v10 = (struct _RECTL *)ghsemSprite;
    GreAcquireSemaphoreSharedStarveExclusiveInternal(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"hsem", ghsemSprite);
    DwmMovePointer(a1, a2, a3, v8, 0);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v10);
    SEMOBJ::vUnlock((SEMOBJ *)&v9);
  }
  else
  {
    GdiMovePointer(a1, a2, a3, a4, 0);
  }
}
