/*
 * XREFs of ??1CScanPipeline@@UEAA@XZ @ 0x1801843B8
 * Callers:
 *     ??1CFormatConverter@@UEAA@XZ @ 0x180184324 (--1CFormatConverter@@UEAA@XZ.c)
 *     ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x180184470 (--_GCScanPipeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScanPipeline::~CScanPipeline(CScanPipeline *this)
{
  *(_QWORD *)this = &CScanPipeline::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 80));
  *((_QWORD *)this + 80) = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 592);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 536);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 8);
}
