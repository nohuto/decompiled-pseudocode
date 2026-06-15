/*
 * XREFs of AudioServerStartStream @ 0x180039380
 * Callers:
 *     <none>
 * Callees:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180022390 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x18002CED0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerStartStream(unsigned __int64 a1, void *a2)
{
  __int64 (__fastcall *v4)(unsigned __int64, void *, int); // rdi
  int started; // eax
  int v6; // ebx

  EnterCriticalSection(&g_csVadList);
  v4 = *(__int64 (__fastcall **)(unsigned __int64, void *, int))(*(_QWORD *)a1 + 56LL);
  if ( v4 == CVADServer::StartStream )
    started = CVADServer::StartStream(a1, a2, 2);
  else
    started = v4(a1, a2, 2);
  v6 = started;
  UpdateOffloadPowerRequest();
  LeaveCriticalSection(&g_csVadList);
  if ( v6 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      82LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)v6);
  }
  return (unsigned int)v6;
}
