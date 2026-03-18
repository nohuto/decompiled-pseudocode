/*
 * XREFs of ?Clear@CLightStack@@QEAAXXZ @ 0x18009BBEC
 * Callers:
 *     ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x18005C2F0 (--0COcclusionContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006BB68 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x18009BC48 (--1CLightStack@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLightStack::Clear(CLightStack *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *((_QWORD *)this + 9) = 0LL;
  }
}
