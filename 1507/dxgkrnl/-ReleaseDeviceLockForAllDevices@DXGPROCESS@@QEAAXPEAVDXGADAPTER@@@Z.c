/*
 * XREFs of ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0149E34
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0078920 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C0131390 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0009A4C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall DXGPROCESS::ReleaseDeviceLockForAllDevices(
        struct _KTHREAD **this,
        struct DXGADAPTER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  char *v7; // rax
  struct _KTHREAD *v8; // rbx
  __int64 Current; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( this[19] != KeGetCurrentThread() && this[21] != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 1651LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (char *)(this + 31);
  v8 = this[31];
  v10[0] = v7;
  while ( 1 )
  {
    v10[1] = v8;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v10);
    if ( !Current )
      break;
    if ( *(struct DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL) == a2 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(Current + 80));
      KeLeaveCriticalRegion();
    }
    v8 = *(struct _KTHREAD **)v8;
  }
}
