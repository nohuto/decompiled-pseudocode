/*
 * XREFs of ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C023E1FC
 * Callers:
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C0123DF0 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C023A968 (-ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023B484 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C023CD74 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractiveControlDevice::SetBackgroundAccessor(
        InteractiveControlDevice *this,
        struct tagWND *a2,
        int a3)
{
  struct tagWND **v5; // rcx

  v5 = (struct tagWND **)((char *)this + 48);
  if ( *v5 == a2 )
  {
    *((_DWORD *)this + 14) |= a3;
  }
  else
  {
    HMAssignmentLock(v5, a2);
    *((_DWORD *)this + 14) = a3;
  }
}
