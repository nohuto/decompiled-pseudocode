/*
 * XREFs of AudioServerStopStream @ 0x1800392F0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x1800221B0 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x18002CED0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerStopStream(_DWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64, int); // rbx
  int v5; // eax
  int v6; // ebx

  EnterCriticalSection(&g_csVadList);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a1 + 64LL);
  if ( v4 == CVADServer::StopStream )
    v5 = CVADServer::StopStream((__int64)a1, a2, 2);
  else
    v5 = v4((__int64)a1, a2, 2);
  a1[70] = 0;
  v6 = v5;
  UpdateOffloadPowerRequest();
  LeaveCriticalSection(&g_csVadList);
  if ( v6 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      83LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)v6);
  }
  return (unsigned int)v6;
}
