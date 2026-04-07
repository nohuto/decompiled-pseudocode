/*
 * XREFs of ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x18008B3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18001F3D0 (--1CVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x18008B9A0 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 */

CPressTapVisual *__fastcall CPressTapVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx

  *this = (CBaseObject *)&CPressTapVisual::`vftable';
  CPressTapVisual::StopTimer((CPressTapVisual *)this);
  v4 = this[35];
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = this[41];
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = this[42];
  if ( v6 )
    CBaseObject::Release(v6);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CVisual::~CVisual((CVisual *)this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return (CPressTapVisual *)this;
}
