/*
 * XREFs of ??1LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18000C4C4
 * Callers:
 *     __lambda_31b30073c32c2d01143855768ac2b990_::operator()_::_1_::dtor$1 @ 0x180028B9D (__lambda_31b30073c32c2d01143855768ac2b990_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ @ 0x180013ACC (-Destroy@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::~LaunchUriActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity *this)
{
  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::`vftable';
  wil::ActivityBase<1,35184372088832,5>::Destroy();
  wil::ActivityBase<1,35184372088832,5>::~ActivityBase<1,35184372088832,5>(this);
}
