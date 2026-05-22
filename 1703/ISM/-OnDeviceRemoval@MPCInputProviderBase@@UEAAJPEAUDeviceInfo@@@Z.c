/*
 * XREFs of ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x18004EF50
 * Callers:
 *     ?OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18002D600 (-OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180041610 (-OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x18004EB18 (--1MPCInputProviderBase@@UEAA@XZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004B200 (-RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputProviderBase::OnDeviceRemoval(MPCInputProviderBase *this, struct DeviceInfo *a2)
{
  struct IMPCInputProviderBase *v2; // rdi
  const char *v3; // r9
  MPCHolographicInputManager *v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (MPCInputProviderBase *)((char *)this + 16);
  if ( *(_DWORD *)a2 != (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 2) + 88LL))((char *)this + 16) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x116,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      v3);
    JUMPOUT(0x18004EFA8LL);
  }
  MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::RemoveInputProvider(v4, v2);
  return 0LL;
}
