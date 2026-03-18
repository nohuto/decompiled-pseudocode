/*
 * XREFs of ??_GCDropShadowContent@@UEAAPEAXI@Z @ 0x1801600A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CDropShadowContent@@UEAA@XZ @ 0x180160060 (--1CDropShadowContent@@UEAA@XZ.c)
 */

struct CResource **__fastcall CDropShadowContent::`scalar deleting destructor'(struct CResource **this, char a2)
{
  CDropShadowContent::~CDropShadowContent(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
