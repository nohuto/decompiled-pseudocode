/*
 * XREFs of ??_GCVpoContextProxy@@QEAAPEAXI@Z @ 0x180070A08
 * Callers:
 *     AudioServerCloseVpoContext @ 0x180072420 (AudioServerCloseVpoContext.c)
 *     AudioServerGetEndpointVpoContext @ 0x180072FD0 (AudioServerGetEndpointVpoContext.c)
 *     AudioServerGetStreamVpoContext @ 0x180073430 (AudioServerGetStreamVpoContext.c)
 *     VPOCONTEXT_rundown @ 0x1800738F0 (VPOCONTEXT_rundown.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

CVpoContextProxy *__fastcall CVpoContextProxy::`scalar deleting destructor'(CVpoContextProxy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
