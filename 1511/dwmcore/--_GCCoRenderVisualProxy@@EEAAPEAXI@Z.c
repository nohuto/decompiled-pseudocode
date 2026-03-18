/*
 * XREFs of ??_GCCoRenderVisualProxy@@EEAAPEAXI@Z @ 0x18010EDE8
 * Callers:
 *     ??_ECCoRenderVisualProxy@@G7EAAPEAXI@Z @ 0x1800BCD30 (--_ECCoRenderVisualProxy@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

CCoRenderVisualProxy *__fastcall CCoRenderVisualProxy::`scalar deleting destructor'(
        CCoRenderVisualProxy *this,
        char a2)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)this + 3);
  *(_QWORD *)this = &CCoRenderVisualProxy::`vftable'{for `IDWMCoRenderVisualProxy'};
  *((_QWORD *)this + 1) = &CCoRenderVisualProxy::`vftable'{for `CMILCOMBase'};
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 4);
  *((_QWORD *)this + 1) = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCoRenderVisualProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
