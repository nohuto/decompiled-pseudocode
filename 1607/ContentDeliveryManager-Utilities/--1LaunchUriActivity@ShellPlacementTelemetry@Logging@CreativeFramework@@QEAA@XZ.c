/*
 * XREFs of ??1LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18001D85C
 * Callers:
 *     __lambda_d1d6df3afd909720884b15ba4832b47d_::operator()_::_1_::dtor$1 @ 0x18005A50C (__lambda_d1d6df3afd909720884b15ba4832b47d_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800236C8 (-Destroy@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::~LaunchUriActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity *this)
{
  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::`vftable';
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
