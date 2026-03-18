/*
 * XREFs of ?Release@CRenderDataBuilder@@UEAAKXZ @ 0x1800B0000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataBuilder::Release(CRenderDataBuilder *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 16);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRenderDataBuilder *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  }
  return v2;
}
