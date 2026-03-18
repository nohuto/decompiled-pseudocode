/*
 * XREFs of ??_GCD2DEffect@@MEAAPEAXI@Z @ 0x180021420
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DEffect@@MEAA@XZ @ 0x180021464 (--1CD2DEffect@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD2DEffect *__fastcall CD2DEffect::`scalar deleting destructor'(CD2DEffect *this, char a2)
{
  CD2DEffect::~CD2DEffect(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD2DEffect *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
