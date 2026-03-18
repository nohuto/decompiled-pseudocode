/*
 * XREFs of ??1VIDMM_PAGING_HISTORY_ENTRY@@QEAA@XZ @ 0x1C001D810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_PAGING_HISTORY_ENTRY::~VIDMM_PAGING_HISTORY_ENTRY(VIDMM_PAGING_HISTORY_ENTRY *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 2);
  if ( v1 )
    operator delete(v1);
}
