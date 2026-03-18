/*
 * XREFs of ??_GCWARPCallbackRenderer@@EEAAPEAXI@Z @ 0x180166250
 * Callers:
 *     ??_ECWARPCallbackRenderer@@G7EAAPEAXI@Z @ 0x1800BF5F0 (--_ECWARPCallbackRenderer@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

CWARPCallbackRenderer *__fastcall CWARPCallbackRenderer::`scalar deleting destructor'(
        CWARPCallbackRenderer *this,
        char a2)
{
  __int64 v2; // rbx
  CMILRefCountBase *v5; // rcx

  v2 = 0LL;
  *(_QWORD *)this = &CWARPCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  for ( *((_QWORD *)this + 1) = &CWARPCallbackRenderer::`vftable'{for `CMILRefCountBase'};
        (unsigned int)v2 < *((_DWORD *)this + 22);
        v2 = (unsigned int)(v2 + 1) )
  {
    v5 = *(CMILRefCountBase **)(*((_QWORD *)this + 8) + 8 * v2);
    if ( v5 )
      CMILRefCountBase::Release(v5);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 8);
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWARPCallbackRenderer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
