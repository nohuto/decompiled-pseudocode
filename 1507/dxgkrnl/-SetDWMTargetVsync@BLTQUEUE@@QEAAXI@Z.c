/*
 * XREFs of ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C00219D8
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C00959C4 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_qqqq @ 0x1C001BE48 (Template_qqqq.c)
 */

void __fastcall BLTQUEUE::SetDWMTargetVsync(BLTQUEUE *this, unsigned int a2)
{
  struct _KEVENT *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  _BYTE v7[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (struct _KTHREAD **)this + 19);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v4 = (struct _KEVENT *)*((_QWORD *)this + 16);
  v9 = 2;
  KeResetEvent(v4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_qqqq(v5, &EventDWMVsyncCountWait, v6, a2, *((_DWORD *)this + 46), 0, 0);
  *((_DWORD *)this + 34) = a2;
  if ( a2 <= *((_DWORD *)this + 46) && a2 )
    KeSetEvent(*((PRKEVENT *)this + 16), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
