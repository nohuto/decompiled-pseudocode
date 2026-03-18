/*
 * XREFs of ??1CDrawListEntry@@MEAA@XZ @ 0x18010F6B8
 * Callers:
 *     ??1CWARPDrawListEntry@@EEAA@XZ @ 0x180137270 (--1CWARPDrawListEntry@@EEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntry::~CDrawListEntry(CDrawListEntry *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
