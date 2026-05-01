/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013540
 * Callers:
 *     _lambda_e7d66ec3c204a83377ccb333ff70ed66_::operator() @ 0x18000B4F8 (_lambda_e7d66ec3c204a83377ccb333ff70ed66_--operator().c)
 *     ??1?$ComPtr@VSetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000C304 (--1-$ComPtr@VSetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180010900 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@WRL@Microsoft@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180010920 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@W_ea_180010920.c)
 *     ?Release@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x1800135E0 (-Release@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ.c)
 *     _lambda_cdca003ac9496c425fbc452970c01125_::operator() @ 0x180014AD0 (_lambda_cdca003ac9496c425fbc452970c01125_--operator().c)
 *     _lambda_61beeb39da0ffab562e69952bf082708_::operator() @ 0x180015838 (_lambda_61beeb39da0ffab562e69952bf082708_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *((_QWORD *)a1 + 6);
  if ( v1 < 0 )
  {
    do
LABEL_8:
      v5 = *(_DWORD *)(2 * v1 + 0x10);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v5 - 1, v5) );
    v2 = v5 - 1;
LABEL_10:
    if ( !v2 )
    {
      if ( a1 )
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 48))(a1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  else
  {
    while ( (_DWORD)v1 != 0x7FFFFFFF )
    {
      v2 = v1 - 1;
      v4 = _InterlockedCompareExchange64(a1 + 6, v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        goto LABEL_10;
      if ( v4 < 0 )
        goto LABEL_8;
    }
    return 2147483646;
  }
  return v2;
}
