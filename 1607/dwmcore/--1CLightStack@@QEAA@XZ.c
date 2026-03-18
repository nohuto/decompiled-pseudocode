/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x18009BC48
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18005BD40 (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18006BF80 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18009BBEC (-Clear@CLightStack@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  __int64 v2; // rcx

  CLightStack::Clear(this);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this);
}
