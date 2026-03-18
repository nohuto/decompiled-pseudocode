/*
 * XREFs of ??_GCDropShadow@@UEAAPEAXI@Z @ 0x18014EE70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x18014ED34 (--1CDropShadow@@UEAA@XZ.c)
 */

struct CResource **__fastcall CDropShadow::`scalar deleting destructor'(struct CResource **this, char a2)
{
  CDropShadow::~CDropShadow(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
