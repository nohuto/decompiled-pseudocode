/*
 * XREFs of ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ @ 0x1C0067A34
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0067BB4 (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C014E6E0 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007D20 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007DCC (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C1CC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C013A090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGPROCESS::ReleaseVidPnSourceOwners(struct _KTHREAD ***this)
{
  char *v2; // r14
  struct _KTHREAD **v3; // rsi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v5; // rbx
  ADAPTER_DISPLAY **v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v12[64]; // [rsp+40h] [rbp-40h] BYREF

  if ( *this[11] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 1800LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v2 = (char *)(this + 18);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 18, 0LL);
  this[19] = (struct _KTHREAD **)KeGetCurrentThread();
  v3 = this[31];
  v11[0] = this + 31;
  while ( 1 )
  {
    v11[1] = v3;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v11);
    v5 = Current;
    if ( !Current )
      break;
    v6 = (ADAPTER_DISPLAY **)*((_QWORD *)Current + 354);
    if ( v6 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v10, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, (struct DXGADAPTER *const)v6, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12) >= 0 )
      {
        if ( !v6[248] )
        {
          v9 = WdLogNewEntry5_WdAssertion(v7);
          *(_QWORD *)(v9 + 24) = 1836LL;
          WdLogEvent5_WdAssertion(v9);
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v6[248], v5)
          || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v6[248], v5) )
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v12);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds(v5);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
      if ( v10[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v10);
    }
    v3 = (struct _KTHREAD **)*v3;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
