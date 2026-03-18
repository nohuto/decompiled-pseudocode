/*
 * XREFs of ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x180184470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x1801843B8 (--1CScanPipeline@@UEAA@XZ.c)
 */

CScanPipeline *__fastcall CScanPipeline::`scalar deleting destructor'(CScanPipeline *this, char a2)
{
  CScanPipeline::~CScanPipeline(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CScanPipeline *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
