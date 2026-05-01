/*
 * XREFs of ??1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180024E04
 * Callers:
 *     _CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged_::_1_::dtor$0 @ 0x1800317DC (_CSingleViewShellExperience--OnClientWindowReadyForPresentationChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180025CC8 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::~OnClientWindowReadinessProcessed(
        SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
