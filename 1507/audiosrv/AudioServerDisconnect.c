/*
 * XREFs of AudioServerDisconnect @ 0x180009790
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180006374 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180008F64 (-RemoveAt@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__PO.c)
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180008FE0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18000AD80 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerDisconnect(void **a1)
{
  void *v1; // rbx
  __int64 (__fastcall *v3)(LPVOID); // rsi
  int v4; // eax
  __int64 v5; // rcx
  __int64 *v6; // rdx
  LPCRITICAL_SECTION v7; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v1 = *a1;
  EnterCriticalSection(&g_csVadList);
  v3 = *(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v1 + 16LL);
  if ( v3 == ATL::CComObject<CVADServer>::Release )
    v4 = ATL::CComObject<CVADServer>::Release(v1);
  else
    v4 = v3(v1);
  if ( !v4 )
  {
    v6 = (__int64 *)g_VADServerList;
    if ( g_VADServerList )
    {
      while ( (void *)v6[2] != v1 )
      {
        v6 = (__int64 *)*v6;
        if ( !v6 )
          goto LABEL_9;
      }
      ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAt(v5, v6);
    }
LABEL_9:
    UpdateOffloadPowerRequest();
  }
  LeaveCriticalSection(&g_csVadList);
  v7 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  *a1 = 0LL;
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x35u,
      (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
  }
  if ( LODWORD(v7[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v7);
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
