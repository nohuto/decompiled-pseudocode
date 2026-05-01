/*
 * XREFs of ??1LaunchCompleted@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180025C9C
 * Callers:
 *     _CSingleViewShellExperience::LaunchCompleted_::_1_::dtor$0 @ 0x180031734 (_CSingleViewShellExperience--LaunchCompleted_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180025BAC (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall SingleViewExperienceTelemetry::LaunchCompleted::~LaunchCompleted(
        SingleViewExperienceTelemetry::LaunchCompleted *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::LaunchCompleted::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
