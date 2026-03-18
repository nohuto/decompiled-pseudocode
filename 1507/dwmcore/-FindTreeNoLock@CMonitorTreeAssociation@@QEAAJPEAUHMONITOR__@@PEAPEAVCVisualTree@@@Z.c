/*
 * XREFs of ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18000A634
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18000A1B0 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x1800E323C (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18012A954 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x18012AB28 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801315A0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMonitorTreeAssociation::FindTreeNoLock(
        CMonitorTreeAssociation *this,
        HMONITOR a2,
        struct CVisualTree **a3)
{
  unsigned int v4; // r9d
  unsigned int v5; // ebx
  volatile signed __int32 *v6; // rcx
  unsigned int v8; // ecx
  __int64 v9; // r10

  *a3 = 0LL;
  v4 = *((_DWORD *)this + 10);
  v5 = -2147024890;
  if ( v4 )
  {
    if ( a2 )
    {
      v8 = 0;
      v9 = *((_QWORD *)this + 2);
      while ( *(HMONITOR *)(v9 + 16LL * v8) != a2 )
      {
        if ( ++v8 >= v4 )
          return v5;
      }
      v6 = *(volatile signed __int32 **)(v9 + 16LL * v8 + 8);
    }
    else
    {
      v6 = *(volatile signed __int32 **)(*((_QWORD *)this + 2) + 8LL);
    }
    *a3 = (struct CVisualTree *)v6;
    _InterlockedIncrement(v6 + 2);
    return 0;
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x8Eu);
  }
  return v5;
}
