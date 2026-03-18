/*
 * XREFs of ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ @ 0x1C0084BFC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C014A420 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00067E0 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0006888 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0009A4C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C0135970 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGPROCESS::ReleaseVidPnSourceOwners(DXGPROCESS *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdx
  char *v6; // r14
  _QWORD *v7; // rsi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v9; // rbx
  ADAPTER_DISPLAY **v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD v17[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v19[64]; // [rsp+40h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 11) + 8LL) != CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, CurrentThread, a3, a4);
    *(_QWORD *)(v15 + 24) = 1675LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v6 = (char *)this + 144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
  *((_QWORD *)this + 19) = KeGetCurrentThread();
  v7 = (_QWORD *)*((_QWORD *)this + 31);
  v18[0] = (char *)this + 248;
  while ( 1 )
  {
    v18[1] = v7;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v18);
    v9 = Current;
    if ( !Current )
      break;
    v10 = (ADAPTER_DISPLAY **)*((_QWORD *)Current + 2338);
    if ( v10 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, (struct DXGADAPTER *const)v10, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19) >= 0 )
      {
        if ( !v10[247] )
        {
          v16 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
          *(_QWORD *)(v16 + 24) = 1711LL;
          WdLogEvent5_WdAssertion(v16);
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v10[247], v9)
          || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v10[247], v9) )
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v19);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds(v9);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
      if ( v17[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
    }
    v7 = (_QWORD *)*v7;
  }
  *((_QWORD *)v6 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
}
