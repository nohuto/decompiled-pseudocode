/*
 * XREFs of ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C009D5E0
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00954B4 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0095E84 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009D260 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0148DCC (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C015EEB0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::FlushDeferredDestruction(DXGDEVICE *this, PERESOURCE **a2, char a3, char a4)
{
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+30h] [rbp-38h] BYREF
  DXGPUSHLOCK *v12; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 360) )
  {
    if ( a2 )
    {
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v10 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v10 + 24) = 1034LL;
        WdLogEvent5_WdAssertion(v10);
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
    }
    v14 = -5000000LL;
    do
    {
      v8 = *((_DWORD *)this + 719);
      KeWaitForSingleObject(
        *((PVOID *)this + 360),
        Executive,
        0,
        0,
        (PLARGE_INTEGER)((unsigned __int64)&v14 & -(__int64)(a4 != 0)));
    }
    while ( a4 && v8 != *((_DWORD *)this + 719) );
    if ( a3 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)this + 14);
      DXGPUSHLOCK::AcquireExclusive(v12);
      v13 = 2;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    }
    if ( a2 )
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
  }
}
