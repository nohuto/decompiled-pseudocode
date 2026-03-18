/*
 * XREFs of ??_GCWARPCallbackRenderer@@EEAAPEAXI@Z @ 0x1801990D8
 * Callers:
 *     ??_ECWARPCallbackRenderer@@G7EAAPEAXI@Z @ 0x1800C2A20 (--_ECWARPCallbackRenderer@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CWARPCallbackRenderer *__fastcall CWARPCallbackRenderer::`scalar deleting destructor'(
        CWARPCallbackRenderer *this,
        char a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  CMILRefCountBase *v6; // rcx

  v2 = 0LL;
  *(_QWORD *)this = &CWARPCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  for ( *((_QWORD *)this + 1) = &CWARPCallbackRenderer::`vftable'{for `CMILRefCountBase'};
        (unsigned int)v2 < *((_DWORD *)this + 22);
        v2 = (unsigned int)(v2 + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v2);
    --*(_DWORD *)(v5 + 16);
    v6 = *(CMILRefCountBase **)(*((_QWORD *)this + 8) + 8 * v2);
    if ( v6 )
      CMILRefCountBase::Release(v6);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 64);
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWARPCallbackRenderer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
