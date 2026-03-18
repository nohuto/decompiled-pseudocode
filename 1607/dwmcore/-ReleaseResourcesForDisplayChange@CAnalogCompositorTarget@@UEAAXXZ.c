/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CAnalogCompositorTarget@@UEAAXXZ @ 0x180167220
 * Callers:
 *     ??1CAnalogCompositorTarget@@EEAA@XZ @ 0x180166E60 (--1CAnalogCompositorTarget@@EEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnalogCompositorTarget::ReleaseResourcesForDisplayChange(CAnalogCompositorTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 8) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 9) = 0LL;
  }
}
