/*
 * XREFs of AudioServerDisconnect @ 0x18002CD60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18002C030 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x18002CED0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180031460 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18003315C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerDisconnect(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 (__fastcall *v3)(volatile signed __int32 *); // rdi
  int v4; // eax
  __int64 v5; // rax
  bool v6; // zf
  LPCRITICAL_SECTION v7; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  v1 = *a1;
  EnterCriticalSection(&g_csVadList);
  v3 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL);
  if ( v3 == ATL::CComObject<CVADServer>::Release )
    v4 = ATL::CComObject<CVADServer>::Release(v1);
  else
    v4 = v3(v1);
  if ( !v4 )
  {
    v5 = g_VADServerList;
    if ( g_VADServerList )
    {
      while ( *(volatile signed __int32 **)(v5 + 16) != v1 )
      {
        v5 = *(_QWORD *)v5;
        if ( !v5 )
          goto LABEL_14;
      }
      if ( v5 == g_VADServerList )
        g_VADServerList = *(_QWORD *)v5;
      else
        **(_QWORD **)(v5 + 8) = *(_QWORD *)v5;
      if ( v5 == qword_1800E54C8 )
        qword_1800E54C8 = *(_QWORD *)(v5 + 8);
      else
        *(_QWORD *)(*(_QWORD *)v5 + 8LL) = *(_QWORD *)(v5 + 8);
      *(_QWORD *)v5 = qword_1800E54E0;
      v6 = qword_1800E54D0-- == 1;
      qword_1800E54E0 = v5;
      if ( v6 )
        ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll(&g_VADServerList);
    }
LABEL_14:
    UpdateOffloadPowerRequest();
  }
  LeaveCriticalSection(&g_csVadList);
  v7 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  *a1 = 0LL;
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, (__int64)&WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids);
  }
  v6 = LODWORD(v7[1].DebugInfo)-- == 1;
  if ( v6 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v7);
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
