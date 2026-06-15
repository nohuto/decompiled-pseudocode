/*
 * XREFs of AUDIOSERVER_rundown @ 0x180002AF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Find@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCVADServer@@PEAU3@@Z @ 0x180002C18 (-Find@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEBAPEAU__POSITIO.c)
 *     ?RemoveAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180002C3C (-RemoveAt@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__PO.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18002C030 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x18002CED0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18003315C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 */

void __fastcall AUDIOSERVER_rundown(void *a1)
{
  __int64 (__fastcall *v2)(LPVOID); // rdi
  int v3; // eax
  int v4; // edi
  TraceLoggingHProvider v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  LPCRITICAL_SECTION v8; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 105LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, a1);
  }
  EnterCriticalSection(&g_csVadList);
  v2 = *(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)a1 + 16LL);
  if ( v2 == ATL::CComObject<CVADServer>::Release )
    v3 = ATL::CComObject<CVADServer>::Release(a1);
  else
    v3 = v2(a1);
  v4 = v3;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 106LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, a1, v3);
  }
  if ( !v4 )
  {
    v6 = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::Find(v5, &v12);
    if ( v6 )
      ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAt(v7, v6);
    UpdateOffloadPowerRequest();
  }
  LeaveCriticalSection(&g_csVadList);
  v8 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, (__int64)&WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids);
  }
  if ( LODWORD(v8[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v8);
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
