/*
 * XREFs of GrepReleasePublicPFTSemaphoreEx @ 0x140166A90
 * Callers:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1400C6734 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140166AC8 (--$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GrepReleasePublicPFTSemaphoreEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = W32GetSessionState(a1, a2, a3);
  v4 = *(_QWORD *)(*(_QWORD *)(result + 96) + 20320LL);
  if ( v4 )
    return GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v4);
  return result;
}
