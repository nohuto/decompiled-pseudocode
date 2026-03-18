/*
 * XREFs of ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00CF47C
 * Callers:
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C00CF5D4 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00CF6B0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01834D4 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C0183554 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C0184494 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C0184F94 (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::StopVSync(BLTQUEUE *this, int a2)
{
  struct _KTHREAD **v4; // rdx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  if ( (*((_DWORD *)this + 212) & 2) != 0 )
  {
    if ( *((_BYTE *)this + 316) )
    {
      KeCancelTimer((PKTIMER)((char *)this + 472));
      KeFlushQueuedDpcs();
      DXGDODPRESENT::StopHwVSync(*(DXGDODPRESENT **)this);
    }
    else
    {
      if ( a2 )
        v4 = 0LL;
      else
        v4 = (struct _KTHREAD **)((char *)this + 248);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, v4);
      if ( !a2 )
      {
        DXGPUSHLOCK::AcquireExclusive(v6);
        v7 = 2;
      }
      ExCancelTimer(*((_QWORD *)this + 58), 0LL);
      KeFlushQueuedDpcs();
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
    }
    *((_DWORD *)this + 212) &= ~2u;
  }
}
