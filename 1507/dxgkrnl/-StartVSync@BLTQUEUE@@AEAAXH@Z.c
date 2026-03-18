/*
 * XREFs of ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C015B4B4
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00D24E0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01598D0 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015B8BC (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C015B41C (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::StartVSync(PKTIMER *this, int a2)
{
  __int64 v4; // rdi
  bool v5; // zf
  struct _KTHREAD **v6; // rdx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  if ( ((_DWORD)this[81] & 2) == 0 )
  {
    v4 = 0LL;
    if ( *((_BYTE *)this + 220) )
    {
      KeSetTimerEx(this[41], (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_1C00470EC), 0, 0LL);
      DXGDODPRESENT::StartHwVSync((struct _KTHREAD **)*this);
    }
    else
    {
      v5 = a2 == 0;
      v6 = 0LL;
      if ( v5 )
        v6 = (struct _KTHREAD **)(this + 19);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, v6);
      if ( !a2 )
      {
        DXGPUSHLOCK::AcquireExclusive(v8);
        v9 = 2;
      }
      if ( !*((_BYTE *)this + 221) )
        v4 = (unsigned int)(10000000 * *((_DWORD *)this + 29)) / *((_DWORD *)this + 28);
      ExSetTimer(this[40], -10000000LL * *((unsigned int *)this + 29) / *((unsigned int *)this + 28), v4, 0LL);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
    }
    *((_DWORD *)this + 162) |= 2u;
  }
}
