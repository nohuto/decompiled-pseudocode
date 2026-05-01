/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043950
 * Callers:
 *     ?VerifyIsValidAUMID@Internal@ExecutionModel@@YAJPEBG0@Z @ 0x180045D48 (-VerifyIsValidAUMID@Internal@ExecutionModel@@YAJPEBG0@Z.c)
 *     ?GetTargetAppDisplayName@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180049D80 (-GetTargetAppDisplayName@EnergyToastMessage@@QEBAJAEAV-$basic_string@GU-$char_traits@G@utl@@V-$a.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004ACE0 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackageStatics>>(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_866d8ab1_f714_4bb9_bf47_068f4c8ea4dd, a2);
}
