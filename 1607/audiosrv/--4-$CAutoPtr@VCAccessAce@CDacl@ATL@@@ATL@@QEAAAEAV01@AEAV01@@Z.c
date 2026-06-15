/*
 * XREFs of ??4?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z @ 0x18002D190
 * Callers:
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x18002CE70 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void (__fastcall ****__fastcall ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(
        void (__fastcall ****a1)(_QWORD, __int64),
        _QWORD *a2))(_QWORD, __int64)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rax

  v4 = *a1;
  if ( v4 == (void (__fastcall ***)(_QWORD, __int64))*a2 )
  {
    if ( a1 != a2 )
      *a2 = 0LL;
  }
  else
  {
    if ( v4 )
      (**v4)(v4, 1LL);
    *a1 = 0LL;
    v5 = (void (__fastcall ***)(_QWORD, __int64))*a2;
    *a2 = 0LL;
    *a1 = v5;
  }
  return a1;
}
