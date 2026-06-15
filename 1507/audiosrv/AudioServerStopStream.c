/*
 * XREFs of AudioServerStopStream @ 0x180008A30
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180008FE0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180014690 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerStopStream(_DWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(_DWORD *, __int64, __int64); // rbx
  int v5; // eax
  int v6; // ebx

  EnterCriticalSection(&g_csVadList);
  v4 = *(__int64 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v4 == (char *)CVADServer::StopStream )
    v5 = CVADServer::StopStream(a1, a2, 2LL);
  else
    v5 = v4(a1, a2, 2LL);
  a1[75] = 0;
  v6 = v5;
  UpdateOffloadPowerRequest();
  LeaveCriticalSection(&g_csVadList);
  if ( v6 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      90LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)v6);
  }
  return (unsigned int)v6;
}
