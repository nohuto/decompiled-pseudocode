/*
 * XREFs of ??1CD2DPencil@@MEAA@XZ @ 0x18017DD18
 * Callers:
 *     ??_GCD2DPencil@@MEAAPEAXI@Z @ 0x18017DD60 (--_GCD2DPencil@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DPencil::~CD2DPencil(CD2DPencil *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD2DPencil::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DMesh::`vftable'{for `IDeviceResource'};
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CD2DResource::~CD2DResource(this);
}
