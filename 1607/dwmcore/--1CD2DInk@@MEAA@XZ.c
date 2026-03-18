/*
 * XREFs of ??1CD2DInk@@MEAA@XZ @ 0x18017DB68
 * Callers:
 *     ??_ECD2DInk@@MEAAPEAXI@Z @ 0x18017DBD0 (--_ECD2DInk@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DInk::~CD2DInk(CD2DInk *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CD2DInk::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DMesh::`vftable'{for `IDeviceResource'};
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  CD2DResource::~CD2DResource(this);
}
