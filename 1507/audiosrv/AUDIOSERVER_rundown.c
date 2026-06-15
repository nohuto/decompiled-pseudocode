/*
 * XREFs of AUDIOSERVER_rundown @ 0x180005290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?Find@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCVADServer@@PEAU3@@Z @ 0x1800053B8 (-Find@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEBAPEAU__POSITIO.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180006374 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180008F64 (-RemoveAt@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__PO.c)
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180008FE0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18000AD80 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 */

void __fastcall AUDIOSERVER_rundown(void *a1)
{
  __int64 (__fastcall *v2)(LPVOID); // rdi
  int v3; // eax
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  LPCRITICAL_SECTION v8; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      107LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      a1);
  }
  EnterCriticalSection(&g_csVadList);
  v2 = *(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)a1 + 16LL);
  if ( v2 == ATL::CComObject<CVADServer>::Release )
    v3 = ATL::CComObject<CVADServer>::Release(a1);
  else
    v3 = v2(a1);
  v4 = v3;
  v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      108LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      a1,
      v3);
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x35u,
      (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
  }
  if ( LODWORD(v8[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v8);
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
