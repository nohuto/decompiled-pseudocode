/*
 * XREFs of ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180001430
 * Callers:
 *     ??$MakeAndInitialize@VPCShellImmersiveComponentCreator@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18000523C (--$MakeAndInitialize@VPCShellImmersiveComponentCreator@@UIUnknown@@@Details@WRL@Microsoft@@YAJPE.c)
 *     ??$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180015750 (--$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@Y.c)
 *     ??0CLaunchActivatedEventArgs@@QEAA@XZ @ 0x18002A27C (--0CLaunchActivatedEventArgs@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

Microsoft::WRL::FtmBase *__fastcall Microsoft::WRL::FtmBase::FtmBase(Microsoft::WRL::FtmBase *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rcx
  LPUNKNOWN v4; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+30h] [rbp+8h] BYREF

  ppunkMarshal = 0LL;
  v1 = (__int64 *)((char *)this + 16);
  *(_QWORD *)this = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)this + 2) = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, __int64 *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      &GUID_00000003_0000_0000_c000_000000000046,
      v1);
  }
  v4 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v4->lpVtbl->Release)(v4);
  }
  return this;
}
