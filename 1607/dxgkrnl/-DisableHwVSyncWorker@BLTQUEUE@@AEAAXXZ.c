/*
 * XREFs of ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01834D4
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00CF6B0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C01842C4 (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00CF47C (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00CF504 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 */

void __fastcall BLTQUEUE::DisableHwVSyncWorker(struct _KTHREAD **this)
{
  bool v2; // zf
  int v3; // edi
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, this + 31);
  DXGPUSHLOCK::AcquireExclusive(v5);
  v2 = *((_BYTE *)this + 316) == 0;
  v6 = 2;
  if ( !v2 )
  {
    v3 = (*((_DWORD *)this + 212) >> 1) & 1;
    if ( v3 )
      BLTQUEUE::StopVSync((BLTQUEUE *)this, 1);
    *((_BYTE *)this + 316) = 0;
    if ( v3 )
      BLTQUEUE::StartVSync((BLTQUEUE *)this, 1);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
}
