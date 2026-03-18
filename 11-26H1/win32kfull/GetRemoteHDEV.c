/*
 * XREFs of GetRemoteHDEV @ 0x140291FF4
 * Callers:
 *     RemoteShadowCleanup @ 0x1400F6EE4 (RemoteShadowCleanup.c)
 *     RemotePassthruDisable @ 0x14023BB7C (RemotePassthruDisable.c)
 *     CtxDisplayIOCtl @ 0x1402D297C (CtxDisplayIOCtl.c)
 *     RemoteShadowStart @ 0x1402D2ACC (RemoteShadowStart.c)
 * Callees:
 *     DrvFindRemoteDriverhdevInMDEV @ 0x140346368 (DrvFindRemoteDriverhdevInMDEV.c)
 */

__int64 __fastcall GetRemoteHDEV(__int64 a1, __int64 a2)
{
  __int16 v3; // bx
  __int64 UserSessionState; // rax
  __int64 v5; // rcx

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = 65533LL;
  if ( (unsigned __int16)(v3 - 1) > 0xFFFDu )
    return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, 1LL) + 56968) + 40LL);
  v5 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 16LL);
  if ( *(_DWORD *)(v5 + 20) == 1 )
    return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, 1LL) + 56968) + 40LL);
  else
    return DrvFindRemoteDriverhdevInMDEV(v5, 1LL, a2);
}
