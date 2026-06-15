/*
 * XREFs of ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180009E44
 * Callers:
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180009CE0 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?CreateInstance@?$CComObject@VCSaProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x18002DF24 (-CreateInstance@-$CComObject@VCSaProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x180038A70 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x180039838 (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     ??0CAtlComModule@ATL@@QEAA@XZ @ 0x1800398D8 (--0CAtlComModule@ATL@@QEAA@XZ.c)
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x1800421D0 (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x1800427C4 (--0CAtlWinModule@ATL@@QEAA@XZ.c)
 *     ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180042828 (--0CAtlBaseModule@ATL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0LL;
}
