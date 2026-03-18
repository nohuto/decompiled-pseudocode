/*
 * XREFs of ??_GCOcclusionInfo@@UEAAPEAXI@Z @ 0x180137D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

COcclusionInfo *__fastcall COcclusionInfo::`scalar deleting destructor'(COcclusionInfo *this, char a2)
{
  *(_QWORD *)this = &COcclusionInfo::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, COcclusionInfo *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
