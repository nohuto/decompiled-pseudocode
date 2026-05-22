/*
 * XREFs of ?SendHomeEvent@MPCSixDofProcessor@@AEAAXXZ @ 0x18004580C
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180045950 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSixDofProcessor::SendHomeEvent(MPCSixDofProcessor *this)
{
  _QWORD *v1; // rbx
  HRESULT v2; // eax
  __int64 v3; // rcx
  HSTRING v4; // rdi
  int v5; // edi
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v7; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v8; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (_QWORD *)((char *)this + 288);
  if ( !*((_QWORD *)this + 36) )
  {
    v8 = 0LL;
    v2 = WindowsCreateStringReference(L"Windows.Mirage.Internal.GesturesPriv", 0x24u, &v7, &v8);
    if ( v2 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
      __debugbreak();
    }
    v3 = *v1;
    v4 = v8;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    *v1 = 0LL;
    v5 = RoActivateInstance(v4, &v6);
    if ( v5 < 0 )
      goto LABEL_13;
    if ( *(_QWORD *)&GUID_13b12dd0_d149_4adc_b1bf_f92a60ceee5c.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_13b12dd0_d149_4adc_b1bf_f92a60ceee5c.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *v1 = v6;
    }
    else
    {
      v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_13b12dd0_d149_4adc_b1bf_f92a60ceee5c,
             v1);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( v5 < 0 )
    {
LABEL_13:
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xE7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        (const char *)(unsigned int)v5);
      JUMPOUT(0x180045941LL);
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 88LL))(*v1, 0LL);
}
