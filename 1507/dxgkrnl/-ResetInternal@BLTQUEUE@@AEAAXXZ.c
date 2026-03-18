/*
 * XREFs of ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C015A818
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00D24E0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015A850 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C0159950 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C015B62C (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 */

void __fastcall BLTQUEUE::ResetInternal(BLTQUEUE *this)
{
  BLTQUEUE::DiscardPendingPresent(this);
  BLTQUEUE::StopVSync(this, 0);
  if ( (*((_DWORD *)this + 162) & 1) != 0 )
  {
    KeDetachProcess();
    *((_DWORD *)this + 162) &= ~1u;
  }
}
