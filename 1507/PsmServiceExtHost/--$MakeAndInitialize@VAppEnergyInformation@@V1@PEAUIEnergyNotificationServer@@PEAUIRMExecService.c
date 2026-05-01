/*
 * XREFs of ??$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Details@WRL@Microsoft@@YAJPEAPEAVAppEnergyInformation@@$$QEAPEAUIEnergyNotificationServer@@$$QEAPEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Z @ 0x1800482BC
 * Callers:
 *     ??$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@012@$$QEAPEAUIEnergyNotificationServer@@$$QEAPEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Z @ 0x18004836C (--$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUI_ea_18004836C.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AppEnergyInformation@@QEAA@XZ @ 0x1800489E0 (--0AppEnergyInformation@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@IEBAXXZ @ 0x18004AC88 (-InternalAddRef@-$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004ACE0 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@AppEnergyInformation@@QEAAJPEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@PEBGU_WNF_STATE_NAME@@@Z @ 0x18004C49C (-RuntimeClassInitialize@AppEnergyInformation@@QEAAJPEAUIEnergyNotificationServer@@PEAUIRMExecSer.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppEnergyInformation,AppEnergyInformation,IEnergyNotificationServer *,ExecutionModel::IRMExecServicesProvider *,unsigned short const * &,_WNF_STATE_NAME &>(
        AppEnergyInformation **a1,
        struct IEnergyNotificationServer **a2,
        struct ExecutionModel::IRMExecServicesProvider **a3,
        const unsigned __int16 **a4,
        struct _WNF_STATE_NAME *a5)
{
  AppEnergyInformation *v9; // rax
  int v10; // ebx
  AppEnergyInformation *v11; // rsi
  const unsigned __int16 *v12; // r9
  struct ExecutionModel::IRMExecServicesProvider *v13; // r8
  AppEnergyInformation *v15; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  v9 = (AppEnergyInformation *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = AppEnergyInformation::AppEnergyInformation(v9);
    v12 = *a4;
    v13 = *a3;
    v15 = v11;
    v10 = AppEnergyInformation::RuntimeClassInitialize(v11, *a2, v13, v12, *a5);
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<AppEnergyInformation>::InternalAddRef(&v15);
      v10 = 0;
      *a1 = v11;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v15);
  return (unsigned int)v10;
}
