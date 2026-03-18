/*
 * XREFs of ??_GCCoRenderVisualProxy@@EEAAPEAXI@Z @ 0x180125430
 * Callers:
 *     ??_ECCoRenderVisualProxy@@G7EAAPEAXI@Z @ 0x1800BFB10 (--_ECCoRenderVisualProxy@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CCoRenderVisualProxy *__fastcall CCoRenderVisualProxy::`scalar deleting destructor'(
        CCoRenderVisualProxy *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CCoRenderVisualProxy::`vftable'{for `IDWMCoRenderVisualProxy'};
  *((_QWORD *)this + 1) = &CCoRenderVisualProxy::`vftable'{for `CMILCOMBase'};
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 32);
  *((_QWORD *)this + 1) = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCoRenderVisualProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
