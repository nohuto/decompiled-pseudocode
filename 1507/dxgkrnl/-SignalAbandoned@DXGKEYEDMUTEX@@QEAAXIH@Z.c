/*
 * XREFs of ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C014D408
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C001FBC4 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x1C001FC98 (--1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C005B6FC (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGKEYEDMUTEX::SignalAbandoned(DXGKEYEDMUTEX *this, unsigned int a2)
{
  __int64 v2; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  struct DXGKEYEDMUTEX *v8; // [rsp+30h] [rbp+8h] BYREF
  DXGKEYEDMUTEX *v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = this;
  v2 = a2;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v9, v2, Current, &v8);
  if ( v8 )
  {
    DXGKEYEDMUTEX::SignalAbandonedInternal(v8, v2, 0);
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(0LL, v4, v5, v6);
    *(_QWORD *)(v7 + 24) = v2;
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v7);
  }
  DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE(&v9);
}
