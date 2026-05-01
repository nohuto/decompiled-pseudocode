/*
 * XREFs of ??$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@012@$$QEAPEAUIEnergyNotificationServer@@$$QEAPEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Z @ 0x18004836C
 * Callers:
 *     ?GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@Z @ 0x180049AC8 (-GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV-$ComPtr@VAppEnergyInformation.c)
 * Callees:
 *     ??$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Details@WRL@Microsoft@@YAJPEAPEAVAppEnergyInformation@@$$QEAPEAUIEnergyNotificationServer@@$$QEAPEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Z @ 0x1800482BC (--$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecService.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004ACE0 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppEnergyInformation,AppEnergyInformation,IEnergyNotificationServer *,ExecutionModel::IRMExecServicesProvider *,unsigned short const * &,_WNF_STATE_NAME &>(
        AppEnergyInformation **a1,
        struct IEnergyNotificationServer **a2,
        struct ExecutionModel::IRMExecServicesProvider **a3,
        const unsigned __int16 **a4,
        struct _WNF_STATE_NAME *a5)
{
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<AppEnergyInformation,AppEnergyInformation,IEnergyNotificationServer *,ExecutionModel::IRMExecServicesProvider *,unsigned short const * &,_WNF_STATE_NAME &>(
           a1,
           a2,
           a3,
           a4,
           a5);
}
