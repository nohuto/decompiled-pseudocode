/*
 * XREFs of ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C023BA48
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EC928 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023B6F8 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??_GInteractiveControlDevice@@QEAAPEAXI@Z @ 0x1C023A944 (--_GInteractiveControlDevice@@QEAAPEAXI@Z.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C023ABC4 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 */

__int64 __fastcall InteractiveControlManager::RemoveDevice(InteractiveControlManager *this, void **a2)
{
  int Device; // esi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  Device = InteractiveControlManager::FindDevice(this, 0, *a2, 0LL, &v8);
  if ( Device >= 0 )
  {
    v4 = v8;
    InteractiveControlDevice::`scalar deleting destructor'(*((InteractiveControlDevice **)this + v8 + 5));
    Win32FreePool(*((_QWORD *)this + v4 + 5), v5, v6);
    *((_QWORD *)this + v4 + 5) = 0LL;
    --*((_DWORD *)this + 20);
  }
  return (unsigned int)Device;
}
