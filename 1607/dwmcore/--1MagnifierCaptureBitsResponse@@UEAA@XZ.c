/*
 * XREFs of ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x180121070
 * Callers:
 *     ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1801210B0 (--_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(MagnifierCaptureBitsResponse *this)
{
  CMILCOMBase *v2; // rcx

  *(_QWORD *)this = &MagnifierCaptureBitsResponse::`vftable';
  v2 = (CMILCOMBase *)*((_QWORD *)this + 20);
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
