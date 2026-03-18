/*
 * XREFs of _EUDCCountRegion::EUDCCountRegion_::_2_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x140254430
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140071640 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400717B0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 */

void __fastcall EUDCCountRegion::EUDCCountRegion_::_2_::_lambda_1_::_lambda_invoker_cdecl_(void *a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  GreAcquirePushLockShared2<16,0>(v2 + 4864);
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 13500));
  GreReleasePushLockShared2<16,0>(v2 + 4864);
}
