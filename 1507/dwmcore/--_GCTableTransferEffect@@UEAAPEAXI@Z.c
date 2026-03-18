/*
 * XREFs of ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x180113CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180002C8C (--1CFilterEffect@@MEAA@XZ.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x180051E24 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CTableTransferEffect *__fastcall CTableTransferEffect::`scalar deleting destructor'(
        CTableTransferEffect *this,
        char a2)
{
  `vector destructor iterator'(
    (char *)this + 200,
    40LL,
    4,
    (void (__fastcall *)(char *))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTableTransferEffect *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
