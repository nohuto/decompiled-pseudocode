/*
 * XREFs of GetRemoteHDEV @ 0x1C0202DEC
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C0202D6C (CtxDisplayIOCtl.c)
 *     RemotePassthruDisable @ 0x1C0202E70 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0202F20 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C02030A0 (RemoteShadowStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRemoteHDEV(__int16 a1, __int64 a2)
{
  if ( (unsigned __int16)(a1 - 1) > 0xFFFDu || *(_DWORD *)(*(_QWORD *)(gpDispInfo + 8LL) + 20LL) == 1 )
    return *gpDispInfo;
  else
    return DrvFindRemoteDriverhdevInMDEV(*(_QWORD *)(gpDispInfo + 8LL), a2, a2);
}
