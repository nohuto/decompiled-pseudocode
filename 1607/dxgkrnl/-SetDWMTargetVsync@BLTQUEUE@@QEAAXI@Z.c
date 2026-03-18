/*
 * XREFs of ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C00283E8
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0085380 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_qqqq @ 0x1C001F0F0 (Template_qqqq.c)
 */

void __fastcall BLTQUEUE::SetDWMTargetVsync(BLTQUEUE *this, unsigned int a2)
{
  struct _KEVENT *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  _BYTE v7[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (struct _KTHREAD **)this + 31);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v4 = (struct _KEVENT *)*((_QWORD *)this + 28);
  v9 = 2;
  KeResetEvent(v4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_qqqq(v5, &EventDWMVsyncCountWait, v6, a2, *((_DWORD *)this + 70), 0, 0);
  *((_DWORD *)this + 58) = a2;
  if ( a2 <= *((_DWORD *)this + 70) && a2 )
    KeSetEvent(*((PRKEVENT *)this + 28), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
