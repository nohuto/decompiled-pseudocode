/*
 * XREFs of ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C007A2B8
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0082554 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyDevice @ 0x1C0094C60 (DxgkDestroyDevice.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000973C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceSyncObjects(DXGDEVICE *this)
{
  DXGDEVICESYNCOBJECT **v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    *(_QWORD *)(v7 + 24) = 2062LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v2 = (DXGDEVICESYNCOBJECT **)((char *)this + 336);
  while ( *v2 != (DXGDEVICESYNCOBJECT *)v2 )
  {
    if ( *v2 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(*v2);
  }
}
