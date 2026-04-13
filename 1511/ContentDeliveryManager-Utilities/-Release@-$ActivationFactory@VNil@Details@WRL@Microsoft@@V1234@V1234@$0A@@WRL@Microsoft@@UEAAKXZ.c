/*
 * XREFs of ?Release@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180007790
 * Callers:
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800072C0 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VContentManagementBrokerServer@Conte.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VContentManagementService@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800073F0 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VContentManagementService@ContentMan.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VAppContainerCreativeEventReportedCache@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180007520 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VAppContainerCreativeEventReportedCa.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1)
{
  unsigned __int32 v1; // esi
  int v2; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 12));
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 4) == 0 && v1 == 1 )
      goto LABEL_7;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 32) >> 2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL);
    if ( (v2 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_7:
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v1;
}
