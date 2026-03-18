/*
 * XREFs of ??_ECD3DPixelShader@@MEAAPEAXI@Z @ 0x18017A170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CD3DPixelShader@@MEAA@XZ @ 0x18017A134 (--1CD3DPixelShader@@MEAA@XZ.c)
 */

CD3DPixelShader *__fastcall CD3DPixelShader::`vector deleting destructor'(CD3DPixelShader *this, char a2)
{
  CD3DPixelShader::~CD3DPixelShader(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DPixelShader *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
