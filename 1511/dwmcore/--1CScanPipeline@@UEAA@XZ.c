/*
 * XREFs of ??1CScanPipeline@@UEAA@XZ @ 0x180153FC8
 * Callers:
 *     ??1CFormatConverter@@UEAA@XZ @ 0x180153F0C (--1CFormatConverter@@UEAA@XZ.c)
 *     ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x1801540B0 (--_GCScanPipeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CScanPipeline::~CScanPipeline(CScanPipeline *this)
{
  WPF::ProcessHeapImpl *v1; // rdi

  v1 = WPF::g_pProcessHeap;
  *(_QWORD *)this = &CScanPipeline::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)v1 + 32LL))(v1, *((_QWORD *)this + 80));
  *((_QWORD *)this + 80) = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 74);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 67);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 1);
}
