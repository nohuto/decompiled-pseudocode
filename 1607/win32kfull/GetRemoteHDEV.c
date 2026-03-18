/*
 * XREFs of GetRemoteHDEV @ 0x1C01FA100
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C01FA080 (CtxDisplayIOCtl.c)
 *     RemotePassthruDisable @ 0x1C01FA180 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C01FA230 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01FA3B0 (RemoteShadowStart.c)
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
