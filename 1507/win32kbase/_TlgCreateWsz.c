/*
 * XREFs of _TlgCreateWsz @ 0x1C005A2E0
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C0059800 (xxxUserChangeDisplaySettings.c)
 *     ??$CitpBaseDataLogToEtw@U_CIT_SYSTEM_DATA@@@@YAXPEBU_CIT_SYSTEM_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@@Z @ 0x1C00E177C (--$CitpBaseDataLogToEtw@U_CIT_SYSTEM_DATA@@@@YAXPEBU_CIT_SYSTEM_DATA@@PEBU_CIT_BASE_DATA_LOG_CON.c)
 *     ??$CitpBaseDataLogToEtw@U_CIT_USE_DATA@@@@YAXPEBU_CIT_USE_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@@Z @ 0x1C00E1D14 (--$CitpBaseDataLogToEtw@U_CIT_USE_DATA@@@@YAXPEBU_CIT_USE_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = &word_1C008A410;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (ULONGLONG)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}
