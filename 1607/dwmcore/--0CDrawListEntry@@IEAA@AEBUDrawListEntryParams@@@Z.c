/*
 * XREFs of ??0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z @ 0x18010F6F0
 * Callers:
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPAlphaBltParameters@@@Z @ 0x180136F18 (--0CWARPDrawListEntry@@AEAA@AEBUWARPAlphaBltParameters@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDrawListEntry *__fastcall CDrawListEntry::CDrawListEntry(CDrawListEntry *this, const struct DrawListEntryParams *a2)
{
  __int64 v3; // rcx

  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 5) = *(_DWORD *)a2;
  v3 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 3) = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return this;
}
