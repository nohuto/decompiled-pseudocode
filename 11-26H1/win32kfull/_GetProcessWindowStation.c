/*
 * XREFs of _GetProcessWindowStation @ 0x1401BC230
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140154D14 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     EditionGetProcessWindowStationEntryPoint @ 0x1401BC1F0 (EditionGetProcessWindowStationEntryPoint.c)
 *     NtUserSetImeInfoEx @ 0x1402BCC90 (NtUserSetImeInfoEx.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402CF854 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 664);
  return *(_QWORD *)(CurrentProcessWin32Process + 656);
}
