/*
 * XREFs of ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C00062C0
 * Callers:
 *     ??_GDMMVIDPNPRESENTPATH@@UEAAPEAXI@Z @ 0x1C0006290 (--_GDMMVIDPNPRESENTPATH@@UEAAPEAXI@Z.c)
 *     ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C009A510 (-AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAP.c)
 *     ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017B650 (-AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEB.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH(DMMVIDPNPRESENTPATH *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 5) = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  *((_QWORD *)this + 7) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 9) = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  v2 = (void *)*((_QWORD *)this + 25);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  *((_QWORD *)this + 9) = &NonReferenceCounted::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_DWORD *)this + 8) |= 0x6D640000u;
  *((_QWORD *)this + 3) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
