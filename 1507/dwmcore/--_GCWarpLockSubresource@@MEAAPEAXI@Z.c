/*
 * XREFs of ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x18013F4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x18013F430 (--1CWarpLockSubresource@@MEAA@XZ.c)
 */

CWarpLockSubresource *__fastcall CWarpLockSubresource::`scalar deleting destructor'(
        CWarpLockSubresource *this,
        char a2)
{
  CWarpLockSubresource::~CWarpLockSubresource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWarpLockSubresource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
