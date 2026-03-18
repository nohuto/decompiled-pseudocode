/*
 * XREFs of VidSchCancelDeferredVidPnSourceVisibility @ 0x1C006DF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchCancelDeferredVidPnSourceVisibility(__int64 a1, unsigned int a2)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8LL * a2 + 2592) + 42816LL), 0);
}
