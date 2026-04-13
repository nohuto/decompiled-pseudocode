/*
 * XREFs of ??1SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18000CAC4
 * Callers:
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$1 @ 0x180028D1D (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ @ 0x180013ACC (-Destroy@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::SendAppServiceMessageActivity::~SendAppServiceMessageActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::SendAppServiceMessageActivity *this)
{
  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementTelemetry::SendAppServiceMessageActivity::`vftable';
  wil::ActivityBase<1,35184372088832,5>::Destroy();
  wil::ActivityBase<1,35184372088832,5>::~ActivityBase<1,35184372088832,5>(this);
}
