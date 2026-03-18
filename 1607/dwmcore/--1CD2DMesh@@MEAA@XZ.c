/*
 * XREFs of ??1CD2DMesh@@MEAA@XZ @ 0x18017DED4
 * Callers:
 *     ??_ECD2DMesh@@MEAAPEAXI@Z @ 0x18017DF20 (--_ECD2DMesh@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DMesh::~CD2DMesh(CD2DMesh *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD2DMesh::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DMesh::`vftable'{for `IDeviceResource'};
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CD2DResource::~CD2DResource(this);
}
