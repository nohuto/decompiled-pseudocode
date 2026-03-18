/*
 * XREFs of ?DxgkpProcessPowerPStateWork@@YAXPEAX@Z @ 0x1C0126090
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x1C001A3F4 (-ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkpProcessPowerPStateWork(DXGADAPTER *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _BYTE v4[72]; // [rsp+20h] [rbp-48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v4, this, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v4) >= 0 )
    DXGADAPTER::ProcessPStateTransitionRequest(this, v2, v3);
  DXGADAPTER::ReleaseReference(this);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v4);
}
