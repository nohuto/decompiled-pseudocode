/*
 * XREFs of ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x180145ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x180145DE8 (--1CScanPipeline@@UEAA@XZ.c)
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
