/*
 * XREFs of ??1CAtlasedRectsCommandList@@MEAA@XZ @ 0x1800B39B4
 * Callers:
 *     ??_ECAtlasedRectsCommandList@@MEAAPEAXI@Z @ 0x1800B3970 (--_ECAtlasedRectsCommandList@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsCommandList::~CAtlasedRectsCommandList(CAtlasedRectsCommandList *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CAtlasedRectsCommandList::`vftable';
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
