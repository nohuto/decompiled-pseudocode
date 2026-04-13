/*
 * XREFs of ?Instance@ShellPlacementTelemetry@Logging@CreativeFramework@@KAPEAV123@XZ @ 0x18000B914
 * Callers:
 *     ?LogFailure_@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEAUFailureInfo@wil@@@Z @ 0x18000CC98 (-LogFailure_@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEAUFailureInfo@wil@@@Z.c)
 *     ?FailureLoggingCallback@ShellPlacementTelemetry@Logging@CreativeFramework@@CAXPEAUFailureInfo@wil@@PEAG_K@Z @ 0x18000CE10 (-FailureLoggingCallback@ShellPlacementTelemetry@Logging@CreativeFramework@@CAXPEAUFailureInfo@wi.c)
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18000FBE4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VShellPlacementTelemetry@Logging@CreativeFramework@@@details@wil@@QEAA@XZ @ 0x180016064 (--1Completer@-$static_lazy@VShellPlacementTelemetry@Logging@CreativeFramework@@@details@wil@@QEA.c)
 *     atexit @ 0x180027D64 (atexit.c)
 */

struct CreativeFramework::Logging::ShellPlacementTelemetry *CreativeFramework::Logging::ShellPlacementTelemetry::Instance(
        void)
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  if ( (`CreativeFramework::Logging::ShellPlacementTelemetry::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `CreativeFramework::Logging::ShellPlacementTelemetry::Instance'::`2'::`local static guard' |= 1u;
    atexit(`CreativeFramework::Logging::ShellPlacementTelemetry::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
  }
  InitOnceBeginInitialize(
    &`CreativeFramework::Logging::ShellPlacementTelemetry::Instance'::`2'::wrapper,
    0,
    &fPending,
    &Context);
  if ( fPending )
  {
    v2 = 0;
    Context = &qword_18003DD48;
    v1 = &`CreativeFramework::Logging::ShellPlacementTelemetry::Instance'::`2'::wrapper;
    qword_18003DD48 = (__int64)&CreativeFramework::Logging::ShellPlacementTelemetry::`vftable';
    wil::details::static_lazy<CreativeFramework::Logging::ShellPlacementTelemetry>::Completer::~Completer(&v1);
  }
  return (struct CreativeFramework::Logging::ShellPlacementTelemetry *)Context;
}
