/*
 * XREFs of ??_ECD3DLockableTexture@@MEAAPEAXI@Z @ 0x18017D990
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DTexture@@MEAA@XZ @ 0x180081578 (--1CD3DTexture@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD3DLockableTexture *__fastcall CD3DLockableTexture::`vector deleting destructor'(CD3DLockableTexture *this, char a2)
{
  *(_QWORD *)this = &CD3DLockableTexture::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CD3DLockableTexture::`vftable'{for `IDeviceResource'};
  CD3DTexture::~CD3DTexture(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DLockableTexture *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
