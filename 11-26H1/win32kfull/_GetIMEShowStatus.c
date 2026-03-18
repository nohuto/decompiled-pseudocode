/*
 * XREFs of _GetIMEShowStatus @ 0x14020070C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     NtUserGetIMEShowStatus @ 0x1402006D0 (NtUserGetIMEShowStatus.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GetIMEShowStatus(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(W32GetUserSessionState(a1, a2) + 14296) != 0;
}
