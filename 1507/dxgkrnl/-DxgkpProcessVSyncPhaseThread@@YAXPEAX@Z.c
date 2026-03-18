/*
 * XREFs of ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C00A8A40
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C0078D50 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkpProcessVSyncPhaseThread(DXGADAPTER *this)
{
  DXGADAPTER *v2; // rcx
  DXGADAPTER *v3; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v5[8]; // [rsp+28h] [rbp-38h] BYREF
  DXGADAPTER *v6; // [rsp+30h] [rbp-30h]
  char v7; // [rsp+38h] [rbp-28h]
  _BYTE v8[8]; // [rsp+40h] [rbp-20h] BYREF
  DXGADAPTER *v9; // [rsp+48h] [rbp-18h]
  char v10; // [rsp+50h] [rbp-10h]

  v6 = this;
  v7 = 0;
  if ( this )
    DXGADAPTER::AcquireReference(this);
  v9 = this;
  v10 = 0;
  if ( this )
    DXGADAPTER::AcquireReference(this);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v4) >= 0 )
    DXGADAPTER::ProcessVSyncPhaseTimer(this);
  DXGADAPTER::ReleaseReference(this);
  _InterlockedExchange((volatile __int32 *)this + 722, 0);
  v2 = v9;
  if ( v9 )
  {
    if ( v10 )
    {
      COREACCESS::Release((COREACCESS *)v8);
      v2 = v9;
    }
    DXGADAPTER::ReleaseReference(v2);
  }
  v3 = v6;
  if ( v6 )
  {
    if ( v7 )
    {
      COREACCESS::Release((COREACCESS *)v5);
      v3 = v6;
    }
    DXGADAPTER::ReleaseReference(v3);
  }
}
