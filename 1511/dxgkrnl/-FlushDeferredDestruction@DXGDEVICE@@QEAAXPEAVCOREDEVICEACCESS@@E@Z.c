/*
 * XREFs of ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z @ 0x1C006BC58
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006B970 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C006CFB8 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006D8D0 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C012F574 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C013B664 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::FlushDeferredDestruction(DXGDEVICE *this, PERESOURCE **a2, char a3)
{
  __int64 v6; // rcx
  NTSTATUS v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]

  if ( *((_QWORD *)this + 357) )
  {
    if ( a2 )
    {
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
      {
        v9 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v9 + 24) = 1014LL;
        WdLogEvent5_WdAssertion(v9);
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
    }
    v7 = KeWaitForSingleObject(*((PVOID *)this + 357), Executive, 0, 0, 0LL);
    if ( a3 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)this + 14);
      DXGPUSHLOCK::AcquireExclusive(v12);
      v13 = 2;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    }
    if ( a2 )
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
    if ( v7 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v10 + 24) = 1043LL;
      WdLogEvent5_WdAssertion(v10);
    }
  }
}
