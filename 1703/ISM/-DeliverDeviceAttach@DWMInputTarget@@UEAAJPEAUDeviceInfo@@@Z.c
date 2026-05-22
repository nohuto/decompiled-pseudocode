/*
 * XREFs of ?DeliverDeviceAttach@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x18001A390
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::DeliverDeviceAttach(DWMInputTarget *this, struct DeviceInfo *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  int v5; // eax
  int v7; // [rsp+30h] [rbp-788h] BYREF
  __int128 v8; // [rsp+38h] [rbp-780h]
  __int128 v9; // [rsp+48h] [rbp-770h]
  __int128 v10; // [rsp+58h] [rbp-760h]
  __int64 v11; // [rsp+68h] [rbp-750h]
  wil::details::in1diag3 *retaddr; // [rsp+7B8h] [rbp+0h]

  v2 = *(_OWORD *)a2;
  v3 = *((_OWORD *)a2 + 1);
  v7 = 1;
  v8 = v2;
  v4 = *((_OWORD *)a2 + 2);
  v9 = v3;
  *(_QWORD *)&v3 = *((_QWORD *)a2 + 6);
  v10 = v4;
  v11 = v3;
  v5 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, int *, __int64))(*(_QWORD *)InputDeliveryServer::s_pInputDeliveryServer
                                                                                        + 48LL))(
         InputDeliveryServer::s_pInputDeliveryServer,
         (char *)this + 72,
         &v7,
         1896LL);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x13F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x18001A436LL);
  }
  return 0LL;
}
