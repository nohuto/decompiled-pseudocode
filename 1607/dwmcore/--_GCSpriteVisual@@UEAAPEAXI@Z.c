/*
 * XREFs of ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x180138E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x180138E18 (--1CSpriteVisual@@UEAA@XZ.c)
 */

struct CResource **__fastcall CSpriteVisual::`scalar deleting destructor'(struct CResource **this, char a2)
{
  CSpriteVisual::~CSpriteVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
