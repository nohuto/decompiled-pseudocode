/*
 * XREFs of ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x18012CF70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18001A834 (--1CFilterEffect@@MEAA@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x180068428 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 */

CTableTransferEffect *__fastcall CTableTransferEffect::`scalar deleting destructor'(
        CTableTransferEffect *this,
        char a2)
{
  `vector destructor iterator'((char *)this + 216, 40LL, 4, DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTableTransferEffect *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
