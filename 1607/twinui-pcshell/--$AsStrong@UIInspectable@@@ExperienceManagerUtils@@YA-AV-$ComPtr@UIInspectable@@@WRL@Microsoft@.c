/*
 * XREFs of ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x18001F144
 * Callers:
 *     _lambda_013c46c4876e793d779fba5076862f22_::operator() @ 0x18001E058 (_lambda_013c46c4876e793d779fba5076862f22_--operator().c)
 *     ?OnMessage@?$ImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@UEAAJI_K_J@Z @ 0x18001EDC0 (-OnMessage@-$ImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@UEAAJI_.c)
 *     ?OnIdleStateChanged@?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@UEAAJH@Z @ 0x18001EF00 (-OnIdleStateChanged@-$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@UEAAJH@Z.c)
 *     ?Invoke@?$InvokeHelper@U?$ITypedEventHandler@PEAVShellExperienceDispatcher@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewStateChangedEventArgs@2345@@Foundation@Windows@@V_lambda_587ab2033dc5b1aed1eae36cec5be19f_@@$01@Details@WRL@Microsoft@@UEAAJPEAUIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewStateChangedEventArgs@6789@@Z @ 0x180020720 (-Invoke@-$InvokeHelper@U-$ITypedEventHandler@PEAVShellExperienceDispatcher@Experience@Shell@Inte.c)
 *     ?Run@?$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180020D00 (-Run@-$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ExperienceManagerUtils::AsStrong<IInspectable>(_QWORD *a1, _QWORD *a2)
{
  *a1 = 0LL;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)*a2 + 24LL))(
      *a2,
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      a1);
  return a1;
}
