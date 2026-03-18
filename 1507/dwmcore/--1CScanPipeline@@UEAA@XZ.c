/*
 * XREFs of ??1CScanPipeline@@UEAA@XZ @ 0x180145DE8
 * Callers:
 *     ??1CFormatConverter@@UEAA@XZ @ 0x180145D2C (--1CFormatConverter@@UEAA@XZ.c)
 *     ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x180145ED0 (--_GCScanPipeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
