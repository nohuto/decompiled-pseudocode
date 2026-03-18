/*
 * XREFs of DrvNotifySessionStateChange @ 0x1C0064670
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0063BC4 (MultiUserNtGreCleanup.c)
 *     InitializeGreCSRSS @ 0x1C00641EC (InitializeGreCSRSS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvNotifySessionStateChange(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx

  v2 = (unsigned int)a1;
  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = v2;
  *(_QWORD *)(v3 + 32) = (unsigned int)PsGetCurrentProcessSessionId();
  WdLogEvent5_WdEvent(v3);
  SMgrRegisterGdiCallout(VideoPortCallout);
  return SMgrNotifySessionChange((unsigned int)v2);
}
