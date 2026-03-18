/*
 * XREFs of ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C006D594
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006B970 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyDevice @ 0x1C008B4D0 (DxgkDestroyDevice.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C00035F4 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceSyncObjects(DXGDEVICE *this)
{
  DXGDEVICESYNCOBJECT **v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v4 + 24) = 2062LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v2 = (DXGDEVICESYNCOBJECT **)((char *)this + 336);
  while ( *v2 != (DXGDEVICESYNCOBJECT *)v2 )
  {
    if ( *v2 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(*v2);
  }
}
