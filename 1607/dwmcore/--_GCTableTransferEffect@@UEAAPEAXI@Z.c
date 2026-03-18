/*
 * XREFs of ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x18014CE30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180014E3C (--1CFilterEffect@@MEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A3238 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CTableTransferEffect *__fastcall CTableTransferEffect::`scalar deleting destructor'(
        CTableTransferEffect *this,
        char a2)
{
  `vector destructor iterator'(
    (char *)this + 296,
    40LL,
    4LL,
    (void (__fastcall *)(char *))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTableTransferEffect *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
