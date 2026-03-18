/*
 * XREFs of ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x1801730D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DTexture@@MEAA@XZ @ 0x180081578 (--1CD3DTexture@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD3DTexture *__fastcall CD3DTexture::`scalar deleting destructor'(CD3DTexture *this, char a2)
{
  CD3DTexture::~CD3DTexture(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DTexture *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
