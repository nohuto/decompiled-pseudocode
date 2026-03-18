/*
 * XREFs of ??1CD2DEffect@@MEAA@XZ @ 0x180021464
 * Callers:
 *     ??_GCD2DEffect@@MEAAPEAXI@Z @ 0x180021420 (--_GCD2DEffect@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DEffect::~CD2DEffect(CD2DEffect *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD2DEffect::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DResource::`vftable'{for `IDeviceResource'};
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CD2DResource::~CD2DResource(this);
}
