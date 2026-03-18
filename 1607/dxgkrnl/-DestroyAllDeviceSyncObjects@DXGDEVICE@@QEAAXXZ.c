/*
 * XREFs of ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C0095BD4
 * Callers:
 *     DxgkDestroyDevice @ 0x1C00786C0 (DxgkDestroyDevice.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009D260 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0006F8C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceSyncObjects(DXGDEVICE *this)
{
  __int64 v2; // rcx
  DXGDEVICESYNCOBJECT **v3; // rbx
  __int64 v4; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 2182LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v3 = (DXGDEVICESYNCOBJECT **)((char *)this + 360);
  while ( *v3 != (DXGDEVICESYNCOBJECT *)v3 )
  {
    if ( *v3 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(*v3);
  }
}
