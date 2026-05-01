/*
 * XREFs of ?RuntimeClassInitialize@AppEnergyInformation@@QEAAJPEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@PEBGU_WNF_STATE_NAME@@@Z @ 0x18004C49C
 * Callers:
 *     ??$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Details@WRL@Microsoft@@YAJPEAPEAVAppEnergyInformation@@$$QEAPEAUIEnergyNotificationServer@@$$QEAPEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Z @ 0x1800482BC (--$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecService.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180016A90 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ??4?$ComPtr@UIRMExecServicesProvider@ExecutionModel@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x180021CC8 (--4-$ComPtr@UIRMExecServicesProvider@ExecutionModel@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRMExecServ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004ACE0 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::RuntimeClassInitialize(
        AppEnergyInformation *this,
        struct IEnergyNotificationServer *a2,
        struct ExecutionModel::IRMExecServicesProvider *a3,
        unsigned __int16 *a4,
        struct _WNF_STATE_NAME a5)
{
  __int64 v9; // r8
  __int64 v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *((struct IEnergyNotificationServer **)this + 34) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IEnergyNotificationServer *))(*(_QWORD *)a2 + 8LL))(a2);
    v13 = *((_QWORD *)this + 34);
    *((_QWORD *)this + 34) = a2;
    Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v13);
  }
  Microsoft::WRL::ComPtr<ExecutionModel::IRMExecServicesProvider>::operator=((__int64 *)this + 37, (__int64)a3);
  if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
         (__int64)this + 240,
         (__int64 *)a4,
         v9,
         v10) )
  {
    *((struct _WNF_STATE_NAME *)this + 35) = a5;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      786LL,
      (__int64)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
