/*
 * XREFs of ??0InputRedirectionComponent@@IEAA@XZ @ 0x18008247C
 * Callers:
 *     ?Create@InputRedirectionComponent@@SAJPEAUIInputDeviceInfoStore@@PEAPEAUIInputTargetingComponent@@@Z @ 0x180082920 (-Create@InputRedirectionComponent@@SAJPEAUIInputDeviceInfoStore@@PEAPEAUIInputTargetingComponent.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
InputRedirectionComponent *__fastcall InputRedirectionComponent::InputRedirectionComponent(
        InputRedirectionComponent *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &InputRedirectionComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &InputRedirectionComponent::`vftable'{for `IRemoteInputRedirection'};
  *((_QWORD *)this + 2) = &InputRedirectionComponent::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 3) = &InputRedirectionComponent::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  memset((char *)this + 80, 0, 0x30uLL);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *((_QWORD *)this + 5) = 0LL;
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *((_QWORD *)this + 6) = 0LL;
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 7) = 0LL;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 8) = 0LL;
  return this;
}
