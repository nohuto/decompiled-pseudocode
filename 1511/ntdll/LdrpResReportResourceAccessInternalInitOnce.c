/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x1800512B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventSetInformation @ 0x180053EA0 (EtwEventSetInformation.c)
 *     EtwEventRegister @ 0x1800541A0 (EtwEventRegister.c)
 */

__int64 LdrpResReportResourceAccessInternalInitOnce()
{
  __int128 v0; // xmm0
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v0 = *((_OWORD *)off_180142178 - 1);
  qword_180142198 = 0LL;
  qword_1801421A0 = 0LL;
  v2 = v0;
  if ( !(unsigned int)EtwEventRegister(&v2, TlgEnableCallback, &dword_180142170, &qword_180142190) )
    EtwEventSetInformation(qword_180142190, 2LL, off_180142178, *(unsigned __int16 *)off_180142178);
  dword_180145ED4 = (unsigned __int8)(__rdtsc() >> 4);
  return 1LL;
}
