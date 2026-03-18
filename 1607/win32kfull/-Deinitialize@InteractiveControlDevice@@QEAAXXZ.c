/*
 * XREFs of ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C023CD74
 * Callers:
 *     ??_GInteractiveControlDevice@@QEAAPEAXI@Z @ 0x1C023A944 (--_GInteractiveControlDevice@@QEAAPEAXI@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023D4F0 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C023C8FC (--_GInteractiveControlInput@@QEAAPEAXI@Z.c)
 *     ?CloseHapticsWriteDevice@InteractiveControlDevice@@QEAAJH@Z @ 0x1C023C9DC (-CloseHapticsWriteDevice@InteractiveControlDevice@@QEAAJH@Z.c)
 *     ?DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C023CE9C (-DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C023E1FC (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023E5F0 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 *     ?FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C024056C (-FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

void __fastcall InteractiveControlDevice::Deinitialize(InteractiveControlDevice *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  InteractiveControlInput **v10; // rdi
  InteractiveControlInput *v11; // rsi
  InteractiveControlInput **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8

  InteractiveControlDevice::SetFocus(this, 0LL, *((unsigned int *)this + 27));
  v4 = *((_QWORD *)this + 36);
  if ( v4 )
  {
    Win32FreePool(v4, v2, v3);
    *((_QWORD *)this + 36) = 0LL;
  }
  if ( *((_QWORD *)this + 50) != -1LL )
    InteractiveControlDevice::DestroyDeadzone(this);
  if ( *(_QWORD *)this )
  {
    RawInputManagerDeviceObjectDereference(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  v5 = *((_QWORD *)this + 37);
  if ( v5 )
  {
    Win32FreePool(v5, v2, v3);
    *((_QWORD *)this + 37) = 0LL;
    *((_WORD *)this + 152) = 0;
  }
  InteractiveControlDevice::CloseHapticsWriteDevice(this, 1);
  v8 = *((_QWORD *)this + 37);
  if ( v8 )
  {
    Win32FreePool(v8, v6, v7);
    *((_QWORD *)this + 37) = 0LL;
    *((_WORD *)this + 152) = 0;
  }
  InteractiveControlParser::FreeDeviceCapabilities((InteractiveControlDevice *)((char *)this + 112));
  v10 = (InteractiveControlInput **)((char *)this + 16);
  while ( *v10 != (InteractiveControlInput *)v10 )
  {
    v11 = *v10;
    v12 = *(InteractiveControlInput ***)*v10;
    if ( *((InteractiveControlInput ***)*v10 + 1) != v10 || v12[1] != v11 )
      __fastfail(3u);
    *v10 = (InteractiveControlInput *)v12;
    v12[1] = (InteractiveControlInput *)v10;
    InteractiveControlInput::`scalar deleting destructor'(v11, 0LL, v9);
    Win32FreePool(v11, v13, v14);
    --*((_DWORD *)this + 8);
  }
  HMAssignmentLock((char *)this + 40, 0LL);
  InteractiveControlDevice::SetBackgroundAccessor(this, 0LL, 0);
  *((_DWORD *)this + 2) = 0;
}
