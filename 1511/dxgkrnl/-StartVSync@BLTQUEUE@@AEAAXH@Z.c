/*
 * XREFs of ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C015F7A8
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00E51EC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015DBF0 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015FBB0 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C015F710 (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::StartVSync(PKTIMER *this, int a2)
{
  __int64 v4; // rdi
  bool v5; // zf
  struct _KTHREAD **v6; // rdx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  if ( ((_DWORD)this[84] & 2) == 0 )
  {
    v4 = 0LL;
    if ( *((_BYTE *)this + 220) )
    {
      KeSetTimerEx(this[41], (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_1C004716C), 0, 0LL);
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
    *((_DWORD *)this + 168) |= 2u;
  }
}
