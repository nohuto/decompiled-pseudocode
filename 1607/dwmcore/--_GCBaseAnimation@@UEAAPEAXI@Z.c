/*
 * XREFs of ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x18012B680
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseAnimation@@UEAA@XZ @ 0x1800B04AC (--1CBaseAnimation@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CBaseAnimation *__fastcall CBaseAnimation::`scalar deleting destructor'(CBaseAnimation *this, char a2)
{
  CBaseAnimation::~CBaseAnimation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseAnimation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
