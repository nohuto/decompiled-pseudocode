/*
 * XREFs of ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00CF504
 * Callers:
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C00CF16C (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C00CF5D4 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00CF6B0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01834D4 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C0184EFC (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::StartVSync(BLTQUEUE *this, int a2)
{
  int v2; // eax
  __int64 v5; // rdi
  bool v6; // zf
  struct _KTHREAD **v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v2 = *((_DWORD *)this + 212);
  if ( (v2 & 8) != 0 && (v2 & 2) == 0 )
  {
    v5 = 0LL;
    if ( *((_BYTE *)this + 316) )
    {
      KeSetTimerEx((PKTIMER)((char *)this + 472), (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_1C005736C), 0, 0LL);
      DXGDODPRESENT::StartHwVSync(*(DXGDODPRESENT **)this);
    }
    else
    {
      v6 = a2 == 0;
      v7 = 0LL;
      if ( v6 )
        v7 = (struct _KTHREAD **)((char *)this + 248);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v8, v7);
      if ( !a2 )
      {
        DXGPUSHLOCK::AcquireExclusive(v9);
        v10 = 2;
      }
      if ( !*((_BYTE *)this + 317) )
        v5 = (unsigned int)(10000000 * *((_DWORD *)this + 53)) / *((_DWORD *)this + 52);
      ExSetTimer(
        *((_QWORD *)this + 58),
        -10000000LL * *((unsigned int *)this + 53) / *((unsigned int *)this + 52),
        v5,
        0LL,
        v8,
        v9);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v8);
    }
    *((_DWORD *)this + 212) |= 2u;
  }
}
