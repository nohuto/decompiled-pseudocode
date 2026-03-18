/*
 * XREFs of ?PresentDisplayOnlySetProgress@BLTQUEUE@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C00218D0
 * Callers:
 *     ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C0021928 (-PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE::PresentDisplayOnlySetProgress(
        struct _KEVENT *this,
        const struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS *a2)
{
  if ( LODWORD(this[17].Header.WaitListHead.Blink) )
  {
    if ( a2->ProgressId == DXGK_PRESENT_DISPLAYONLY_PROGRESS_ID_FAILED )
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)&this->Header.Lock + 132LL), 0x40000000u);
    if ( KeGetCurrentIrql() > 2u )
      KeInsertQueueDpc((PRKDPC)&this[15], 0LL, 0LL);
    else
      KeSetEvent(this + 14, 0, 0);
  }
}
