/*
 * XREFs of ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C008AFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003BEC (--1COREACCESS@@QEAA@XZ.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C007A36C (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkpProcessVSyncPhaseThread(DXGADAPTER *this)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v3[8]; // [rsp+28h] [rbp-40h] BYREF
  DXGADAPTER *v4; // [rsp+30h] [rbp-38h]
  char v5; // [rsp+38h] [rbp-30h]
  _BYTE v6[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGADAPTER *v7; // [rsp+48h] [rbp-20h]
  char v8; // [rsp+50h] [rbp-18h]

  v4 = this;
  v5 = 0;
  if ( this )
    DXGADAPTER::AcquireReference(this);
  v7 = this;
  v8 = 0;
  if ( this )
    DXGADAPTER::AcquireReference(this);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v2) >= 0 )
    DXGADAPTER::ProcessVSyncPhaseTimer(this);
  DXGADAPTER::ReleaseReference(this);
  _InterlockedExchange((volatile __int32 *)this + 726, 0);
  COREACCESS::~COREACCESS((COREACCESS *)v6);
  COREACCESS::~COREACCESS((COREACCESS *)v3);
}
